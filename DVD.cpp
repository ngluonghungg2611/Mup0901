#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, k, i, count =0;
    cin >> n >> k;
    
    for( i = 1; i <= k/2; i++){
        int tmp = k-i;
        if ( tmp >=1 && tmp!=i && tmp<=n){
            count++;
        }
    }
    cout << count;
}
// 9 3
// 8 4
// 7 5
// ( 9 - 3 + 1 ) / 2 lamchonxuong