#include "FileHandler.h"

FileHandler::FileHandler()
{

}

FileHandler::~FileHandler()
{

}

bool FileHandler::Init(char* path, EFileOCMode ocMode)
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
	return false;
}

bool FileHandler::IsExist() const
{
	return false;
}

bool FileHandler::Delete() const
{
	return false;
}

bool FileHandler::SafeOpen(EFileMode fileMode)
{
	return false;
}

bool FileHandler::SafeClose()
{
	return false;
}