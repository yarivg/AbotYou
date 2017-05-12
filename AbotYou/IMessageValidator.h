/**
* created by Omer Chen
* @since - MAY 2017
*/

#pragma once

#include "Definitions.h"
#include "SMessage.h"

//	This Interface represents class of filtering and validation for input messages of some DB
class IMssageValidator
{
public:
	IMssageValidator() {}
	virtual ~IMssageValidator() {}

	/**
	 * This method check if message is valid, if isn't set the validation flag to FALSE
	 *														of the message and return false!
	 */
	virtual bool Validate(SMessage& message) = 0;
};