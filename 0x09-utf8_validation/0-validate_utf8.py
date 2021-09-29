#!/usr/bin/python3
def validUTF8(data):
    counter = 0
    for x in data:
        mask = 0b10000000
        if not counter:
            while (mask & x):
                counter += 1
                mask >>= 1
            if counter > 4:
                return False
            if counter:
                counter -= 1
                if counter == 0:
                    return False
        elif counter > 0:
            if x >> 6 != 2:
                return False
            counter -= 1
    return not counter