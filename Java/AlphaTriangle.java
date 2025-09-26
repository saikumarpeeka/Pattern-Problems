import java.util.*;

public class AlphaTriangle {
    public static void PrintPattern(int n) {
        for (int i = 0; i < n; i++) {
            for(char ch = (char)(int)('A'+ n - 1 - i); ch <= (char)(int)('A' + n - 1); ch++) {
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        PrintPattern(n);
        sc.close();
    }
}