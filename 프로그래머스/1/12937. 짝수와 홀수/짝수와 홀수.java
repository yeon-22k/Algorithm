import java.io.*;
import java.util.*;

class Solution {
    public String solution(int num) {
        if (num%2==0)
            return "Even";
        else
            return "Odd";
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(bf.readLine());
        
        Solution s = new Solution();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(s.solution(num));
        bw.flush();
        bw.close();
        
    }
}