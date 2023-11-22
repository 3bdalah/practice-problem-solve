#include <bit/stdc++.h>
using namespace std;

const int N = 1e5+10;

int main(){
	int n,a[N];
        cin>>n;
	for(int i=0;i<n;++i){
        cin>>a[i];
        }
	sort(a,a+n);
  	int q,x;
	cin>>q;
	while(q--){
	 cin>>x;
	cout<<upper_bound(a,a+n,x) - a <<endl;
	}
	return 0;
}