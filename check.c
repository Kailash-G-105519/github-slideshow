#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **a;
void memory(int size)
{
    *a = malloc(sizeof(char *)*size);
    printf("%d", sizeof(a));
}

void sub (char *str, int index)
{
    //printf("%s - a[%d]", str, index);
    *(a+index) = malloc(sizeof(char)+(strlen(str)+1));
    strcpy(a[index], str);
    //printf("%s", a[index]);
    //a[index][i] = '\0';
}


int main() {
    int i, j=0, len=1, index=0, size=1, k=0;
    char a[100], buff[30], **s;
    gets(a);
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] = '_')
            size++;
    }
    printf("%d", size);
    //memory(size);
    for (i=0; a[i] != '\0'; i++, k++)
    {
        printf("%c", a[i]);
        if(a[i] == '_')
        {
            buff[k]='\0';
            sub(buff, index);
            index++;
            buff[0]='\0';
            k=0;
        }
        buff[k] = a[i];
    }

for(i=0; i<index; i++)
    printf("%s", a[i]);
}
