#!/usr/bin/python3
"""
Lockboxes
"""


def canUnlockAll(boxes):
    """
    Determines if all boxes can be unlocked
    key_open --> stores the keys to unlock boxed
    key --> interger that will iterate
    first_key --> the key that opens other boxes
    """
    key_open = [0]
    for key in key_open:
        for first_key in boxes[key]:
            if first_key < len(boxes) and not key_open:
                first_key.append(key_open)

        if boxes is None or len(boxes) == 0:
            return False
        else:
            return True
