#include <stdio.h>
int main()
{
    FILE *f;
    
    //file name = data
    f = fopen ("data.txt","w");
    for (int s = 97; s<=100; s++)
    {
        fputc (s,f);
    }
    fclose(f);
    return 0;
}
