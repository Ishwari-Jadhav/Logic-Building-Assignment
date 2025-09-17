/* Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements ata higher
indexes.
*/

class EquilibriumIndex
{
    public int equilibrium(int arr[],int n)
    {
        int i = 0;
        int totalSum = 0;
        int leftSum = 0;

        for(i = 0;i < n;i++)
        {
            totalSum = totalSum + arr[i];
        }

        for(i = 0; i < n; i++)
        {
            totalSum = totalSum - arr[i];

            if(leftSum == totalSum)
            {
                return i;
            }
            leftSum = leftSum + arr[i];
        }
        return -1;
    }
}

class Program4
{
    public static void main(String A[])
    {
        EquilibriumIndex equi = new EquilibriumIndex();
        int arr[] = {-7,1,5,2,-4,3,0};
        int arr_size = arr.length;
        int iRet = equi.equilibrium(arr,arr_size);
        System.out.println("First equilibrium index is : "+iRet);
    }
}