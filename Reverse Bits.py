def reverseBits(n):
    # 'bits' array to store the bits representation of 'n'.
    bits = [0]*32

    # Preparing the bits array.
    for i in range(32):
        # If the ith bit is set.
        if (n & (1 << i)) > 0:
            bits[i] = 1

    for i in range(16):
        # Swapping the left and rightmost bits.
        bits[i], bits[31-i] = bits[31-i], bits[i]

    # 'ans' will store the value for the reversed bits representation.
    ans = 0

    for i in range(32):
        # If the i'th bit is set.
        if bits[i] == 1:
            ans += (1 << i)

    return ans
