#pragma once
#include"../std.h"
#include"../inven/InvenClass.h"
class knight: public playerClass
{
private:
	InvenClass * _inven;

public:
	knight();
	~knight();

	void invenInit();
	void showInven();

	
};

