#ifndef __GiftWrapping__
#define __GiftWrapping__

#include <vector>

#include "cocos2d.h"
#include "ui/CocosGUI.h"

#include "Math/Point.h"

class GiftWrapping : public cocos2d::Node
{
public:
	CREATE_FUNC(GiftWrapping);
	virtual bool init();
	
private:
	void SetupUI();
    std::vector<CG::Point> inputPoints;
	//////////////////////////////////////////////////////////////////////////
	
    void GenratePoints(int);

	void RenderPoints();
    
	void BtnCallback1(Ref *pSender);
};

#endif // __GiftWrapping__
