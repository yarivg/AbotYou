/**
* created by Omer Chen
* @since - APR 2017
*/

#pragma once

#include "IDataBase.h"

//	This class represents the API of AbotYou - First you must init the object and then you can use it
class AbotYouAPI
{
public:
	// Ctor method
	AbotYouAPI();
	
	// Dtor method
	~AbotYouAPI();

	/**
	 * This method initilize the DataSet of AbotYou object
	 *
	 * @param dataBase -				reference to DB object that will parse into AbotYou DS object
	 *
	 * @return (bool) - Whether the method success or not
	 */
	bool Init(const IDataBase& dataBase);

	/**
	 *	This method return the most sensible message to the input message.
	 *
	 * @param inputMessage -			null terminated string message from Beta to Alpha
	 *
	 * @return (char*) the answer of Alpha to Beta's question (allocated on the heap memory)
	 *
	 * @note - when error occurred in the process of this method it return NULL instead of string
	 */
	char* GetMessage(const char* inputMessage) const;
};