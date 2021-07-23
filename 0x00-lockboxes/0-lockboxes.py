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
    key_open == 0 and
    """
    key_open = [0]
    for key in key_open:
        for first_key in boxes[key]:
            if first_key not in key_open and key < len(boxes):
                key_open.append(first_key)

    if len(key_open) != len(boxes):
        return False
    else:
        return True
