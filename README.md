
# Test Code
* Loop 10000000000
  * Accumulate the loop counter to a 'total' variable to prevent the code removal by code optimizer
* Print the elapsed time

# Test Result
## Visual Studio 2022
### C++ Latest Release
* C++  RELEASE loop count:10000000000,total:-5340232226128654848,duration:2486ms
* C++  RELEASE loop count:10000000000,total:-5340232226128654848,duration:2454ms

## .NET 6.0 Release
* C#   RELEASE loop count:10000000000,total:-5340232226128654848,duration:2499ms
* C#   RELEASE loop count:10000000000,total:-5340232226128654848,duration:4978ms

## rustc 1.58.1
### cargo run --release
* Rust RELEASE loop_count:10000000000,total:-5340232226128654848,duration:0ms
* Rust RELEASE loop_count:10000000000,total:-5340232226128654848,duration:0ms

## python 3.9.7
### python -O test_python.py
* Python   RELEASE loop count:10000000000,total:49999999995000000000,duration:1749050ms