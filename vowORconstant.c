#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is Consonant.", ch);
    }
    else 
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}

	/* Output :
			z
			'z' is Constant.        */