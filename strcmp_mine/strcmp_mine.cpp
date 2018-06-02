// strcmp_mine.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"


int main(){
	int strcmp_mine(char srt1[],char str2[]);     //在调用前要先声明这个函数
    char str1[10],str2[10];
	//scanf_s("%s", str1);    //为什么我每次输入字符串的时候都提示我说这个要中断哩！
	gets_s(str1);         //带空格输出
	gets_s(str2);
	//printf("%s", str1);
printf("%d",strcmp_mine(str1, str2));
getchar();
getchar();
    return 0;
}

int strcmp_mine(char str1[],char str2[]) {
	int i = 0, flag = 0;
	while (str1[i] * str2[i] != 0) {
		flag = str1[i] - str2[i];
		if (flag == 0)i++;
		break;
	}
	if (str1[i] == '\0')flag = -1;
	else if (str2[i] == '\0')flag = 1;
	return flag;
}
