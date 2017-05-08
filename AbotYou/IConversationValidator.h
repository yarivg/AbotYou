/**
* created by Omer Chen
* @since - MAY 2017
*/

#pragma once

#include "Definitions.h"
#include "SConversation.h"

//	This Interface represents class of filtering and validation for conversation of some DS
class IConversationValidator
{
public:
	IConversationValidator() {}
	virtual ~IConversationValidator() {}

	/**
	* This method check if converation is valid, if isn't set the validation flag to FALSE
	*														of the message and return false!
	*/
	virtual bool Validate(SConversation& conversation) = 0;
};