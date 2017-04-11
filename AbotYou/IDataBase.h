/**
* created by Omer Chen
* @since - APR 2017
*/

#pragma once

#include "IDataSet.h"

//	This interface represents any data base that can keep the chat data
class IDataBase
{
public:
	/**
	 * This method initialize the DataBase object with the correct file/foldr path of the DB - change per implement
	 *
	 * @param path -				the path to the db
	 *
	 * @return (bool) - Whether the method success or not
	 */
	virtual bool Init(char* path) = 0;

	/**
	 * This method parse DataBase object to DataSet object
	 *
	 * @param dataSet -			reference to the DataSet object with the correct implement of the interface
	 *
	 * @return (bool) - Whether the method success or not
	 */
	virtual bool Parse(IDataSet& dataSet) const = 0;
};