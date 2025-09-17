import java.io.*;
import java.util.*;

class Solution {
    public int solution(int num1, int num2) {
        if (num1 == num2)
            return 1;
        else return -1;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        int num1 = Integer.parseInt(st.nextToken());
        int num2 = Integer.parseInt(st.nextToken());
        
        Solution s = new Solution();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(s.solution(num1, num2));
        bw.flush();
        bw.close();
    }
}