import java.util.Arrays;


class Sorting{

    public static int[] insertionSort(int[] array, int nElements){
        for(int i=1; i<nElements; i++){ // outer loop starts from 1 as we get 0th index as the first sorted array
            int temp = array[i]; // assigning first element of the unsorted subarray to temp variable

            //inner loop - decrementing - comparisons between sorted subarray and value in temp variable
            int j = i-1; // sorted sub array is just before unsorted subarray
            while(j>=0 && array[j]>temp){
                //right shifting
                array[j+1] = array[j];
                j--; //inner loop decrementing for comparisons in the sorted subarray
            }
            array[j+1]= temp; //storing temp value in the hole position
        }
        return array;
    }
}


public class InsertionSort {
    public static void main(String[] args) {
        int[] testArray = {12, 5, 63, 47, 12, 4};
        Sorting sortObj = new Sorting();


        int[] insertionSortedArray = sortObj.insertionSort(testArray, testArray.length);
        for(int i=0; i< insertionSortedArray.length; i++){
            System.out.print(" "+insertionSortedArray[i]);
        }


    }
}
