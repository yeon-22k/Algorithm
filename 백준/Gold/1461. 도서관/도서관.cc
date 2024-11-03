#include <iostream>
#include <queue>
#include <algorithm>
#include <sstream>

using namespace std;

int n, m, sum, info[50];
priority_queue<int> q;

int main(){
    cin >> n >> m;
    cin.ignore();

    string input;
    getline(cin, input); //입력을 받아서 파싱하고 배열에 저장

    istringstream as(input);
    for (int i=0; i<n; i++){
        as >> info[i];
    }

    sort(info, info+n);

    int pivot = n; //모든 값이 음수일 때 마지막 인덱스를 pivot으로

    for (int i=0; i<n; i++){
        if (info[i]>0){
            pivot = i; //처음으로 양수가 되는 인덱스를 pivot으로
            break;     
        }
    }

    //양수/음수 나눠서 절대값 큰 순부터 탐색하며
    //m개씩 나눠서 거기서 절대값이 큰 값 자체를 우선순위 큐에 저장

    for (int i=0; i<pivot; i+=m){ //위치가 음수일 때
        q.push(abs(info[i]));
    }

    for (int i=n-1; i>=pivot; i-=m) { //위치가 양수일 때
        q.push(abs(info[i]));
    }

    //우선순위 큐 첫번째 top은 1번만 sum에 추가
    //나머지 큐 값들은 *2해서 sum에 추가
    int size = q.size();
    for (int i=0; i<size; i++){
        if (i==0){
            sum += q.top();
            q.pop();
        }
        else{
            sum += q.top() * 2;
            q.pop();
        }
    }

    cout << sum;

}