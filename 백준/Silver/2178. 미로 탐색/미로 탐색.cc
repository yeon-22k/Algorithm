#include <vector>
#include <iostream>
#include <queue>
#include <tuple>

using namespace std;
int n, m, k;
int distance;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int_least64_t bfs(vector<vector<int>> map){
    vector<vector<int>> visited(n+1, vector<int>(m+1));
    queue<tuple<int, int>> q;

    if (map[1][1] == 1){
        visited[1][1] = 1; //(1,1)부터 시작(이동거리 1)
        q.push({1,1});

        while(!q.empty()){
            int x, y;
            tie(x, y) = q.front();
            q.pop(); //현재 있는 좌표를 x,y로 설정하고 큐에서 pop

            if ((x == n)&&(y == m)){
                return visited[x][y]; //도착하면 현재 이동거리 return
            }

            for (int i = 0; i < 4; i++){
                int nextX = x + dx[i];
                int nextY = y + dy[i];
                
                if (nextX >= 1 && nextX <= n && nextY >= 1 && nextY <= m){ //범위 체크
                    if(map[nextX][nextY] == 1){ //1로는 이동 가능 그 중에서도
                        if (visited[nextX][nextY] == 0) { //아직 방문하지 않은 좌표
                            visited[nextX][nextY] = visited[x][y] + 1; //이동 거리를 현재+1
                            q.push({nextX, nextY}); //해당 좌표 큐로 push
                        }             
                    
                    }
                }
                
            }
        }

        return -1; //bfs를 완료했음에도 (n, m)에 도착하지 못함
    }
    else {return -1;} //진행 불가
}

int main(){
    cin >> n >> m;
    
    if ((n<=1000)&&(m<=1000)){
        vector<vector<int>> map(n+1, vector<int>(m+1)); //미로 형태 생성

        
    for (int i = 1; i < n+1; i++){
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