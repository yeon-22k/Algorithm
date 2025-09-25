import java.io.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        for (int i=1; i<=n ; i++){
            if ((n % i) == 0){
                answer += i;
            }
        }
        System.out.println(answer);
        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bf.readLine());
        
        Solution s = new Solution();

    }
}