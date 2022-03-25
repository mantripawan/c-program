#include<stdio.h>
int main()
{
  	int n,i,avg;
   	struct student
	{
	int rollno,english,maths,science,socialscience,lang1,lang2;
        char name [20];
        float avg;
      };
      struct student s[20];
      printf("enter the numbers of stundents");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
              printf("enter student %d details:",i);
              printf("enter roll no");
	      scanf("%d",&s[i].rollno);
              
              printf("enter students name:");
     	      scanf("%s",s[i].name);
              printf("enter marks scored in english");
              scanf("%d",&s[i].english);
              printf("enter marks scored in maths"); 
              scanf("%d",&s[i].maths);
              printf("enter marks scored in science");
              scanf("%d",&s[i].science);
              printf("enter marks scored in social science");
              scanf("%d",&s[i].socialscience);
              printf("enter maeks scored in hindi");
              scanf("%d",&s[i].lang1);
              printf("enter marks scored in kannada");
              scanf("%d",&s[i].lang2);
        }
    
        for(i=0;i<n;i++)
        {
        s[i].avg=(s[i].english+s[i].maths+s[i].science+s[i].socialscience+s[i].lang1+s[i].
	lang2)/6;
        }      
    	 printf("enter the average marks ");	
         scanf("%f",&s[i].avg);

         for(i=0;i<n;i++)
         {
           if(s[i].avg>avg)
         {
          printf("students scored above average\n");
          printf("%s\n",s[i].name);
         }
         else
         {   
          	printf("students scored below average\n");
         	printf("%s\n",s[i].name);
       	 }
      }
		
return 0;
}	





























	
         
