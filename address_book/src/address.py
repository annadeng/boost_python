#!/usr/bin/env python

import libaddress

adr = libaddress.address()
adr.add_address('John','Smith','4133788980','jsmit@gmail.com')
print adr.getCell()

adr.updateCell('6172839485')
print adr.getCell()

print adr.print_count()