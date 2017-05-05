#pragma once

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#define STRING_MAX_SIZE				(1024)

#define __DEBUG_MODE

#ifdef __DEBUG_MODE

#define PRINT_DEBUG(str)		printf(str)

#else

#define PRINT_DEBUG

#endif // DEBUG

#define NULL_TERMINATOR			('\0')


//	This enum represents a type of author of any message
enum EAuthor
{
	eAuthor_Alpha = 0,
	eAuthor_Beta,
	euthor_SIZE
};