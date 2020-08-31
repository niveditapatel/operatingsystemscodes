#include<stdio.h>
void main()
{
    int n; int i;
int j=0;
    printf("enter the number of processes");
    scanf("%d",&n);
    int proc[n][3];
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
int start=proc[0][1];
float sum1=0,sum2=0,sum3=0;
int ct[n];
int tat[n];
int wt[n];
for(i=0;i<n;i++)

{


    while(proc[i][1]>start)
    {
        start+=1;
    }

ct[i]=(start+proc[i][2]);
sum1+=ct[i];
tat[i]=(start+proc[i][2]-proc[i][1]);
sum2+=tat[i];
wt[i]=(start-proc[i][1]);
    sum3+=wt[i];
    start=start+proc[i][2];



}

 start=proc[0][1];
printf("PID \t AT \t BT \t CT \t TAT \t WT \n");
 for(i=0;i<n;i++)
   {
       printf(" %d \t %d \t %d \t %d \t %d \t %d\n",proc[i][0],proc[i][1],proc[i][2],ct[i],tat[i],wt[i]);
}

float avct=sum1/n;
float avtat=sum2/n;
float avwt=sum3/n;
printf("\n");
printf("\t \t average: %f %f %f",avct,avtat,avwt);
}


