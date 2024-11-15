#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string str1, str2;

int compare(string bigstr, string smallstr){
    int n = bigstr.size();
    int m = smallstr.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); //모두 0으로 초기화
    int best = 0;

    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= m; j++) { 
            if (bigstr[i -1] == smallstr[j-1]) { 
                dp[i][j] = dp[i-1][j-1] + 1; //memoization
                best = max(best, dp[i][j]);  // 최대 공통 부분 문자열 갱신
            }
        }
    }
    
    return best;
}

int main(){
    cin >> str1;
    cin >> str2;

    if (str1.size()>=str2.size()){ // 길이가 더 짧은 문자열 확인해서 compare 호출
        cout << compare(str1, str2);
    }
    else{
        cout << compare(str2, str1);
    }

}