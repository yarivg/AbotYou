/**
* created by Omer Chen
* @since - APR 2017
*/

#pragma once

#include "FileLogger.h"

FileLogger::FileLogger() : m_isInit(false)
{

}

FileLogger::~FileLogger()
{

}

bool FileLogger::Init(const char* path)
{
	return false;
}

bool FileLogger::Write(SLogMessage& message)
{
	return false;
}

bool FileLogger::Write(ELogType type, char* description, char* methodName)
{
	return false;
}

bool FileLogger::Write(EErrorMessage error, char* methodName)
{
	return false;
}
