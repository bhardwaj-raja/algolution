public class Ps_2 
{
    public static int findInversion(int []a)
    {
        int count=0;
        for(int i=0;i<a.length;i++)
        {
            for(int j=i+1;j<a.length;j++)
            {
                if(a[i]>a[j])
                    count++;
            }
        }
        return count;
    }
    public static void main(String args[])
    {
        int nums[] = {9,8,7,6,5,4,3,2,1};
        System.out.println("Total Inversions are:- "+findInversion(nums));
    }
}
