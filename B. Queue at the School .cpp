#include <bits/stdc++.h>
using namespace std;

int main(){
 //  your code goes here 
  int n,t;
  char s[60];
   scnaf("%d%ds",&n,&t,s);
   while(t--){
     for(int i=0;i<n;++i){
       	if(s[i]== 'B'&& s[i+1]== 'G'){
	swap(s[i],s[i+1]);
	i++;
	}
      }
   }
	printf("%s",s);

    return 0;
}