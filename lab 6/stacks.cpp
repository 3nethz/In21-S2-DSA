
int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int sum = 0, count = 0;
    long i = 0,j =0, a_length = a.size(), b_length = b.size();
    while (i < a_length)
    {
        if (sum +a[i] > maxSum)
        break;
        sum += a[i];
        i++;
        count++;
    }
    while(j < b_length)
    {
        sum += b[j];
        j++;
        while (sum > maxSum && i)
        {
            i--;
            sum -=a[i];
        }
        if (sum <= maxSum && count < i+j){
            count = i + j;
        }
    }
    return count;
}
