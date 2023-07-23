#include<iostream>
using namespace std;
int main(){
    int key,i;
    int A[6]={8,5,4,3,2,1};
    cout<<"enter key";
    cin>>key;
    for(i=0;i<6;i++){
        if(key<A[i]){
            key==A[i];
        }
        else key=A[i];
    };
    cout<<"key"<<"key";
    return 0;
}