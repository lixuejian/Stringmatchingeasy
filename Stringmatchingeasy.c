#include <stdio.h>
int getlength(char *a){
	int i;
	for (i = 0; a[i] != NULL; i++);
	return i;
}
int IndexString(char *a, char *b){
	int i, j, charnum1, charnum2;
	charnum1 = getlength(a);
	charnum2 = getlength(b);

	j = i = 0;

	while ((i < charnum1) && (j < charnum2))
	{
		if (a[i] == b[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == charnum2)
	{
		return (i - charnum2);
	}
	else
	{
		return -1;
	}
}

int main(){
	char a[256];
	char b[16];
	int i;
	strcpy(a, "asdfqwetggaaqlgrewughpoiuagnloerihaglkd");
	strcpy(b, "ggaaq");

	printf("%s\n", a);
	printf("%s\n", b);


	i = IndexString(a, b);

	if (i != -1)
	{
		printf("Æ¥Åä³É¹¦Î»ÖÃÔÚ%d\n", i+1);
	}
	else
	{
		printf("Æ¥ÅäÊ§°Ü\n");
	}

	return 0;
}