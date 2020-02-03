#include "InvenClass.h"

InvenClass::InvenClass()
{
}

InvenClass::~InvenClass()
{
}
void InvenClass::invenInit()
{
	tagItem temp;
	temp.name = "³°Àº°Ë";
	temp.price = 23000;
	_vInven.push_back(temp);
}
void InvenClass::showInven()
{
	for (auto it = _vInven.begin(); it != _vInven.end(); ++it)
	{
		cout << it->name << " : " << it->price << endl;
	}
}
////
////void InvenClass::inputItem(tagItem _buyItem)
////{
////	_vInv.push_back(_buyItem);
////}
////
////void InvenClass::showInven()
////{
////	for (auto it = _vInv.begin(); it != _vInv.end(); ++it) 
////	{
////		cout << "=====================================" << endl;
////		cout << it->name << " : " << it->price << endl;
////		cout << "=====================================" << endl;
////	}
////}
