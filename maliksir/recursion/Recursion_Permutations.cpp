#include<vector>
#include<iostream>
using namespace std;

void Permutation(vector<int> v, int ci, int ti){
    if(ci>ti){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return; 
    }
    for(int i = 0; i<v.size(); i++){
        if(v[i]==0){
            v[i]=ci;
            Permutation(v, ci+1, ti);
            v[i]=0;
        }
    }
    // return;
}

int main(){
    vector<int> v(4);
    Permutation(v, 0, 2);
}