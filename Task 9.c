#include<stdio.h>
char str[50], pat[20], rep[20], nstr[50];
int i, j, k, c, m, flag=0;
void main()
{
    printf("Enter Main string: ");
    gets(str);
    printf("\nEnter a pattern string: ");
    gets(pat);
    printf("\nEnter a replace string: ");
    gets(rep);
    match();
    if(flag==1)
        printf("\n\nThe new string is: %s\n\n", nstr);
    else
        printf("\n\nPattern not found\n\n");
}
void match()
{
    i=m=c=j=0;

    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;m++;
            if(pat[i]=='\0')
            {
                flag = 1;
                for(k=0;rep[k]!='\0';k++,j++)
                    nstr[j]=rep[k];
                i=0;
                c=m;
            }
        }
        else
        {
            nstr[j]=str[c];
            j++;
            c++;
            i=0;
            m=c;
        }
    }
    nstr[j]='\0';
}
