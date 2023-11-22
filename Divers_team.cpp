#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<bool> found(101,false);
    vector<int> ans;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        if(found[arr[i]] == false){
            found[arr[i]] = true;
            ans.push_back(i+1);
        }
    }
    if(ans.size() >= k){
       cout<<"YES\n";
       for(int i=0;i<k;i++){
        cout<<ans[i]<<' ';
       }
    }else{
    cout<<"NO\n";
    }
        return 0;
}
