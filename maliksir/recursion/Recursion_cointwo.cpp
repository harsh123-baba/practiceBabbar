#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Cointwo(int i, vector<int> coin, int tamt, int asf, string ans){
    if(asf>tamt){
        return;
    }
    
    else if(asf==tamt){
        cout<<ans;
        cout<<endl;
        return;
    }
    
    for(int j = 0; j<tamt/coin[i]; j++){
        string path = "";
        for(int k = 0; k<j; k++){
            path += to_string(coin[i])+"-";
        }
        Cointwo(i+1,coin, tamt, asf+coin[i]*j, ans+path);
    }
    Cointwo(i+1, coin, tamt, asf, ans);
}


int main(){
    vector<int> coin = {2, 2, 2, 2,2};
    Cointwo(0, coin, 12, 0, "");
}


// import java.io.*;
// import java.util.*;

// public class Main {

//     public static void coinChange(int i, int[] coins, int amtsf, int tamt, String asf) {
//         if (i == coins.length) {
//             if (amtsf == tamt) {
//                 System.out.println(asf + ".");
//             }
//             return;
//         }

//         for (int j = tamt / coins[i]; j > 0; j--) {
//             String pasf = "";
//             for(int k = 0; k < j; k++){
//                 pasf += coins[i] + "-";
//             }
//             coinChange(i + 1, coins, amtsf + coins[i] * j, tamt, asf + pasf);
//         }
//         coinChange(i + 1, coins, amtsf, tamt, asf);
//     }

//     public static void main(String[] args) throws Exception {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         int n = Integer.parseInt(br.readLine());
//         int[] coins = new int[n];
//         for (int i = 0; i < n; i++) {
//             coins[i] = Integer.parseInt(br.readLine());
//         }
//         int amt = Integer.parseInt(br.readLine());
//         coinChange(0, coins, 0, amt, "");
//     }
// }


                        


                        