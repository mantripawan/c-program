#include<stdio.h>
#include<string.h>
intmain()
{
       char str[100],ch;		
       int i,sum=0;

       printf("enter the string\n");
       gets(str);
       
       printf("enter the character\n");
       scanf("%c,&ch);

       for(i=0;i<strlen(str);i++)
       {
                if(ch==str[i])
		{
			sum=sum+1;
                }
       }
       printf("number of occurencs:%d,sum);
       return0;
}
