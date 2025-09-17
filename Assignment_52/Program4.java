/* Write a java program which accept two arrays from user and form a new array which is combination of contents of first & second array.
Input :  12 57 28 3
         99 23 54 58 6 67
Output : 12 57 28 3 99 23 54 58 6 67       
*/

import java.util.*;

class MyArray
{
    public void ArrayConcate(int arr1[],int arr2[],int iSize1,int iSize2)
    {
        int combined[] = new int[iSize1 + iSize2];
        int i = 0;

        for (i = 0;i < iSize1;i++)
        {
            combined[i] = arr1[i];
        }

        for (i = 0;i < iSize2;i++)
        {
            combined[iSize1 + i] = arr2[i];
        }

        for (i = 0;i < combined.length;i++)
        {
            System.out.print(combined[i]+"\t");
        }
        System.out.println();
    }
}

class Program4
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
        mobj.ArrayConcate(arr1,arr2,size1,size2);

        sobj.close();
    }
}