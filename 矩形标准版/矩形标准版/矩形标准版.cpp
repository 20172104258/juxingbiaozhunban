// 矩形标准版.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CRactangle
{
private:
	int a;
	int b;
public:
	int mianji();
	int zhouchang();
	void Init(int a_, int b_);
	int getwidth();
	int gethigh();
};
int CRactangle::mianji()
{
	return a*b;
}
int CRactangle::zhouchang()
{
	return 2 * (a + b);
}
void CRactangle::Init(int a_, int b_) {
	a = a_;
	b = b_;
}
int CRactangle::getwidth()
{
	return a;
}
int CRactangle::gethigh()
{
	return b;
}
int main()
{
	CRactangle orect[6], temp;
	int i, j, w, h;
	for (i = 0; i < 5; i++)
	{
		cin >> w >> h;
		orect[i].Init(w, h);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++)
			if (orect[i].mianji() > orect[j].mianji())
			{
				temp = orect[i];
				orect[i] = orect[j];
				orect[j] = temp;
			}
	}
	for (i = 0; i < 5; i++)
	{
		cout << "h=" << orect[i].getwidth() << "  w=" << orect[i].gethigh() << "  mianji=" << orect[i].mianji() << endl;
	}
	return 0;
}




:: ----预操作符