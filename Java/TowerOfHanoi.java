public class TOH 
/*
*
*
* 
************ ABOUT TOWER OF HANOI PROBLEM ********************************
===========================================================================================================================
    Three rods and n discs are used in the mathematical problem known as the Tower of Hanoi. 
    The goal of the problem is to transfer the complete stack on another rod while adhering to these straightforward rules: 
        1) One disc at a time may only be relocated. 
        2) A disc may only be moved if it is the highest disc on a stack, 
                                and 
            each move entails taking the upper disc from one stack and placing it on top of another stack. 
        3) A larger disc cannot be stacked atop a smaller one.
===========================================================================================================================
*
*
*
*/

{
    static void tOfH(int n, char f_ROD, char t_ROD, char aux_rod) //Tower Of Hanoi Function
    {
        if (n == 1)
        {
            System.out.println("Disk 1 is moved from rod " +  f_ROD + " to rod " + t_ROD);
            return;
        }
        tOfH(n-1, f_ROD, aux_rod, t_ROD);

        System.out.println("Moving disk " + n + " from rod " +  f_ROD + " to rod " + t_ROD);

        tOfH(n-1, aux_rod, t_ROD, f_ROD);
    }
     
    public static void main(String args[])
    {
        int n = 4; // Number of disks
        tOfH(n, \'R1\', \'R3\', \'R2\');  // R1, R2 and R3 are names of rods (R)
    }
}