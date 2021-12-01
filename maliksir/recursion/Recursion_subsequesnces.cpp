#include<vector>
#include<iostream>
using namespace std;


vector<string> subSeq(string s){
    if(s.size()==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    char ch = s[0];
    vector<string> sres = subSeq(s.substr(1));
    vector<string> res;
    for (string r:sres){
        res.push_back(""+r);
        res.push_back(ch+ r);
    }
    return res;
}   


int main(){
    string s = "abc";
    vector<string> v = subSeq(s);
    for(string f:v){
        cout<<f<<endl;
    }
}