import java.io.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        if (n % 2 == 0) {
            return calculate(n, answer);
        }
        else {
            n -= 1;
            return calculate(n, answer);
        }
    }
    
    public int calculate(int n, int result) {
        if (n == 0)
            return result;
        else{
            result += n;
            n -= 2;
            return calculate(n, result);
        }
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Solution s = new Solution();
        
        int angle = Integer.parseInt(br.readLine());
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(s.solution(angle));
        bw.flush();
        bw.close();
    }
}