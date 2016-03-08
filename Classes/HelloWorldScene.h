#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::CCLayerColor
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

	void addTarget();
	//void onTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
	virtual void onTouchesEnded(const std::vector<cocos2d::Touch*>& pTouches, cocos2d::Event *pEvent);
public:
	// a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

	void spriteMoveFinished(cocos2d::CCNode* sender)
	{
		cocos2d::CCSprite *sprite = (cocos2d::CCSprite *)sender;
		this->removeChild(sprite, true);
	}
	void gameLogic(float dt);

    // implement the "static create()" method manually
	CREATE_FUNC(HelloWorld);


};

#endif // __HELLOWORLD_SCENE_H__
