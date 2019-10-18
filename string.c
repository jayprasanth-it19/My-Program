  #include<stdio.h>
void main()
{
    char s[10];int i;
    printf("Enter a string");
    scanf("%s",s);
    printf("%s",s);
    printf("\n");
    for(i=0;s[i]!='\0';i++)
    {
      printf("%c\n",s[i]);
    }
}
