// testtt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
#include "vector"
#include "map"
#include "math.h"
#include "algorithm"
using namespace std;

int main()
{
	string s = "abbccd";
	map<char,int> Charmap;
	int longest=0,start=-1;
	for (int i = 0; i < s.length(); i++) {
		if (Charmap.count(s[i]) != 0 )//map::count查找与指定键匹配的元素数。若为0，即是新数，若不为0，则需舍掉
			start = max(start,Charmap[s[i]]);
		Charmap[s[i]] = i;
		longest = max(i-start,longest);
	}
	cout << longest << endl;
}

