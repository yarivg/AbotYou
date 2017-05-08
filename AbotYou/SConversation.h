/**
* created by Omer Chen
* @since - APR 2017
*/

#pragma once

#include <stdint.h>
#include "Definitions.h"
#include "SMessage.h"

// This struct represents a general conversation with all the meta data that needed for the analyzing process
struct SConversation
{
	//	The amount of messages in the conversation
	uint16_t	messagesAmount;

 	//	Array of all the mesages in the conversation - allocating on the heap memory dynamicly
	SMessage*	messagesArr;

	//	The amount of the dominant words in the conversation- zero if the conversation isn't dominant at all
	uint16_t	dominantWordsAmount;

	//	Array of dominant words (on heap memory)- every word is null terminated string
	char**		dominantWords;
};