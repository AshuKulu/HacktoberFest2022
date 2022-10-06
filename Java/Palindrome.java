import java.util.Scanner;

public class Pallindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //for integer input
        System.out.println("Enter a number to check palindrome: ");
        int ip = sc.nextInt();
        int x=ip;
        int y=0;
        while(x>0){
            int z=x%10;
            y=y*10+z;
            x=x/10;
        }
        if (ip==y){
            System.out.println("Palindrome Found");
        } else {
            System.out.println("Not a Palindrome");
        }

        //for string input
        System.out.println("Enter a String to check palindrome: ");
        String input= sc.next();
        StringBuilder reverse= new StringBuilder();
        for(int i=(input.length())-1; i>=0; i--){
            reverse.append(input.charAt(i));
        }
        System.out.println(input);
        System.out.println(reverse);
        if(reverse.toString().equals(input)){
            System.out.println("Palindrome Found");
        } else {
            System.out.println("Not a Palindrome");
        }
    }
}
