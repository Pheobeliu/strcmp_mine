// strcmp_mine.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "string.h"


int main(){
	int strcmp_mine(char srt1[],char str2[]);     //�ڵ���ǰҪ�������������
    char str1[10],str2[10];
	//scanf_s("%s", str1);    //Ϊʲô��ÿ�������ַ�����ʱ����ʾ��˵���Ҫ�ж�����
	gets_s(str1);         //���ո����
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
