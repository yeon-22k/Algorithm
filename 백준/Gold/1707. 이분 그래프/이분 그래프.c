#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int vertex;
    struct Node* next;
} Node;

Node * graph[20001];
int visit[20001];
int result[4];
int k;

void init(int v);
void edge(int v1, int v2);
void dfs(int j, int test);

int main(void){
    int v1, v2;

    scanf("%d", &k);

    for (int i = 0; i < k; i++){
        int v, e;
        scanf("%d %d", &v, &e);
        init(v); //그래프 초기화
        
        for (int j = 0; j < e; j++){ 
            scanf("%d %d", &v1, &v2);
            edge(v1-1, v2-1);
        } //그래프 edge 추가
        //그래프 완성

        for (int j = 0; j < v; j++){
            if (visit[j] == 0){ //방문하지 않은 정점
                visit[j] = 1; //첫번째 정점은 그룹 1로 설정
                dfs(j, i);
            }
        }
    }
    
    for (int i = 0; i < k; i++){ //result가 -1이면 이분그래프X, 나머지는 O
        if (result[i] == -1)
            printf("NO\n"); 
        else   
            printf("YES\n");

    }
    return 0;
}



void init(int v){
    for(int i = 0; i < v; i++){
        graph[i] = NULL;
        visit[i] = 0;
    }
}

void edge(int v1, int v2){
    Node* V2 = (Node*)malloc(sizeof(Node));
    V2->vertex = v2;
    V2->next = graph[v1];
    graph[v1] = V2;

    // v2 -> v1 간선 추가 (무방향 그래프이므로)
    Node* V1 = (Node*)malloc(sizeof(Node));
    V1->vertex = v1;
    V1->next = graph[v2];
    graph[v2] = V1;
}

void dfs(int j, int test){ 
    Node* node = graph[j]; //graph에서 j번 vetex와 연결된 node
    while (node != NULL){ //node가 존재할 때
        int next = node->vertex; //next는 node와 인접한 정점

        if (visit[next] == 0){ //next가 미방문 노드일때
            visit[next] = 3 - visit[j]; //해당 노드를 그룹 1 또는 2(현재 node에 따라) 할당
            dfs(next, test); //그리고 node의 인접 노드(next)로 dfs
        }
        else if (visit[next] == visit[j]){ //node와 next가 같은 그룹이라면
            result[test] = -1; //이분 그래프가 아님
            return;
        }

        node = node->next; //인접노드 next로 이동
    }
}