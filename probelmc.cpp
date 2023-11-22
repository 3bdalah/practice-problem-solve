#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w,x,y;
    char g[165][165];
    scanf("%d%d%d%d",&h,&w,&x,&y);

   	for(int i=0;i<h;i++){
     		for(int j=0;j<w;j++)
      		scanf("%c",&g[i][j])
	}
   	x--;y--;
	int cnt;
      if(g[x][y] == "#"){
		cnt=0;
	}else{
       cnt=1;
       for(int i=x,j=y+1;j<w&&g[i][j]=='.';j++)
		cnt++;
	for(int i=x,j=y-1;j<w&&g[i][j]=='.';j--)
		cnt++;
	for(int i=x+1,j=y;j<w&&g[i][j]=='.';i++)
		cnt++;
	for(int i=x-1,j=y;j<w&&g[i][j]=='.';i--)
		cnt++;	
}
    printf("%d",cnt);


   return 0;

}