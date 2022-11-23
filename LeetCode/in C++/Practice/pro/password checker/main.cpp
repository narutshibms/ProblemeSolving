#include <iostream>
using namespace std;

int ret(string A, string B)
{
    int size_A;
    int size_B;

    size_A = A.size();
    size_B = B.size();
    
    if (size_A != size_B)
        return 0;
    
    for (int j = 0; j < size_A; j++)
    {
        if (A[j] == B[j])
            continue;

        else
            return 0;
    }
    return 1;
}

int check(string username, string password)
{

    string pass = "ESTA2021";
    string user = "Etudiant";
    bool S;

    S = ret(password, pass);
    if (S)
    {
        S = ret(username, user);

        if (S)
            return 1;
        return 0;
    }
    return 0;
}

int main()
{

    cout << "return has got  : " << check("Etudiant", "ESTA2021");

    return 0;
}