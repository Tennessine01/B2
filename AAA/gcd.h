int greatest_com_div(int x, int y)
{
    int i, comment_divisor;
    for(i=2; i<=x; i++)
    {
        if (x % i==0 && y % i==0)
        {
            comment_divisor = i;
        }
    }
    return comment_divisor;
}