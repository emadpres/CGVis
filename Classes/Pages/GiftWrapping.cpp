#include <iostream>

#include "Pages/GiftWrapping.h"
#include "Math/Point.h"
#include "Math/PointHelper.h"

USING_NS_CC;

bool GiftWrapping::init()
{
	if ( !Node::init() )
	{
		return false;
	}
    
	SetupUI();
	
	return true;
}

void GiftWrapping::SetupUI()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	//////////////////////////////////////////////////////////////////////////
	ui::Button *btn = ui::Button::create("CloseNormal.png", "CloseSelected.png");
	btn->setPosition(origin/2 + visibleSize/2);
	btn->addClickEventListener(CC_CALLBACK_1(GiftWrapping::BtnCallback1,this));
	btn->runAction(MoveTo::create(4, ccp(200, 300)));
	addChild(btn);
}

void GiftWrapping::GenratePoints(int n) {
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	//////////////////////////////////////////////////////////////////////////
	inputPoints = CG::PointHelper::Generate(n, origin.x, origin.x+visibleSize.width, origin.y, origin.y + visibleSize.height);
}

void GiftWrapping::RenderPoints()
{
    auto it = inputPoints.begin();
    for(;it!=inputPoints.end();it++) {
        auto s = Sprite::create("point.png");
        s->setPosition((*it).getX(), (*it).getY());
        this->addChild(s);
    }
}

void GiftWrapping::BtnCallback1(Ref *pSender) {
    GenratePoints(30);
    RenderPoints();
}