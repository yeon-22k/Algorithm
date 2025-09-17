import java.io.*;

class Solution {
    public int solution(int age) {
        int answer = 0;
        answer = 2023 - age;
        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int age = Integer.parseInt(bf.readLine());
        
        Solution s = new Solution();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(s.solution(age));
        bw.flush();
        bw.close();
        
    }
}