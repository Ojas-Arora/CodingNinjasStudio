#Count digits in a number that divide the number
def countDigits(n: int) -> int:
    # Initializing 'cur' and 'ans'.
    cur = n
    ans = 0

    # Iterating while 'cur' > 0.
    while cur > 0:
        # 'd_0' gives us the digit at 'ones' place decimal notation of 'cur'.
        d_0 = cur % 10
        if d_0 != 0:
            # Incrementing 'ans' by 1 if the current digit divides 'n' evenly.
            ans += (n % d_0) == 0
        cur //= 10

    return ans
