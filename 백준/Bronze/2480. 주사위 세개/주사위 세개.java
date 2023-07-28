import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int max = 0;
        if (a<=b){
            max = b;
            if (max<=c){
                max = c;
            }
        }
        else if (a>b){
            max = a;
            if (max<=c){
                max = c;
            }
        }

        if (a==b){
            if (b==c){
                System.out.printf("%d", 10000+a*1000);
            }
            else if (b!=c){
                System.out.printf("%d", 1000+a*100);
            }
        }
        else if (a==c){
            if (b==c){
                System.out.printf("%d", 10000+a*1000);
            }
            else if (b!=c){
                System.out.printf("%d", 1000+a*100);
            }
        }
        else if (a!=b){
            if (a==c||b==c){
                System.out.printf("%d", 1000+c*100);
            }
            else if (a!=c){
                System.out.printf("%d", max*100);
            }
        }
        else if (a!=c){
            if (b==c||a==c){
                System.out.printf("%d", 1000+c*100);
            }
            else if (b!=c){
                System.out.printf("%d", max*100);
            }
        }

    }
}
