#include "knight.h"

knight::knight()
{
}

knight::~knight()
{
}

void knight::invenInit()
{
	/*_inven = new InvenClass;
	_inven->invenInit();*/

	_Pinven = new InvenClass;
	_Pinven->invenInit();
	gold = 100;
}

void knight::showInven()
{
	_inven->showInven();
}
