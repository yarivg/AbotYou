/**
* created by Omer Chen
* @since - APR 2017
*/

#pragma once

#include <stdint.h>
#include "SMessage.h"
#include "SConversation.h"

//	This interface represents object who know to parse messages array into conversations array (good for DS objects)
class IChatConverter
{
public:
	/**
	 * This method parse messages array into conversations array
	 *
	 * @param messagesAmount -			The amount of messages in the array
	 * @param messagesArr -				Array of the messages
	 * @param o_conversationsAmount -	The amount of conversions in the outpt array
	 * @param o_conversationsArr -		Output Array that will allocated on the heap memory with the conversations
	 *
	 * @return (bool) - Whether the method success or not
	 */
	virtual bool SplitIntoConversations(uint32_t messagesAmount, const SMessage* messagesArr, 
										uint32_t& o_conversationsAmount, SConversation*& o_conversationsArr) = 0;
};