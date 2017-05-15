/**
* created by Bar Hergas
* @since - APR 2017
*/

#pragma once

#include <stdint.h>
#include "SMessage.h"
#include "SConversation.h"


class IConversationManager
{
public:
	IConversationManager() {}
	virtual ~IConversationManager() {}

	/**
	* This method gets conversations array and modify the fields related to NLP
	*
	* @param o_conversationsArr -		Output Array that will allocated on the heap memory with the conversations
	*															(the pointers to the messages will be of the real messageArr
	*															so don't free this memory after the method!)
	*
	* @return (bool) - Whether the method success or not
	*/
	virtual bool FillConversationsNlpFields(uint32_t o_conversationsAmount,SConversation*& o_conversationsArr) = 0;
};