#include <iostream>
#include <vector>
#include <Algorithm>

using namespace std;

void f(vector<int> &vect, int target)
{
    int head = 0;
    int tail = vect.size() - 1;
    sort(vect.begin(), vect.end());

    for (int i = 0; i < vect.size(); i++)
    {
        if ((vect[head] + vect[tail]) == target){
            cout << vect[head] << vect[tail]; break; }
        else if ((vect[head] + vect[tail]) > target)
            tail--;
        else
            head++;
    }
}

int main()
{
    vector<int> a{-1, 7, 8, 1, 5, -4, 3};

    f(a, -5);

    return 0;
}