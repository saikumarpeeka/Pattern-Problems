import java.util.*;

public class DiamondPattern {
    public static void Pattern1(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print("  ");
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("* ");
            }
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print("  ");
            }
            System.out.println();
        }
    }
    public static void Pattern2(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("  ");
            }
            for (int j = 0; j < 2 * n - ( 2 * i + 1 ); j++) {
                System.out.print("* ");
            }
            for (int j = 0; j < i; j++) {
                System.out.print("  ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Pattern1(n);
        Pattern2(n);
        sc.close();
    }
}