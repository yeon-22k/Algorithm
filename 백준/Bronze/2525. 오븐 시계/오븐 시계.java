import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        int m1 = scanner.nextInt();
        int m2 = scanner.nextInt();

        if ((m1+m2)<60){
            System.out.printf("%d %d",h, m1+m2);
        }
        else if((m1+m2)>=60){
            if ((h+((m1+m2)/60))<24) {
                System.out.printf("%d %d", h + ((m1 + m2) / 60), (m1 + m2) % 60);
            }
            else
                System.out.printf("%d %d", h + (((m1 + m2) / 60))-24, (m1 + m2) % 60);
        }

    }
}