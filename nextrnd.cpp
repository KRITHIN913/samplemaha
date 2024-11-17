#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k;
    cin>>n;
    cin>>k;
    vector <int> scores(n);
    
    for (auto& score:scores )
    {
        cin>>score;
    }
    

    int t = scores[k-1];
    int count = 0;

    for(auto& score:scores)
    {
        if( score>=t && score >0)
            count++;
    }

    cout <<count<<endl;

    cout<< "my name is maheshwar"<<endl;
    return 0;
}