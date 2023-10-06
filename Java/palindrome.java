import java.util.Scanner;
public class palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number: ");
        int num = sc.nextInt();
        int temp = num;
        int rev = 0;
        for(;temp > 0;){
            rev = (rev * 10) + temp % 10;
            temp /= 10;
        }
        
        if (num == rev) System.out.println("The entered number is a palindrome number");
        else System.out.println("The entered number is not a palindrome number");
        sc.close();
    }
}
