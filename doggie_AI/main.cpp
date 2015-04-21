#include<iostream>
using namespace std;
struct vector2d
{
	int x=0;
	int y=0;
};
enum eActions
{
	//paste your actions here
	EA_MOVE=1,
	EA_COUNT,
};
enum cEvents
{
	//paste your events here
	EE_FREE=1,
	EE_BLOCK,
	EE_COUNT,
};
class cEventReceiver
{
public:
	cEventReceiver();
	cEvent ifEvent(vector2d *position)
};
class cDoggie
{
	vector2d position;
	cEventReceiver *receiver;
public:
	cDoggie(cEventReceiver *_rec)
	{
		receiver=_rec;
	}
	bool doAction(eAction action, vector2d *newPosition)
	{
		switch(action)
		{
		case EA_MOVE:
			{
				//moving into new position
				position=newPosition;
				break;
			}
			//paste your action model here
		}
	}
	bool checkNear()
	{
		vector2d chkPosition;
		vector2d listOfFree[8];
		vector2d listOfBlock[8];
		for(int i=0;i<8;i++)
		{

			switch(receiver->ifEvent(&chkPosition))
			{
				//paste your doggie reaction here
			case EE_FREE:
				{
					listOfFree[i]=chkPosition;
					break;
				}
			case EA_BLOCK:
				{
					listOfBlock[i]=chkPosition;
					break;
				}
			}
		}
	}
};
class cWebUnit
{
};
class cMemoryUnit
{
private:
	int id;
	char *name;
public:
};
class cMemoryManager
{
};
int main()
{
	return 0;
}