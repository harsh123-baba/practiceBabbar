#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//output pattern
void PatternMatching(string s, string pattern, unordered_map<char, string> map, string op){
    
    if(pattern.size()==0){
        if(s.size()==0){
            unordered_set<char> set;
            for(int i = 0; i<op.size(); i++){
                char ch = op[i];
                if(set.find(ch) != set.end()){
                    cout<<ch<<"->"<<map[ch];
                    set.insert(ch);
                }
            }  
            cout<<endl; 
        }
    }

    char ch = pattern[0];
    string rop = pattern.substr(1);

    
    if(map.find(ch)!= map.end()){
        string prevMapping = map[ch];
        if(s.size() >= prevMapping.size()){
            string left = s.substr(0, prevMapping.size());
            string right = s.substr(prevMapping.size());
            if(left==prevMapping){
                PatternMatching(right, rop, map, op);
            }
        }
    }
    else{
        for(int i = 0; i<s.size(); i++){
            string left = s.substr(0, i+1);
            string right = s.substr(i+1);
            map[ch] = left;
            PatternMatching(right, rop, map, op);
            map.erase(ch);
        }
    }
}

int main(){
    unordered_map<char, string> map;
    PatternMatching("hph", "pep", map, "pep");

}