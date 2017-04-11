/**
 * created by Omer Chen
 * @since - APR 2017
 */

#pragma once

#include <stdint.h>
#include <time.h>
#include "Definitions.h"

// This struct represents a general message with all the meta data that needed for the analyzing process
struct SMessage
{
	//	The context of the message in null terminated string that allocated on the heap memory
	char*		strMessage;
	
	//	Whether the message is ok for comprison with another message or not
	bool		isComparable;
	
	//	Whether the message is ok for return as an output message or not
	bool		isValidAnswer;

	//	The amount of the dominant words in the message- zero if the message isn't dominant at all
	uint16_t	dominantWordsAmount;
	
	//	Array of dominant words (on heap memory)- every word is null terminated string
	char**		dominantWords;
	
	//	The date and time of sending the message
	tm			date;
	
	//	The sender of the message- Alpha (output message) or Beta (input message)
	EAuthor		sender;
};