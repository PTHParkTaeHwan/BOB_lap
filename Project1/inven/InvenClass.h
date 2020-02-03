#pragma once
#include"../std.h"

class InvenClass
{
private:
	vector<tagItem> _vInven;

public:
	InvenClass();
	~InvenClass();

	void invenInit();
	void showInven();

	//void inputItem(tagItem _buyItem);
	//void showInven();
};

