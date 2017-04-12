#pragma once

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