#include "ChatConverter.h"

bool ChatConverter::SplitIntoConversations(uint32_t messagesAmount, SMessage* messagesArr,
	uint32_t& o_conversationsAmount, SConversation*& o_conversationsArr)
{
	if (messagesArr == nullptr || messagesAmount == 0)
	{
		return false;
	}

	o_conversationsAmount = 1; //must be at least one conversation
	for (int i = 0; i < messagesAmount - 1; i++)
	{
		if (difftime(messagesArr[i].date, messagesArr[i + 1].date) > m_maxSecondsDelta)
		{
			o_conversationsAmount++;
		}
	}

	o_conversationsArr = new SConversation[o_conversationsAmount];

	if (o_conversationsArr == nullptr)
	{
		return false;
	}

	int curConversationIndex = 0;

	// init the first conversation outside the for
	o_conversationsArr[0].messagesAmount = 0;
	o_conversationsArr[0].messagesArr = &messagesArr[0];

	for (int i = 0; i < messagesAmount - 1; i++)
	{
		o_conversationsArr->messagesAmount++;
		
		if (difftime(messagesArr[i].date, messagesArr[i + 1].date) > m_maxSecondsDelta)
		{
			curConversationIndex++;
			if (curConversationIndex < o_conversationsAmount)
			{
				o_conversationsArr->messagesAmount = 0;
				o_conversationsArr->messagesArr = &messagesArr[i + 1];
			}
		}
	}

}