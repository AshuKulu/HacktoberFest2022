import java.util.*;
public class Main
{
    public static int[] findBinary(int x){
        int absValue=Math.abs(x);
        int[] arr=new int[32];
        int i=0;
        int carry=0;
        
        while(absValue!=0){
            int bit=absValue&1;
            arr[i]=bit;
            i++;
            absValue=absValue>>1;
        }
        for(int k=0;k<32;k++){
            if(arr[k]==0){
                arr[k]=1;
            }else{
                arr[k]=0;
            }
        }
        int sum=arr[0]+1;
        if(arr[0]==0){
            arr[0]=1;
            return arr;
        }else{
            int j=0;
            
            while(sum==2){
                arr[j]=0;
                j++;
                carry=1;
                sum=carry+arr[j];
          
            }
            arr[j]=1;
            
                return arr;
                
            }
        }
        
    
	public static void main(String[] args) {
		int x=-16;
		Main obj=new Main();
		int[] arr=obj.findBinary(x);
		for(int i=31;i>=0;i--){
		    System.out.print(arr[i]+" ");
		}
	}
}
