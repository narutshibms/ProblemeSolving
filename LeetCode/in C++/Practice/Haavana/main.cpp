#include <iostream>
#include <string.h>

using namespace std;

void swapps(char *s, char *a, int start, int end, int acutal);
char *recursiv(char *s, char *a, int start, int end, int actual);

void swapps(char *s, char *a, int start, int end, int acutal)
{
    int i, k;

    for (i = acutal - 1, k = start; k < acutal; i--, k++)
        a[k] = s[i];
        
    a[k] = s[k];

    //cout << a << " i = " << i << ", k = " << k << ", start = " << start << " end = " << acutal << endl;
    recursiv(s, a, acutal + 1, end, acutal + 1);
}

char *recursiv(char *s, char *a, int start, int end, int actual)
{

    if (actual <= end)
    {

        if (s[actual] != ' ' && s[actual] != '\t' && actual != end - 1)
            recursiv(s, a, start, end, actual + 1);

        else if (actual == end - 1)
            swapps(s, a, start, end, actual + 1);

        else
            swapps(s, a, start, end, actual);
    }
    return a;
}

char *revers(char *s)
{

    int sz = strlen((s));
    char *a;

    a = (char *)malloc(sz * sizeof(char));

    for (int i = sz - 1, k = 0; k < sz; i--, k++)
       a[k] = s[i];

    return a;
}

int main()
{

    char a[100], *b;
    gets(a);
    int sz = strlen(a);

    b = (char *)malloc(sz * sizeof(char));

    cout << recursiv(a, b, 0, sz, 0);

    cout<<endl<<"by revers = "<<revers(a);

    return 0;
}