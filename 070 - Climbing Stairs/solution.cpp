class Solution 
{
public:
    double climbStairs(double n) 
    {
        return calculateFibonacciTerm(n) + calculateFibonacciTerm(n - 1);
    }

    double calculateFibonacciTerm(const double position) 
    {
        return 1 / sqrt(5) * ( pow((1 + sqrt(5)) / 2, position) - pow((1 - sqrt(5)) / 2, position) );
    }
};
