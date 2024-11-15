#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, m;

int minimum(vector<int> boys, vector<int> girls){
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); // dp테이블을 통해 성격 차의 최소 합을 for문을 돌면서 누적으로 계산
    
    for (int i = 1; i<=n; i++){ 
        for (int j = 1; j<=m; j++){ 
            if(i == j) {
                dp[i][j]=dp[i-1][j-1]+abs(boys[i-1]-girls[j-1]); 
                // boy와 girl의 수가 같을때, i번째 남자와 j번째 여자를 매칭
            }
            else if(i > j) {
                dp[i][j]=min(dp[i-1][j-1]+abs(boys[i-1]-girls[j-1]),dp[i-1][j]); // boy가 더 많을 때, i번째 남자와 j번째 여자를 매칭하거나 i번째 남자를 매칭에서 제외
            }
            else if(i < j) {
                dp[i][j]=min(dp[i-1][j-1]+abs(boys[i-1]-girls[j-1]),dp[i][j-1]); // girl이 더 많을 때, j번째 여자와 i번째 남자를 매칭하거나 j번째 여자를 매칭에서 제외
            }
        }
    }

    return dp[n][m];
}

int main(){
    cin >> n >> m;
    vector<int> boys(n), girls(m);

    for (int i = 0; i<n; i++){
        cin >> boys[i];
    }
    for (int i = 0; i<m; i++){
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end()); //최적의 매칭위해 boys와 girls 정렬

    cout << minimum(boys, girls); 
}