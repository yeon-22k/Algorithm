import java.io.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        for (int i=n; i>=1; i--){
            if (((n%i)==1)){
                answer = i;
            }
        }
        
        System.out.println(answer);
        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bf.readLine());
        
        Solution s = new Solution();
        s.solution(n);
    }

}