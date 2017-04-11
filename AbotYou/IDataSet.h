/**
* created by Omer Chen
* @since - APR 2017
*/

#pragma once

#include <stdint.h>
#include "SMessage.h"

//	This interface represents any data set class of the data
class IDataSet
{
public:
	/**
	 * This method is for set a whole chat inside the data set- good for parsing db object to ds object
	 *
	 * @param messagesAmount -			the amount of messages that sent in the array
	 * @param mssagesArr -				array of all the chat messages in the ds between Alpha and Beta
	 *										@note - must put inside any object the message string, date and sender
	 *
	 * @return (bool) - Whether the metod success or not
	 */
	virtual bool SetChat(uint32_t messagesAmount, const SMessage* messagesArr) = 0;
};