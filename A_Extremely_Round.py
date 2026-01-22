t = int(input())
for _ in range(t):
    n = int(input())
    s = str(n)
    d = len(s)
    first_digit = int(s[0])
    
    ans = 9 * (d - 1) + first_digit
    
    if first_digit * 10**(d-1) > n:
        ans -= 1
    
    print(ans)
