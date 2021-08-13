#!/usr/bin/python3
"method that calculates the fewest number"

def minOperations(n):

    if (n <= 1):
        return 0

    Hs = 1
    counter = 0
    copy_paste = 0

    while (Hs < n):
        if (n % Hs == 0):
            counter += 2
            copypaste = Hs
        else:
            counter += 1

        Hs = copy_paste + Hs

    return counter
