#!/usr/bin/python3
"""python"""
from sys import stdin
if __name__ == "__main__":

    
    random_codes = {'200':0, '301':0, '400':0, '401':0, '403':0, '404':0, '405':0, '500':0}
    codes_size = 0, counter = 1
    
    def file_path():
        print("File size: {}".format(codes_size))

    for key, value in sorted(codes_size.items()):
        if value > 0:
            print("{}: {}".format(key, value))

    try:
        for line in stdin:
            split_line = line.strip().split()
            if len(split_line) < 7:
                continue
        codes_size += int(split_line[-1])
        code_stats = split_line[-2]
        if code_stats in code_stats:
            code_stats[code_stats] += 1
        if counter == 10:
            file_path(code_stats, codes_size)
            counter = 1
        else:
            counter += 1
    file_path(code_stats, codes_size)
except KeyboardInterrupt:
    file_path(code_stats, codes_size)
    raise
