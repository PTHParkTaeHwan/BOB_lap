#include"std.h"
using namespace std;

class shop
{
private:
	vector<tagItem> _vItem;

public:
	shop();
	~shop();

	void init();
	void showItem();
	tagItem buyItem(int num);
};

shop::shop(){}

shop::~shop(){}

void shop::init()
{
	for (int i = 0; i < 10; i++)
	{
		tagItem item;
		item.name = "낡은 검";
		item.price = 5000 + i * 100;

		_vItem.push_back(item);
	}
}

void shop::showItem()
{
	int i = 0;
	for (auto it = _vItem.begin(); it != _vItem.end(); ++it)
	{
		cout << "=====================================" << endl;
		cout << i << "번째 물품" << endl;
		cout << it->name << " : " << it->price << endl;
		cout << "=====================================" << endl;
		i++;
	}
}

tagItem shop::buyItem(int num)
{
	tagItem temp;
	auto it = _vItem.begin();
	for (int i = 0; i < _vItem.size(); i++)
	{
		if (i == num)
		{
			temp.name = it->name;
			temp.price = it->price;
			_vItem.erase(it);
			return temp;
		}
		it++;
	}
	return tagItem();
}

int main()
{
	vector<tagItem> _vInven;
	shop _Sh;
	_Sh.init();
	_Sh.showItem();
	_vInven.push_back(_Sh.buyItem(2));

	for (auto it = _vInven.begin(); it != _vInven.end(); ++it)
	{
		cout << "2번 물품 구매함" << endl;
		cout << it->name << " : " << it->price << endl;
		cout << endl;
	}

	_Sh.showItem();

	return 0;
}