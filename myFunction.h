#pragma once
#include"myFunction.h"
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

void put(int x);

// 括号组合问题
void general(int n, int l, int r, int& num, string res, bool st = false);