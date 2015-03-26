
#include <TouchScreen.h>

#define OPERATION_NO_OPERATION 0
#define OPERATION_NEXT_TRACK 1
#define OPERATION_PREV_TRACK 2
#define OPERATION_CHANGE_TIMER_STATE 3

class TouchScreenManager {
public:
	TouchScreenManager(TouchScreen* ts);
	virtual ~TouchScreenManager();
	int getChronoOperation();
private:
	TouchScreen* touchScreen;
	Point lastPoint;
	bool touchStarted;
	long touchStartedTimestamp;

	int checkChronoOperation();
};
