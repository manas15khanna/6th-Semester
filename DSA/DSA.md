# Recursion
## Fibonacci using Recursion
```
def nth_fibonacci(n):
  
    # Base case: if n is 0 or 1, return n
    if n <= 1:
        return n
      
    # Recursive case: sum of the two preceding Fibonacci numbers
    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2)

n = 5
result = nth_fibonacci(n)
print(result)
```
## Give output
```
def cal(x):
    if x==0:
        return 1
    if x==1:
        return 2
    return 3*cal(x-1)-2 * cal(x-2)
res=cal(5)
print(res)

Answer: 32
```
## Give output
```
def cal(n,k):
    if k>n:
        return 0
    if k==0 or k==n:
        return 1
    return cal(n-1,k-1) + cal(n-1,k)
res=cal(4,2)
print(res)

Answer: 6
```


