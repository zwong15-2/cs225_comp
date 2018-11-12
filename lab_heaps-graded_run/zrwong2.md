


## Score: 15/20 (75.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c    -c -o tests/basic.o tests/basic.cpp
clang++ tests/basic.o -std=c++1y -stdlib=libc++ -lc++abi -lpthread  -o test

```


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==25431== Memcheck, a memory error detector
==25431== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25431== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25431== Command: ./test -r xml "test_heapify_down_1"
==25431== 
==25431== 
==25431== HEAP SUMMARY:
==25431==     in use at exit: 0 bytes in 0 blocks
==25431==   total heap usage: 858 allocs, 858 frees, 67,708 bytes allocated
==25431== 
==25431== All heap blocks were freed -- no leaks are possible
==25431== 
==25431== For counts of detected and suppressed errors, rerun with: -v
==25431== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="69">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==25434== Memcheck, a memory error detector
==25434== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25434== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25434== Command: ./test -r xml "test_heapify_down_2"
==25434== 
==25434== 
==25434== HEAP SUMMARY:
==25434==     in use at exit: 0 bytes in 0 blocks
==25434==   total heap usage: 859 allocs, 859 frees, 67,764 bytes allocated
==25434== 
==25434== All heap blocks were freed -- no leaks are possible
==25434== 
==25434== For counts of detected and suppressed errors, rerun with: -v
==25434== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="75">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==25438== Memcheck, a memory error detector
==25438== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25438== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25438== Command: ./test -r xml "test_heapify_down_3"
==25438== 
==25438== 
==25438== HEAP SUMMARY:
==25438==     in use at exit: 0 bytes in 0 blocks
==25438==   total heap usage: 860 allocs, 860 frees, 67,868 bytes allocated
==25438== 
==25438== All heap blocks were freed -- no leaks are possible
==25438== 
==25438== For counts of detected and suppressed errors, rerun with: -v
==25438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="81">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==25440== Memcheck, a memory error detector
==25440== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25440== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25440== Command: ./test -r xml "test_heapify_down_4"
==25440== 
==25440== 
==25440== HEAP SUMMARY:
==25440==     in use at exit: 0 bytes in 0 blocks
==25440==   total heap usage: 860 allocs, 860 frees, 67,900 bytes allocated
==25440== 
==25440== All heap blocks were freed -- no leaks are possible
==25440== 
==25440== For counts of detected and suppressed errors, rerun with: -v
==25440== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==25445== Memcheck, a memory error detector
==25445== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25445== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25445== Command: ./test -r xml "test_heapify_down_5"
==25445== 
==25445== 
==25445== HEAP SUMMARY:
==25445==     in use at exit: 0 bytes in 0 blocks
==25445==   total heap usage: 863 allocs, 863 frees, 69,204 bytes allocated
==25445== 
==25445== All heap blocks were freed -- no leaks are possible
==25445== 
==25445== For counts of detected and suppressed errors, rerun with: -v
==25445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==25450== Memcheck, a memory error detector
==25450== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25450== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25450== Command: ./test -r xml "test_heapify_down_6"
==25450== 
==25450== 
==25450== HEAP SUMMARY:
==25450==     in use at exit: 0 bytes in 0 blocks
==25450==   total heap usage: 858 allocs, 858 frees, 68,016 bytes allocated
==25450== 
==25450== All heap blocks were freed -- no leaks are possible
==25450== 
==25450== For counts of detected and suppressed errors, rerun with: -v
==25450== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="102">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==25474== Memcheck, a memory error detector
==25474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25474== Command: ./test -r xml "test_heapify_down_7"
==25474== 
==25474== 
==25474== HEAP SUMMARY:
==25474==     in use at exit: 0 bytes in 0 blocks
==25474==   total heap usage: 860 allocs, 860 frees, 68,880 bytes allocated
==25474== 
==25474== All heap blocks were freed -- no leaks are possible
==25474== 
==25474== For counts of detected and suppressed errors, rerun with: -v
==25474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==25479== Memcheck, a memory error detector
==25479== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25479== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25479== Command: ./test -r xml "test_heapify_down_8"
==25479== 
==25479== 
==25479== HEAP SUMMARY:
==25479==     in use at exit: 0 bytes in 0 blocks
==25479==   total heap usage: 860 allocs, 860 frees, 69,120 bytes allocated
==25479== 
==25479== All heap blocks were freed -- no leaks are possible
==25479== 
==25479== For counts of detected and suppressed errors, rerun with: -v
==25479== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==25490== Memcheck, a memory error detector
==25490== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25490== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25490== Command: ./test -r xml "test_heapify_down_9"
==25490== 
==25490== 
==25490== HEAP SUMMARY:
==25490==     in use at exit: 0 bytes in 0 blocks
==25490==   total heap usage: 861 allocs, 861 frees, 70,176 bytes allocated
==25490== 
==25490== All heap blocks were freed -- no leaks are possible
==25490== 
==25490== For counts of detected and suppressed errors, rerun with: -v
==25490== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==25497== Memcheck, a memory error detector
==25497== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25497== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25497== Command: ./test -r xml "test_heapify_down_10"
==25497== 
==25497== 
==25497== HEAP SUMMARY:
==25497==     in use at exit: 0 bytes in 0 blocks
==25497==   total heap usage: 861 allocs, 861 frees, 70,608 bytes allocated
==25497== 
==25497== All heap blocks were freed -- no leaks are possible
==25497== 
==25497== For counts of detected and suppressed errors, rerun with: -v
==25497== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="126">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==25501== Memcheck, a memory error detector
==25501== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25501== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25501== Command: ./test -r xml "test_build_heap_1"
==25501== 
==25501== 
==25501== HEAP SUMMARY:
==25501==     in use at exit: 0 bytes in 0 blocks
==25501==   total heap usage: 861 allocs, 861 frees, 67,736 bytes allocated
==25501== 
==25501== All heap blocks were freed -- no leaks are possible
==25501== 
==25501== For counts of detected and suppressed errors, rerun with: -v
==25501== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="132">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==25506== Memcheck, a memory error detector
==25506== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25506== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25506== Command: ./test -r xml "test_build_heap_2"
==25506== 
==25506== 
==25506== HEAP SUMMARY:
==25506==     in use at exit: 0 bytes in 0 blocks
==25506==   total heap usage: 864 allocs, 864 frees, 67,848 bytes allocated
==25506== 
==25506== All heap blocks were freed -- no leaks are possible
==25506== 
==25506== For counts of detected and suppressed errors, rerun with: -v
==25506== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="143">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==25509== Memcheck, a memory error detector
==25509== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25509== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25509== Command: ./test -r xml "test_build_heap_3"
==25509== 
==25509== 
==25509== HEAP SUMMARY:
==25509==     in use at exit: 0 bytes in 0 blocks
==25509==   total heap usage: 866 allocs, 866 frees, 68,060 bytes allocated
==25509== 
==25509== All heap blocks were freed -- no leaks are possible
==25509== 
==25509== For counts of detected and suppressed errors, rerun with: -v
==25509== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="155">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==25514== Memcheck, a memory error detector
==25514== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25514== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25514== Command: ./test -r xml "test_build_heap_4"
==25514== 
==25514== 
==25514== HEAP SUMMARY:
==25514==     in use at exit: 0 bytes in 0 blocks
==25514==   total heap usage: 868 allocs, 868 frees, 68,364 bytes allocated
==25514== 
==25514== All heap blocks were freed -- no leaks are possible
==25514== 
==25514== For counts of detected and suppressed errors, rerun with: -v
==25514== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="167">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==25519== Memcheck, a memory error detector
==25519== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25519== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==25519== Command: ./test -r xml "test_build_heap_5"
==25519== 
==25519== 
==25519== HEAP SUMMARY:
==25519==     in use at exit: 0 bytes in 0 blocks
==25519==   total heap usage: 872 allocs, 872 frees, 70,488 bytes allocated
==25519== 
==25519== All heap blocks were freed -- no leaks are possible
==25519== 
==25519== For counts of detected and suppressed errors, rerun with: -v
==25519== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="179">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_update_elem_1

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="194">
      <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="65">
        <Original>
          sorted[i] == _heap.pop()
        </Original>
        <Expanded>
          6 == 7
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_update_elem_2

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="200">
      <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="65">
        <Original>
          sorted[i] == _heap.pop()
        </Original>
        <Expanded>
          1088 (0x440) == 1089 (0x441)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="4" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_update_elem_3

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="206">
      <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="65">
        <Original>
          sorted[i] == _heap.pop()
        </Original>
        <Expanded>
          95 == 96
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="9" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="9" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_update_elem_4

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="212">
      <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="65">
        <Original>
          sorted[i] == _heap.pop()
        </Original>
        <Expanded>
          89 == 90
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="13" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="13" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_update_elem_5

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="218">
      <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="65">
        <Original>
          sorted[i] == _heap.pop()
        </Original>
        <Expanded>
          96 == 97
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="64" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="64" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **zrwong2** using **56610f562b20981acfe86f880f54a5282dac9c0b** (from **November 12th 2018, 12:15:00 am**)
