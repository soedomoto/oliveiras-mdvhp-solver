#! /usr/bin/env python

import Dcluster as dcl
import sys

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print('Usage: %s <arquivo>' % sys.argv[0])
        sys.exit()
filein=sys.argv[1];
dcl.run(fi=filein, sep='\t')
