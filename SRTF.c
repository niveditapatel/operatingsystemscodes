#include<stdio.h>
void main()
{
    int n; int i;
int j=0;
    printf("enter the number of processes");
    scanf("%d",&n);
    int proc[n][6];
    for(i=0;i<n;i++)
    {
    printf("enter the process no");
    scanf("%d",&proc[i][0]);
    printf("enter the arrival time");
    scanf("%d",&proc[i][1]);
    printf("enter the running/burst time of the process");
    scanf("%d",&proc[i][2]);
    }


     for(int t=0;t<n;t++)
   {
    for(i=t+1;i<n;i++)
    {



        if (proc[i][1]<proc[t][1])
          {

          for(j=0;j<3;j++)
          {
              int swap;
              swap=proc[i][j];
              proc[i][j]=proc[t][j];
              proc[t][j]=swap;

          }
          }
    }
}

printf("time \t process\n");
    int start=proc[0][1];
   for(i=0;i<n;i++)
   {
if(start<proc[i+1][1])
{


    while(start<proc[i+1][1])
    {
    printf("%d\t %d\n",start,proc[i][0]);
    start+=1;
    proc[i][2]-=1;
    }
}
    else if(proc[i][2]<=proc[i+1][2])
    {  printf("%d\t %d\n",start,proc[i][0]);
        start+=1;
            proc[i][2]-=1;
    }
    else{

         printf("%d\t %d\n",start,proc[i+1][0]);
        start+=1;
    }


   }
}
