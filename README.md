Question 1: Positive, Negative, Zero

✅ Correct

Your switch logic works properly:

num > 0 → Positive
num < 0 → Negative
otherwise → Zero

Example:

Input: 5
Output: Positive Number
Question 2: Smallest Element in Array

✅ Correct

You:

Take array input.
Assume first element is minimum.
Compare all elements.
Print the smallest element.

Example:

Input: 5
10 4 8 2 6

Output:
Smallest element = 2
Question 4: Square Array Elements using Pointer and UDF

✅ Correct

You created:

void square(int *p)
{
    *p = (*p) * (*p);
}

Then passed each array element's address:

square(&a[i]);

This is exactly what the question asks (Pointer + UDF).

Example:

Input:
2 3 4

Output:
4
9
16
Question 5: Pattern

✅ Program is correct if the required output is:

100
81 81
64 64 64
49 49 49 49
36 36 36 36 36

Because:

num = 10 → 10² = 100
num = 9 → 9² = 81
num = 8 → 8² = 64
num = 7 → 7² = 49
num = 6 → 6² = 36
