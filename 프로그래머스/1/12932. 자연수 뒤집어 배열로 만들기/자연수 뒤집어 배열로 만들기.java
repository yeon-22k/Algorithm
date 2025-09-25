import java.io.*;

class Solution {
    public int[] solution(long n) {
        String num = Long.toString(n);
        
        int l = num.length();
        int[] answer = new int[l];
        for (int i=0; i<l; i++){
            answer[i] = (int) (n%10);
            n /= 10;
        }
        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(br.readLine());
        
        Solution s = new Solution();
        s.solution(n);
    }
}