#include<iostream>
#include<climits>
using namespace std ;
 int main(){ 
    int n = 3;
    int m  =3;
int arr[n][m] = {{1,3,6},{2,3,3},{2,5,3}};
for(int i=0;i<n;i++){
int max = INT_MIN;
    for(int j =0;j<m;j++){
       if(max<arr[i][j]){
        max = arr[i][j];
       }
    }
    cout<<max;
}
 }
