#include "FileHandler.h"

// Magic numbers
#define FSEEK_SUCCESS_VALUE			(0)
#define REMOVE_SUCCESS_VALUE		(0)

FileHandler::FileHandler() : m_isInit(false), m_path(nullptr), m_cursorIndex(0), m_isOpen(false)
{

}

FileHandler::~FileHandler()
{
	// First, close the file f is open
	if (m_isInit && m_isOpen)
	{
		SafeClose();
	}

	// Then, free the path string from heap memory
	if (m_path != nullptr)
	{
		delete[] m_path;
	}

	// Prevent double free of the memory
	m_path = nullptr;
}

bool FileHandler::Init(const char* path, EFileOCMode ocMode)
{
	return false;
}

bool FileHandler::IsInit() const
{
	return false;
}

bool FileHandler::Open(EFileMode fileMode)
{
	return false;
}

bool FileHandler::Close()
{
	return false;
}

bool FileHandler::Write(uint8_t* buffer, uint64_t length)
{
	return false;
}

uint64_t FileHandler::Read(uint8_t* o_buffer, uint64_t maxLength)
{
	return 0;
}

bool FileHandler::Seek(uint64_t index)
{
	if (!m_isInit)
	{
		return false;
	}

	m_cursorIndex = index;

	return true;
}

bool FileHandler::IsExist() const
{
	if (!m_isInit)
	{
		return false;
	}

	FILE* tempFile;

	if ((tempFile = fopen(m_path, "rb")))
	{
		fclose(tempFile);
		return true;
	}

	return false;
}

bool FileHandler::Remove() const
{
	if (!m_isInit || m_isOpen)
	{
		return false;
	}

	return (remove(m_path) == REMOVE_SUCCESS_VALUE);
}

bool FileHandler::SafeOpen(EFileMode fileMode)
{
	if (!m_isInit || m_isOpen)
	{
		return false;
	}

	switch (fileMode)
	{
		eFileMode_Read:
		{
			m_file = fopen(m_path, "rb");
			break;
		}
		eFileMode_Write:
		{
			m_file = fopen(m_path, "ab");
			break;
		}
		default:
		{
			return false;
		}
	}

	if (m_file == nullptr)
	{
		return false;
	}

	m_isOpen = true;

	if (fileMode == eFileMode_Read)
	{
		if (fseek(m_file, m_cursorIndex, SEEK_SET) != FSEEK_SUCCESS_VALUE)
		{
			SafeClose();
			return false;
		}
	}

	return true;
}

bool FileHandler::SafeClose()
{
	if (!m_isInit || !m_isOpen)
	{
		return false;
	}

	fclose(m_file);
	m_isOpen = false;

	return true;
}

bool FileHandler::IsOpen() const
{
	return (m_isInit && m_isOpen);
}

uint64_t FileHandler::GetIndex() const
{
	if (!m_isInit)
	{
		return 0;
	}

	return m_cursorIndex;
}