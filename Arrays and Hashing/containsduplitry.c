bool containsDuplicate(int* nums, int numsSize) {
    for(int i=0; i< numsSize; i++)
    {
        int current = *(nums+i);
        for (int j=i+1; j< numsSize; j++) 
        {
            if (current == nums[j])
            {
                return true;
                break;
            }
        }
    }
    return false;    
}