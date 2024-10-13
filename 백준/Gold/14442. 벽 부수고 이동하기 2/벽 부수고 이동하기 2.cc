#include <vector>
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int m, n, k;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(vector<vector<int>> map){
    vector<vector<vector<int>>> visited(m+1, vector<vector<int>>(n+1, vector<int>(k+1))); 
    //visit 3차원 배열 생성(k는 남은 k의 횟수)
    queue<tuple<int, int, int>> q; //bfs돌릴 큐 생성

    visited[1][1][k] = 1; //원점(1,1)에서의 k값, 그리고 이동거리는 1
    q.push({1,1,k});   

    while(!q.empty()){
        int x, y; //탐색할 x, y 좌표
        tie(x, y, k) = q.front();
        q.pop(); //방문한 좌표의 x, y, k상태를 저장하고 큐에서는 pop

        if ((x == m)&&(y == n)){
            return visited[x][y][k];
        } //현재 이동거리를 return

        for (int i = 0; i<4; i++){
            int nextX = x + dx[i];
            int nextY = y + dy[i]; //상하좌우로 이동할 때의 좌표 newX, newY

            if (nextX >= 1 && nextX <= m && nextY >= 1 && nextY <= n) //범위 체크
                if (map[nextX][nextY] == 0){ //갈 수 있는 경로
                    if((visited[nextX][nextY][k] == 0)||(visited[nextX][nextY][k] > visited[x][y][k]+1)){ //방문한적 없거나, 이미 갔던 것보다 지금 갈 경로가 더 짧은 이동거리를 가진다면
                        visited[nextX][nextY][k] = visited[x][y][k] + 1; //다음 좌표의 거리는 현재 좌표까지의 거리+1해서
                        q.push({nextX, nextY, k});                  //거리 업데이트하고 push
                    }
                }
                else if((map[nextX][nextY] == 1)&&(k > 0)){ //벽을 부수는 경우
                    if((visited[nextX][nextY][k-1] == 0)||(visited[nextX][nextY][k-1] > visited[x][y][k]+1)){ //방문한적 없거나, 이미 갔던 것보다 지금 갈 경로가 더 짧은 이동거리를 가진다면
                        visited[nextX][nextY][k-1] = visited[x][y][k] + 1; //k-1한 채로 위와 동일
                        q.push({nextX, nextY, k - 1});
                    }
                }
        }

    }
    return -1; //탐색이 끝났는데 return된 값이 없다면 -1 return 

}

int main(){
    cin >> m >> n >> k;
    
    if ((m<=1000)&&(n<=1000)){
        vector<vector<int>> map(m+1, vector<int>(n+1)); //미로 형태 생성

        
    for (int i = 1; i < m+1; i++){
        string row;
        cin >> row;
        
        for (int j = 1; j < map[i].size(); j++){
            map[i][j] = row[j-1] - '0';
        }

    } //미로 값 넣기

    cout << bfs(map); //bfs call
    }
    else {return 0;}

}