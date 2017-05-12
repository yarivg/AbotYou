/**
* created by Omer Chen
* @since - MAY 2017
*/

#pragma once

#include "Definitions.h"
#include "IChatConverter.h"

class ChatConverter : public IChatConverter
{
public:
	enum ETimeScale
	{
		eTimeScale_Seconds = 1,
		eTimeScale_Minutes = 60,
		eTimeScale_Hours = 3600,
		eTimeScale_Days = 86400
	};

	ChatConverter(int delta, ETimeScale scale): m_maxSecondsDelta(delta * scale) {}
	~ChatConverter() {}

	virtual bool SplitIntoConversations(uint32_t messagesAmount, SMessage* messagesArr,
		uint32_t& o_conversationsAmount, SConversation*& o_conversationsArr) override;

private:
	int m_maxSecondsDelta;
};