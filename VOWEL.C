#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	int uppercasevowel, lowercasevowel;
	clrscr();
	printf("Enter An Alphabet:");
	scanf("%c",&c);
	uppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	lowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	if(uppercasevowel||lowercasevowel)
	printf("%c is a vowel",c);
	else
	printf("%c is a consonant",c);
	getch();
}