#pragma once
#ifndef __MOVE_TO_PLAYER__
#define __MOVE_TO_PLAYER__
#include "Action.h"


class MoveToPlayer : public Action
{
public:
	MoveToPlayer();
	virtual ~MoveToPlayer();

	virtual void Execute() override;
private:

};

#endif //__MOVE_TO_PLAYER__