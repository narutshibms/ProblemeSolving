    char a[100], *b;
    gets(a);
    int sz = strlen(a);

    b = (char *)malloc(sz * sizeof(char));
    cout << recursiv(a, b, 0, sz, 0);