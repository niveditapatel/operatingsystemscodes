#include<stdio.h>
#include <string.h>
int i;
void main(int argc, char* argv[] )
{
FILE *s ,*d;
char c;
char s1[20];
strcpy(s1,argv[1]);
if(strcmp(s1,"@")==0)
{
s=fopen(argv[2],"w");

while((c=getchar())!=EOF)
fputc(c,s);
}
else if(strcmp(s1,"@@")==0)
{
s=fopen(argv[2],"a");

while((c=getchar())!=EOF)
fputc(c,s);
}
else if((strcmp (argv[(argc-2)],"@"))==0)
{
d=fopen(argv[argc-1],"w");
for(i=1;i<(argc-2);i++)
{
s=fopen(argv[i],"r");

while((c=fgetc(s))!=EOF)
fputc(c,d);
fclose(s);
}
}
else if((strcmp (argv[(argc-2)],"@@"))==0)
{
d=fopen(argv[argc-1],"a");
for(i=1;i<(argc-2);i++)
{
s=fopen(argv[i],"r");

while((c=fgetc(s))!=EOF)
fputc(c,d);
fclose(s);
}
}
}
