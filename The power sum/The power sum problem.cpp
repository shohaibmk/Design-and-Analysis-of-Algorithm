#include <bits/stdc++.h>

using namespace std;

// Complete the powerSum function below.
int powerSum(int t, int p, int s) 
{
    int tot=0;
    if(t==0)
        return 1;
    for (int i = s + 1; pow(i, p) <= t; i++) 
    {
        tot += powerSum(t-pow(i, p), p, i);
    }
return tot;

}

int main()
{
    int x, n; 
    cin >> x >> n;
    cout << powerSum(x, n, 0);
    return 0;
}
