#define prog 7

#if prog == 1

/* memcmp example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";
    
    int n;
    
    n=memcmp ( buffer1, buffer2, sizeof(buffer1) );
    
    if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
    else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
    else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);
    
    return 0;
}

#elif prog == 2

/* strcmp example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char key[] = "apple";
    char buffer[80];
    do {
        printf ("Guess my favorite fruit? ");
        fflush (stdout);
        scanf ("%79s",buffer);
    } while (strcmp (key,buffer) != 0);
    puts ("Correct answer!");
    return 0;
}

#elif prog == 3

/* strncmp example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
    int n;
    puts ("Looking for R2 astromech droids...");
    for (n=0 ; n<3 ; n++)
        if (strncmp (str[n],"R2xx",2) == 0)
        {
            printf ("found %s\n",str[n]);
        }
    return 0;
}


#elif prog == 4

/* memchr example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char * pch;
    char str[] = "Example string";
    pch = (char*) memchr (str, 'p', strlen(str));
    if (pch!=NULL)
        printf ("'p' found at position %d.\n", pch-str+1);
    else
        printf ("'p' not found.\n");
    return 0;
}

#elif prog == 5

/* strchr example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[] = "This is a sample string";
    char * pch;
    printf ("Looking for the 's' character in \"%s\"...\n",str);
    pch=strchr(str,'s');
    while (pch!=NULL)
    {
        printf ("found at %d\n",pch-str+1);
        pch=strchr(pch+1,'s');
    }
    return 0;
}

#elif prog == 6

/* strpbrk example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[] = "This is a sample string";
    char key[] = "aeiou";
    char * pch;
    printf ("Vowels in '%s': ",str);
    pch = strpbrk (str, key);
    while (pch != NULL)
    {
        printf ("%c " , *pch);
        pch = strpbrk (pch+1,key);
    }
    printf ("\n");
    return 0;
}

#elif prog == 7

/* strstr example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[] ="This is a simple string";
    char * pch;
    pch = strstr (str,"simple");
    strncpy (pch,"sample",6);
    puts (str);
    return 0;
}

#endif












