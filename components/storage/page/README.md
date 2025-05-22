# Storage and Disk Space Management System
Problem - representing complex objects using a single dimension array.

## Pgae layout simulation
The smallest unit of data transfer between RAM and disk is a page. We need to store many records / rows on a page. This can be done differently

1. unpacked fixed length record - `fixed_page.cpp`, we assume the record size is known beforehand.
2. variable length records - `variable_page.cpp`

To build and run, do `make exec`.

## Base Setup
One main objective is to provide an API for fast look up via ID efficiently, by minimising the number of iterations required.

We also need to support insert, update and delete APIs.

## Unpacked Fixed Length Record
The page will only support fixed length records.

The page will also be unpacked - when a deletion occurs, a "hole" is left in the contiguous array, and we make no attempts to shift the existing rows to close these holes.

One more assumption is that the sum of size of bitmap header and data rows will be smaller or equal to the page size. We will not attempt to handle cases where the data is larger than the page representation itself.

## Variable Length Records
