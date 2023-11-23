#include <bits/stdc++.h>
using namespace std;


int run (int prefix,int target){
 	if(prefix>target){
		return 0;
	}
	return  run(prefix*10,traget) + run(prefix *10+1,target)+1;  
}
int main(){
    int n;
    cin>>n;
    cout<<run(1,n);
     return 0;
}