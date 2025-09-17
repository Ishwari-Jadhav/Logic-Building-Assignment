/* Write a java program which accept two arrays from user and display contents of each array.
Input :  2  9  7  5  2  3
         9  3  5  5
Output : 2  9  7  5  2  3
         9  3  5  5        
*/

import java.util.*;

class MyArray
{
    public void Display(int arr1[],int arr2[])
    {
        int i = 0;

        for (i = 0;i < arr1.length;i++)
        {
            System.out.print(arr1[i]+"\t");
        }
        System.out.println();

        for (i = 0;i < arr2.length;i++)
        {
            System.out.print(arr2[i]+"\t");
        }
        System.out.println();
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        System.out.println("Enter elements of first array:");
        String line1 = sobj.nextLine();
        String[] tokens1 = line1.trim().split("\\s+");
        int size1 = tokens1.length;
        int arr1[] = new int[size1];
        for (i = 0;i < size1;i++)
        {
            arr1[i] = Integer.parseInt(tokens1[i]);
        }

        System.out.println("Enter elements of second array:");
        String line2 = sobj.nextLine();
        String[] tokens2 = line2.trim().split("\\s+");
        int size2 = tokens2.length;
        int arr2[] = new int[size2];
        for (i = 0;i < size2;i++)
        {
            arr2[i] = Integer.parseInt(tokens2[i]);
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr1,arr2);

        sobj.close();
    }
}