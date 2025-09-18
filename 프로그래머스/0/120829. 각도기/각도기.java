import java.io.*;

class Solution {
    public int solution(int angle) {
        if ((angle>0) && (angle<90))
            return 1;
        else if (angle == 90)
            return 2;
        else if ((angle>90) && (angle<180))
            return 3;
        else if (angle == 180)
            return 4;
        else
            return 0;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Solution s = new Solution();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int angle = Integer.parseInt(br.readLine());
        bw.write(s.solution(angle));
        bw.flush();
        bw.close();
    }
}