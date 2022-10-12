import java.util.Scanner;
public class CGPAandPercentage {
    public static void main(String[] args) {
        System.out.print("Enter mark of subject1 out of 100: ");
        Scanner sc = new Scanner(System.in);
        int m1 = sc.nextInt();
        System.out.print("Enter mark of subject2 out of 100: ");
        int m2 = sc.nextInt();
        System.out.print("Enter mark of subject3 out of 100: ");
        int m3 = sc.nextInt();
        System.out.print("Enter mark of subject4 out of 100: ");
        int m4 = sc.nextInt();
        System.out.print("Enter mark of subject5 out of 100: ");
        int m5 = sc.nextInt();
        float p = (float)(m1+m2+m3+m4+m5)/5;
        System.out.println("Your Percentage is "+p);
        float i = 95.0f;
        if(p>=i){
            System.out.println("Your CGPA is 10");
        } else {
            System.out.println("Your CGPA is "+(p/9.5));
        }
    }
}
