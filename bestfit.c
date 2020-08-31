#include<stdio.h>

void main()
{ printf("BEST FIT");
printf("\n");
  int fragmentation=0;
int currentfrag,test=0;
    int n,i,m;
    printf("enter the no of memory blocks");
    scanf("%d",&n);
    int memoryblock[n][3];
    printf("enter the size of these blocks");
         for(i=0;i<n;i++)
    {
        scanf("%d",&memoryblock[i][0]);
        memoryblock[i][1]=memoryblock[i][2]=0;

    }

    printf("enter the no of processes\n");
    scanf("%d",&m);
    int process[m];
    printf("enter the size of these processes\n");
    for(i=0;i<m;i++)
        scanf("%d",&process[i]);
        int j=0;
      for(i=0;i<m;i++)
    {  int p=-1;
         currentfrag=1111100;
        for(j=0;j<n;j++)
        {
            if(memoryblock[j][1]==0)
 {

      if(memoryblock[j][0]>process[i])
        {
            test=memoryblock[j][0]-process[i];
            if(test<currentfrag)
            {

          currentfrag=test;
           p=j;
        }}
    }
    }
     memoryblock[p][1]=(i+1);
            memoryblock[p][2]=process[i];
    }
    printf("final memory storage\n");
     printf("  NO   SIZE OF BLOCK   PROCESS STORED      SIZE OF PROCESS    FRAGMENTATION\n");
    for(i=0;i<n;i++)
    {


    printf("%d                %d                 %d               %d              %d\n",(i+1),memoryblock[i][0],memoryblock[i][1],memoryblock[i][2],(memoryblock[i][0]-memoryblock[i][2]));

  fragmentation+=(memoryblock[i][0]-memoryblock[i][2]);


    }
printf("total fragmentation =%d",fragmentation);
}
