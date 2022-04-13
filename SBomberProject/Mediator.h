#pragma once
#include <vector>
#include <string>
#include <memory>

#include "LevelGUI.h"
//#include "GameObject.h"

//class GameObject;
class LevelGUI;

class Mediator
{
public:
	//Mediator(std::shared_ptr<LevelGUI> lGUI) : lGUI_(lGUI) {};
	Mediator() = default;

	//void setGUI(std::shared_ptr<LevelGUI> lGUI) { lGUI_ = lGUI; };
	//void addParticipant(std::shared_ptr<LevelGUI> newGameObject) { v.push_back(newGameObject); };
    void addParticipant(LevelGUI* newGameObject) { v.push_back(newGameObject); };
	//void Notify(std::shared_ptr<GameObject> from, std::string mes)
	void Notify( std::string mes)
	{
		for (auto el : v)
		{
			/*LevelGUI* temp = dynamic_cast<LevelGUI*>(el);

			if (typeid(dynamic_cast<LevelGUI*>(el)) == typeid(LevelGUI))
			{

			}*/
			//if (el != from)
			//	el->BeNotified(mes);
			el->BeNotified(mes);
		}			
	};
private:
	//std::vector<std::shared_ptr<LevelGUI>> v; //тут у нас может быть произвольное количество танков и один levelGUI
	std::vector<LevelGUI*> v;
	//std::shared_ptr<LevelGUI> lGUI_{nullptr};
};