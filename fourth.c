#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],ch;
int m,n;
  printf("\n Enter the string ");
  gets(str);
  m=strlen(str);
for(int i=0;i<m;i=i+2)
{
  ch=str[i];
  n=str[i+1]-48;
  for(int j=0;j<n;j++)
  {
    printf("%c",ch);
  }
}
}
