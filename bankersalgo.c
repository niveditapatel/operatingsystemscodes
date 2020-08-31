
#include<stdio.h>
int main()
{ int completedall;
    int m=0;
int Max[10][10], need[10][10], completed[10], safesequence[10], allocated[10][10];
int available[10];
int p,r;
printf("Enter the no of processes\n");
scanf("%d", &p);
int i,j;
for(i = 0; i< p; i++)
	completed[i] = 0;

printf("enter the no of resources ");
scanf("%d", &r);

printf("enter the maxmatrix for each process\n");
for(i = 0; i < p; i++)
{
	printf("For process %d ", i + 1);
	for(j = 0; j < r; j++)
		scanf("%d",   &Max[i][j]);
printf("enter the allocation matrix for each process");
for(i = 0; i < p; i++)
{
	printf("For process %d ", i + 1);
	for(j = 0; j < r; j++)
		scanf("%d",   &allocated[i][j]);
}

for(i = 0; i < p; i++)
{

	for(j = 0; j < r; j++)
	need[i][j]=Max[i][j]-allocated[i][j];
}


printf("\n enter the available resources");
for(i = 0; i < r; i++)
		scanf("%d", &available[i]);


do
{

   int flag=1;
   for(i = 0; i < p; i++)
	{
		if(completed[i] == 0)
		{

			for(j = 0; j < r; j++)
			{
				if(available[j] < need[i][j])
				{   flag=0;
					break;
				}
				else flag=1;
			}

			if(flag=1)
            {

            safesequence[m]=i;
            m++;
			for(j = 0; j < r; j++)
			{
			    need[i][j]=0;
			    available[j]+=allocated[i][j];
			}
            }
		}
	}





  for(i = 0; i < p; i++)
{
       if( completed[i]=0)
completedall=0;
else completedall=1;
}
}
while(completedall=0);
