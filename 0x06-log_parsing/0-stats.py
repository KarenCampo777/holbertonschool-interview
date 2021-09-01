#!/usr/bin/python3
"""python"""

if __name__ == "__main__":
    from sys import stdin
    
    random_codes = {200:0, 301:0, 400:0, 401:0, 403:0, 404:0, 405:0, 500:0}
    codes_size =0
    def file_path(random_codes, codes_size):
        print("File size: {}".format(codes_size))
    
    counter = 1
    for counter in random_codes:
        if counter in random_codes == 0:
            continue
        print("{}: {}".format(counter, random_codes))
    
    try:
        for line in stdin:
            codes_size += 1
            res = line.split(" ")
            codes_size += int(res[-1])
        if res[-2] in random_codes.keys():
            random_codes[res[-2]] += 1
    except Exception:
        pass
        if not line % 10:
                 file_path(counter, random_codes)
    except KeyboardInterrupt:
        file_path(counter, random_codes)
        raise
    file_path()