#pragma once
#include"std.h"
#include"inven/InvenClass.h"

class playerClass
{
protected:
	int gold;

	InvenClass * _Pinven;

public:
	playerClass();
	~playerClass();

	void itemInit();
	/*tagItem buyItem(tagItem _item);
	void showInven();
	int sellItem();*/
};

