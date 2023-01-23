#include<stdio.h>
void main()
{
	FILE* fp1, * fp2;
	char ch;
	fp1 = fopen("Source.txt", "r");
	fp2 = fopen("des.txt", "w");
	ch = fgetc(fp1);
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		fputc(ch, fp2);
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		fputc(ch, fp2);
	}
	else
	{
		fprintf(fp2, " ");
	}
	while (ch != EOF)
	{
		ch = fgetc(fp1);
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
			fputc(ch, fp2);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
			fputc(ch, fp2);
		}
		else if(ch==' ')
		{
			fprintf(fp2, " ");
		}
		else
		{
			continue;
		}
	}
}
