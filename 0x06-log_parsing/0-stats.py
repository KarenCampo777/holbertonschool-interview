#!/usr/bin/python3
"""Script that reads stdin"""
import sys


def file_metrics(status_codes, file_size):
    print("File size: {}".format(file_size))
    for key, value in sorted(status_codes.items()):
        if value > 0:
            print("{}: {}".format(key, value))


random_codes = {'200': 0, '301': 0, '400': 0, '401': 0,
                '403': 0, '404': 0, '405': 0, '500': 0}
counter = 1
codes_size = 0
try:
    for line in sys.stdin:
        split_line = line.strip().split()
        if len(split_line) < 7:
            continue
        codes_size += int(split_line[-1])
        code_stats = split_line[-2]
        if code_stats in random_codes:
            random_codes[code_stats] += 1
        if counter == 10:
            file_metrics(random_codes, codes_size)
            counter = 1
        else:
            counter += 1
    file_metrics(random_codes, codes_size)
except KeyboardInterrupt:
    file_metrics(random_codes, codes_size)
    raise
