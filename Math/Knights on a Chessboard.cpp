#include<bits/stdc++.h>
using namespace std ;

int main ( )
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    int t, i =1 ;
    cin >> t ;
    while (t--)
    {
        long long n,m ;
        cin >> n >> m ;
        if(n == 1 or m == 1) cout << "Case " << i << ": " << max(n,m) << '\n' ;
        else if(n == 2 or m == 2) cout << "Case " << i << ": " << ((n*m)/8)*4 + ((n*m)%8 >= 4 ? 4 : ((n*m)%8 )) << '\n' ;
        else cout << "Case " << i << ": " << (n*m+1)/2 << '\n' ;
        i++ ;
    }
    return 0 ;
}
