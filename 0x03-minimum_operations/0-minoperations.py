#!/usr/bin/python3
"""
Minimum Operations
"""


def minOperations(n):
    """
    Method that calculates
    the fewest number of operations
    """

    if n <= 1:
        return 0
    num, div, operations = n, 2, 0

    while num > 1:
        if num % div == 0:
            num = num / div
            operations = operations + div
        else:
            div += 1
    return operations
