//Approach -1

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4 - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
 








 

//Approach -2

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 4; i>=1; i--) {
            for (int j = 1; j<i ; j++) {
                System.out.print(" ");}
            for (int j = 0; j <= 4-i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}










//Approach -3

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 1; i < 5; i++) {
            for (int j = 5; j > 0; j--) {
                if (j > i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println(" ");
        }
    }
}
