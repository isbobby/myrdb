# Storage and Disk Space Management System

## Pgae layout simulation
The smallest unit of data transfer between RAM and disk is a page. We need to store many records / rows on a page. This can be done differently

1. unpacked fixed length record - `fixed_page.cpp`, we assume the record size is known beforehand.
2. variable length records - `variable_page.cpp`
