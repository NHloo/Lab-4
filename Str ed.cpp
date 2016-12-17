#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstring>
using namespace std;

void examp1() {
	char *str1 = new char[40];
	char *str2 = new char[40];
	char *str3 = new char[40];

	
	cout << "Введите первую строку:";
	scanf("%s", str1);
	cout << "Введите вторую строку:";
	scanf("%s", str2);
	cout << "Введите третью строку:";
	scanf("%s", str3);
	strcat(str1, str2);
	printf("%s\n",str1);
	
	char *pos = strstr(str1,str3);
	int p = 0;
	int count_str = 0;

	while(pos != NULL) {
		p = pos-str1;
		pos = strstr(str1+p+1,str3);
		count_str++;
	}

	printf("Количество вхождений %s = ", str3);
	cout << count_str << endl;
	system("pause");
}

void examp2() {
	char *a = new char[40];
	char *b = new char[40];
	char *c = new char[40];
	char *d = new char[40];
	char *e = new char[40];

	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);

	strncpy(d, b, 1);
	strcpy(d+1, c);
	strcat(d, b+1);

	strncpy(e,a,1);
	strcpy(e+1,d);
	strncat(e,a+1,3);
	strncat(e,c+2,4);
	strcat(e,a+3);
	
	cout << endl <<d;
	cout << endl <<e;
	system("pause");
}

void main() 
{	
	setlocale(LC_ALL, "RUS");
	//examp1();
	examp2();
}