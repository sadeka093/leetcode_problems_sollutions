#include<stdio.h>
int main()
{
    int n,s,e,x,mid,i,output,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    s=0;
    e=n-1;
    scanf("%d",&x);
    if(x<a[0])
    {
        output=0;
        printf("%d\n",output);
    }
    else if(x>a[e])
    {
        output=e+1;
        printf("%d\n",output);
    }

    else
    {
        while(s<=e)
        {
            mid=(s+e)/2;
            if(a[mid]==x)
            {
                printf("%d\n",mid);
                break;
            }

            else if(x<a[mid])
            {
                e=mid-1;
            }
            else if(x>a[mid])
            {
                s=mid+1;
            }
        }
    }

    if(e<s)
    {
        output=e+1;
        printf("%d",output);
    }


}
/*int searchInsert(int* nums, int numsSize, int target){

 int s,e,mid;
    s=0;
    e=numsSize-1;

    if(target<nums[0])
    {

        return 0;
    }
    else if(target>nums[e])
    {
        return numsSize;
    }

    else
    {
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }

            else if(target<nums[mid])
            {
                e=mid-1;
            }
            else if(target>nums[mid])
            {
                s=mid+1;
            }
        }
    }



       return e+1;



}



*/
