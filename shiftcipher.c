#include<stdio.h>
#include<string.h>

int main()
{
    int k,i;
    char str[100],p,decision;
    printf("Do you want to encrypt or decrypt? E/D ");//Choose to encrypt or decrypt
    scanf(" %c", &decision);
    printf("Enter a message: ");
    scanf(" %s", str);
    printf("Enter the key: ");
    scanf(" %d",&k);
    if(decision=='E'|| decision=='e')
    {
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            p=str[i]-'A';//assigns positional value of the alphabets
            p=(p+k)%26;
            printf("%c",p+'A');
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            p=str[i]-'a';//assigns positional value of the alphabets
            p=(p+k)%26;//finding mod
            printf("%c",p+'a');
        }
        else
            printf ("%c",str[i]);
    }
    }
    else
    {
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            p=str[i]-'A';//assigns positional value of the alphabets
            if(p-k>=0)
             {
               p=(p-k)%26;//finding mod
             }
            else 
            {
                p=(p-k)%26+26;//if (p-k) is negative, the mod becomes negative. 26 is added to convert the mod into positive.
            }
            printf("%c",p+'A');
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            p=str[i]-'a';//assigns positional value of the alphabets
            if(p-k>=0)
            {
                p=(p-k)%26;//finding mod
            }    
            else
            {
                p=(p-k)%26+26;//if (p-k) is negative, the mod becomes negative. 26 is added to convert the mod into positive.
            }    
            printf("%c",p+'a');
        }
        else
            printf ("%c",str[i]);
    }
    }
    
}
