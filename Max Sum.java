package set2;

/**
 *
 * @author raja
 */
public class Ps_1 
{
    public static int maxSum(int []a)
    {
        //Kadane's Algo
        if(a.length == 0)
            return 0;
        if(a.length == 1)
            return a[0];
        int sum=a[0],max_sum=a[0];
        for(int i=1;i<a.length;i++)
        {
            sum = Math.max(a[i], sum + a[i]);
            max_sum = Math.max(max_sum, sum);
        }
        return max_sum;
    }
    public static void main(String args[])
    {
        int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
        System.out.println("Max Sum is:- "+maxSum(nums));
    }
}
