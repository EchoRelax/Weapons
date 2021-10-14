#include <string>

using namespace std;

#pragma once
class AbstractWeapon
{
private:
	string Name;
	unsigned int Article;
	bool IsAuto;
public:
	bool SetName(string name)
	{
		if (name == "Mosin" || name == "Rods")
		{
			Name = name;
			return true;
		}
		else
		{
			cout << "Имя введено с ошибкой, попробуйте еще раз" << endl;
			return false;
		}
	};
	string GetName()
	{
		return Name;
	};
	bool SetArticle(unsigned int article)
	{
		if (article == 201)
		{
			Article = article;
			return true;
		}
		else
		{
			cout << "Артикул введен с ошибкой, попробуйте еще раз" << endl;
			return false;
		}
	};
	unsigned int GetArticle()
	{
		return Article;
	};
	bool SetIsAuto(bool isAuto)
	{
		if (isAuto == 0)
		{
			IsAuto = isAuto;
			return true;
		}
		else
		{
			cout << "Введено с ошибкой, попробуйте еще раз" << endl;
			return false;
		}
	};
	bool GetIsAuto()
	{
		return IsAuto;
	};
};

