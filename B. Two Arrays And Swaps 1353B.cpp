#include <bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin>>t;

   while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>a(n);
      for(int i=0;i<n;++i){
      	cin>>a[i];
      }
      for(int i=0;i<n;++i){
        cin>>b[i]; 
      }
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      reverse(b.begin(),b.end());
      for(int i=0,j=0;i<n&&k;++i){
      if(a[i]<b[j]){
	swap(a[i]<b[j]);
        ++j;
	--k;
	}
       }
    int sum=0;
     for(int i=0;i<n;++i){
     sum+=a[i];    
 }
   cout<<sum<<endl;
   }
   return 0;
}