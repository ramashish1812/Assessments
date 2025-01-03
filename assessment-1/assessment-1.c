//Create an application that can perform all string related operations 
#include <stdio.h>
#include <string.h>
void revStr(char *str)
{
    int len = strlen(str);
    int i;
    for (i=0;i<len/2;i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int substr(char *str1, char *str2)
{
    if (strstr(str1,str2) != NULL)
    {
        return 1; 
    }
    return 0; 
}
int main()
{
    char str1[20],str2[20],ch;
    int choice;

start:
    printf("\nMain Menu :-");
    printf("\n1.Equality");
    printf("\n2.String copy");
    printf("\n3.Concat");
    printf("\n4.Show");
    printf("\n5.Reverse");
    printf("\n6.Palindrome");
    printf("\n7.Sub String");
    printf("\n8.Exit");

    printf("\n\nEnter the str1 = ");
    scanf("%s",&str1);

    printf("\nEnter the str2 = ");
    scanf("%s",&str2);

    printf("\nEnter the choice = ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str2 = %s",str2);

        printf("\n\nlanth of str1 = %d",(int)strlen(str1));
        printf("\nlanth of str2 = %d",(int)strlen(str2));

        if (strcmp(str1,str2) == 0)
        {
            printf("\n\nBoth string are same");
        }
        else
        {
            printf("\n\nBoth string are diffrent");
        }
    break;
    case 2:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str2 = %s",str2);

        strcpy(str1,str2);

        printf("\n\valu of string copy function = %s",str1);
        printf("\nvalue of string copy function = %s",str2);

    break;
    case 3:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str2= %s",str2);

        strcat(str1, str2);

        printf("\n\nvalue of string concat function = %s",str1);
        printf("\nvalue of string concat function = %s",str2);

    break;
    case 4:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str2 = %s",str2);

    break;
    case 5:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str1 = %s",str2);

        printf("\n\nvalue of string reverse function = %s",strrev(str1));
        printf("\nvalue of string reverse function = %s",strrev(str2));
  
    break;
    case 6:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str2 = %s",str2);
		{
            char temp[20];
            strcpy(temp,str1);
            revStr(temp);
            if (strcmp(str1,temp) == 0)
            {
                printf("\n%s is a pallidrome number");
            }
            else
            {
                printf("\n%s is not a palindrome number");
            }
            strcpy(temp,str2);
            revStr(temp);
            if (strcmp(str2,temp) == 0)
            {
                printf("\n%s is a pallidrome number");
            }
            else
            {
                printf("\n%s is not a pallidrome number");
            }
   		}
    break;
    case 7:
        printf("\n\nOriginal value of str1 = %s",str1);
        printf("\nOriginal value of str2 = %s",str2);

        if (substr(str1,str2))
        {
            printf("\n%s is a substring of %s",str2,str1);
        }
        else
        {
            printf("\n%s is not a substring of %s",str2,str1);
        }

    break;
    case 8:
        printf("\nExit");
        return 0;
        break;
    default:
        printf("\ninvalide choice!");
        break;
    }
    printf("\n\n Do You Want to Continue y/n ? : ");
    scanf(" %c", &ch);
    if (ch == 'y')
    {
        goto start;
    }
    else
    {
        printf("\nprogram end");
        goto end;
    }
    end:
    return 0;
}
