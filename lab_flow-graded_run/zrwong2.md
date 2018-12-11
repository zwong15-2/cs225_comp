


## Score: 0/10 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✗ - [0/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 0 / 1

```
==3131== Memcheck, a memory error detector
==3131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3131== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3131== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==3131== 
==3131== Invalid read of size 1
==3131==    at 0x417A51: __is_long (string:1714)
==3131==    by 0x417A51: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3131==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3131==    by 0x45D267: ____C_A_T_C_H____T_E_S_T____0() (unit_tests.cpp:16)
==3131==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3131==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3131==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3131==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3131==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3131==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3131==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3131==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3131==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3131==  Address 0x60b0a70 is 0 bytes after a block of size 48 alloc'd
==3131==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3131==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3131==    by 0x435DA1: __allocate (new:156)
==3131==    by 0x435DA1: allocate (memory:1634)
==3131==    by 0x435DA1: allocate (memory:1439)
==3131==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3131==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3131==    by 0x40A724: push_back (vector:1591)
==3131==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3131==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3131==    by 0x45D267: ____C_A_T_C_H____T_E_S_T____0() (unit_tests.cpp:16)
==3131==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3131==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3131==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3131==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3131==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3131== 
==3131== Invalid read of size 8
==3131==    at 0x417A9B: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3131==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3131==    by 0x45D267: ____C_A_T_C_H____T_E_S_T____0() (unit_tests.cpp:16)
==3131==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3131==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3131==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3131==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3131==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3131==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3131==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3131==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3131==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3131==  Address 0x60b0a70 is 0 bytes after a block of size 48 alloc'd
==3131==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3131==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3131==    by 0x435DA1: __allocate (new:156)
==3131==    by 0x435DA1: allocate (memory:1634)
==3131==    by 0x435DA1: allocate (memory:1439)
==3131==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3131==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3131==    by 0x40A724: push_back (vector:1591)
==3131==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3131==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3131==    by 0x45D267: ____C_A_T_C_H____T_E_S_T____0() (unit_tests.cpp:16)
==3131==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3131==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3131==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3131==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3131==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3131== 
==3131== Invalid read of size 8
==3131==    at 0x417AA1: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3131==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3131==    by 0x45D267: ____C_A_T_C_H____T_E_S_T____0() (unit_tests.cpp:16)
==3131==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3131==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3131==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3131==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3131==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3131==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3131==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3131==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3131==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3131==  Address 0x60b0a78 is 8 bytes after a block of size 48 alloc'd
==3131==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3131==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3131==    by 0x435DA1: __allocate (new:156)
==3131==    by 0x435DA1: allocate (memory:1634)
==3131==    by 0x435DA1: allocate (memory:1439)
==3131==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing flow through two pipes - secret test

- **Points**: 0 / 1

```
==3151== Memcheck, a memory error detector
==3151== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3151== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3151== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==3151== 
==3151== Conditional jump or move depends on uninitialised value(s)
==3151==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3151==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3151==    by 0x45DE99: ____C_A_T_C_H____T_E_S_T____2() (unit_tests.cpp:33)
==3151==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3151==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3151==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3151==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3151==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3151==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3151==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3151==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3151==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3151== 
==3151== Conditional jump or move depends on uninitialised value(s)
==3151==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3151==    by 0x40D53E: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3151==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3151==    by 0x45DE99: ____C_A_T_C_H____T_E_S_T____2() (unit_tests.cpp:33)
==3151==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3151==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3151==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3151==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3151==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3151==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3151==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3151==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3151== 
==3151== Conditional jump or move depends on uninitialised value(s)
==3151==    at 0x427AEA: __get_pointer (string:1808)
==3151==    by 0x427AEA: data (string:1650)
==3151==    by 0x427AEA: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3151==    by 0x428FA3: operator() (unordered_map:384)
==3151==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (__hash_table:2020)
==3151==    by 0x40D66D: find (unordered_map:970)
==3151==    by 0x40D66D: Graph::assertVertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:296)
==3151==    by 0x40D5AD: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3151==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3151==    by 0x45DE99: ____C_A_T_C_H____T_E_S_T____2() (unit_tests.cpp:33)
==3151==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3151==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3151==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3151==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3151==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3151==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3151== 
==3151== Conditional jump or move depends on uninitialised value(s)
==3151==    at 0x427C0B: __get_pointer (string:1808)
==3151==    by 0x427C0B: data (string:1650)
==3151==    by 0x427C0B: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3151==    by 0x428FA3: operator() (unordered_map:384)
==3151==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 0 / 1

```
==3185== Memcheck, a memory error detector
==3185== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3185== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3185== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==3185== 
==3185== Invalid read of size 1
==3185==    at 0x417A51: __is_long (string:1714)
==3185==    by 0x417A51: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3185==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3185==    by 0x45E6E7: ____C_A_T_C_H____T_E_S_T____4() (unit_tests.cpp:46)
==3185==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3185==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3185==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3185==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3185==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3185==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3185==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3185==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3185==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3185==  Address 0x60b0c30 is 0 bytes after a block of size 48 alloc'd
==3185==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3185==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3185==    by 0x435DA1: __allocate (new:156)
==3185==    by 0x435DA1: allocate (memory:1634)
==3185==    by 0x435DA1: allocate (memory:1439)
==3185==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3185==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3185==    by 0x40A724: push_back (vector:1591)
==3185==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3185==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3185==    by 0x45E6E7: ____C_A_T_C_H____T_E_S_T____4() (unit_tests.cpp:46)
==3185==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3185==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3185==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3185==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3185==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3185== 
==3185== Invalid read of size 8
==3185==    at 0x417A9B: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3185==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3185==    by 0x45E6E7: ____C_A_T_C_H____T_E_S_T____4() (unit_tests.cpp:46)
==3185==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3185==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3185==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3185==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3185==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3185==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3185==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3185==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3185==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3185==  Address 0x60b0c30 is 0 bytes after a block of size 48 alloc'd
==3185==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3185==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3185==    by 0x435DA1: __allocate (new:156)
==3185==    by 0x435DA1: allocate (memory:1634)
==3185==    by 0x435DA1: allocate (memory:1439)
==3185==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3185==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3185==    by 0x40A724: push_back (vector:1591)
==3185==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3185==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3185==    by 0x45E6E7: ____C_A_T_C_H____T_E_S_T____4() (unit_tests.cpp:46)
==3185==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3185==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3185==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3185==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3185==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3185== 
==3185== Invalid read of size 8
==3185==    at 0x417AA1: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3185==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3185==    by 0x45E6E7: ____C_A_T_C_H____T_E_S_T____4() (unit_tests.cpp:46)
==3185==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3185==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3185==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3185==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3185==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3185==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3185==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3185==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3185==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3185==  Address 0x60b0c38 is 8 bytes after a block of size 48 alloc'd
==3185==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3185==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3185==    by 0x435DA1: __allocate (new:156)
==3185==    by 0x435DA1: allocate (memory:1634)
==3185==    by 0x435DA1: allocate (memory:1439)
==3185==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_trait
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing flow through two pipes

- **Points**: 0 / 1

```
==3194== Memcheck, a memory error detector
==3194== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3194== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3194== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==3194== 
==3194== Conditional jump or move depends on uninitialised value(s)
==3194==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3194==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3194==    by 0x45F319: ____C_A_T_C_H____T_E_S_T____6() (unit_tests.cpp:63)
==3194==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3194==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3194==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3194==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3194==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3194==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3194==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3194==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3194==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3194== 
==3194== Conditional jump or move depends on uninitialised value(s)
==3194==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3194==    by 0x40D53E: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3194==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3194==    by 0x45F319: ____C_A_T_C_H____T_E_S_T____6() (unit_tests.cpp:63)
==3194==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3194==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3194==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3194==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3194==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3194==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3194==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3194==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3194== 
==3194== Conditional jump or move depends on uninitialised value(s)
==3194==    at 0x427AEA: __get_pointer (string:1808)
==3194==    by 0x427AEA: data (string:1650)
==3194==    by 0x427AEA: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3194==    by 0x428FA3: operator() (unordered_map:384)
==3194==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (__hash_table:2020)
==3194==    by 0x40D66D: find (unordered_map:970)
==3194==    by 0x40D66D: Graph::assertVertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:296)
==3194==    by 0x40D5AD: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3194==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3194==    by 0x45F319: ____C_A_T_C_H____T_E_S_T____6() (unit_tests.cpp:63)
==3194==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3194==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3194==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3194==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3194==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3194==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3194== 
==3194== Conditional jump or move depends on uninitialised value(s)
==3194==    at 0x427C0B: __get_pointer (string:1808)
==3194==    by 0x427C0B: data (string:1650)
==3194==    by 0x427C0B: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3194==    by 0x428FA3: operator() (unordered_map:384)
==3194==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing simple backflow - secret

- **Points**: 0 / 1

```
==3212== Memcheck, a memory error detector
==3212== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3212== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3212== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==3212== 
==3212== Invalid read of size 1
==3212==    at 0x417A51: __is_long (string:1714)
==3212==    by 0x417A51: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3212==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3212==    by 0x46079C: ____C_A_T_C_H____T_E_S_T____8() (unit_tests.cpp:86)
==3212==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3212==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3212==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3212==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3212==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3212==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3212==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3212==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3212==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3212==  Address 0x60b14d0 is 0 bytes after a block of size 96 alloc'd
==3212==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3212==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3212==    by 0x435DA1: __allocate (new:156)
==3212==    by 0x435DA1: allocate (memory:1634)
==3212==    by 0x435DA1: allocate (memory:1439)
==3212==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3212==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3212==    by 0x40A724: push_back (vector:1591)
==3212==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3212==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3212==    by 0x46079C: ____C_A_T_C_H____T_E_S_T____8() (unit_tests.cpp:86)
==3212==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3212==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3212==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3212==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3212==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3212== 
==3212== Invalid read of size 8
==3212==    at 0x417A9B: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3212==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3212==    by 0x46079C: ____C_A_T_C_H____T_E_S_T____8() (unit_tests.cpp:86)
==3212==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3212==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3212==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3212==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3212==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3212==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3212==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3212==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3212==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3212==  Address 0x60b14d0 is 0 bytes after a block of size 96 alloc'd
==3212==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3212==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3212==    by 0x435DA1: __allocate (new:156)
==3212==    by 0x435DA1: allocate (memory:1634)
==3212==    by 0x435DA1: allocate (memory:1439)
==3212==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3212==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3212==    by 0x40A724: push_back (vector:1591)
==3212==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3212==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3212==    by 0x46079C: ____C_A_T_C_H____T_E_S_T____8() (unit_tests.cpp:86)
==3212==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3212==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3212==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3212==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3212==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3212== 
==3212== Invalid read of size 8
==3212==    at 0x417AA1: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3212==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3212==    by 0x46079C: ____C_A_T_C_H____T_E_S_T____8() (unit_tests.cpp:86)
==3212==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3212==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3212==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3212==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3212==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3212==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3212==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3212==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3212==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3212==  Address 0x60b14d8 is 8 bytes after a block of size 96 alloc'd
==3212==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3212==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3212==    by 0x435DA1: __allocate (new:156)
==3212==    by 0x435DA1: allocate (memory:1634)
==3212==    by 0x435DA1: allocate (memory:1439)
==3212==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, 
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing simple backflow

- **Points**: 0 / 1

```
==3225== Memcheck, a memory error detector
==3225== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3225== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3225== Command: ./test -r xml "Testing\ simple\ backflow"
==3225== 
==3225== Invalid read of size 1
==3225==    at 0x417A51: __is_long (string:1714)
==3225==    by 0x417A51: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3225==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3225==    by 0x461B2B: ____C_A_T_C_H____T_E_S_T____10() (unit_tests.cpp:107)
==3225==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3225==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3225==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3225==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3225==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3225==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3225==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3225==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3225==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3225==  Address 0x60b0ac0 is 0 bytes after a block of size 96 alloc'd
==3225==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3225==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3225==    by 0x435DA1: __allocate (new:156)
==3225==    by 0x435DA1: allocate (memory:1634)
==3225==    by 0x435DA1: allocate (memory:1439)
==3225==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3225==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3225==    by 0x40A724: push_back (vector:1591)
==3225==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3225==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3225==    by 0x461B2B: ____C_A_T_C_H____T_E_S_T____10() (unit_tests.cpp:107)
==3225==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3225==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3225==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3225==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3225==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3225== 
==3225== Invalid read of size 8
==3225==    at 0x417A9B: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3225==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3225==    by 0x461B2B: ____C_A_T_C_H____T_E_S_T____10() (unit_tests.cpp:107)
==3225==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3225==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3225==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3225==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3225==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3225==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3225==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3225==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3225==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3225==  Address 0x60b0ac0 is 0 bytes after a block of size 96 alloc'd
==3225==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3225==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3225==    by 0x435DA1: __allocate (new:156)
==3225==    by 0x435DA1: allocate (memory:1634)
==3225==    by 0x435DA1: allocate (memory:1439)
==3225==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) (__split_buffer:325)
==3225==    by 0x435B3B: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (vector:1571)
==3225==    by 0x40A724: push_back (vector:1591)
==3225==    by 0x40A724: Graph::getVertices() const (graph.cpp:107)
==3225==    by 0x43ADDB: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:25)
==3225==    by 0x461B2B: ____C_A_T_C_H____T_E_S_T____10() (unit_tests.cpp:107)
==3225==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3225==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3225==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3225==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3225==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3225== 
==3225== Invalid read of size 8
==3225==    at 0x417AA1: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2097)
==3225==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3225==    by 0x461B2B: ____C_A_T_C_H____T_E_S_T____10() (unit_tests.cpp:107)
==3225==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3225==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3225==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3225==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3225==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3225==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3225==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3225==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3225==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3225==  Address 0x60b0ac8 is 8 bytes after a block of size 96 alloc'd
==3225==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==3225==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==3225==    by 0x435DA1: __allocate (new:156)
==3225==    by 0x435DA1: allocate (memory:1634)
==3225==    by 0x435DA1: allocate (memory:1439)
==3225==    by 0x435DA1: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned long, unsigned long, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, s
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing full pipe usage - secret

- **Points**: 0 / 1

```
==3243== Memcheck, a memory error detector
==3243== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3243== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3243== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==3243== 
==3243== Conditional jump or move depends on uninitialised value(s)
==3243==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3243==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3243==    by 0x46331D: ____C_A_T_C_H____T_E_S_T____12() (unit_tests.cpp:132)
==3243==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3243==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3243==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3243==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3243==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3243==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3243==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3243==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3243==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3243== 
==3243== Conditional jump or move depends on uninitialised value(s)
==3243==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3243==    by 0x40D53E: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3243==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3243==    by 0x46331D: ____C_A_T_C_H____T_E_S_T____12() (unit_tests.cpp:132)
==3243==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3243==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3243==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3243==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3243==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3243==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3243==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3243==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3243== 
==3243== Conditional jump or move depends on uninitialised value(s)
==3243==    at 0x427AEA: __get_pointer (string:1808)
==3243==    by 0x427AEA: data (string:1650)
==3243==    by 0x427AEA: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3243==    by 0x428FA3: operator() (unordered_map:384)
==3243==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (__hash_table:2020)
==3243==    by 0x40D66D: find (unordered_map:970)
==3243==    by 0x40D66D: Graph::assertVertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:296)
==3243==    by 0x40D5AD: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3243==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3243==    by 0x46331D: ____C_A_T_C_H____T_E_S_T____12() (unit_tests.cpp:132)
==3243==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3243==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3243==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3243==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3243==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3243==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3243== 
==3243== Conditional jump or move depends on uninitialised value(s)
==3243==    at 0x427C0B: __get_pointer (string:1808)
==3243==    by 0x427C0B: data (string:1650)
==3243==    by 0x427C0B: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3243==    by 0x428FA3: operator() (unordered_map:384)
==3243==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::bas
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing full pipe usage

- **Points**: 0 / 1

```
==3260== Memcheck, a memory error detector
==3260== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3260== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3260== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==3260== 
==3260== Conditional jump or move depends on uninitialised value(s)
==3260==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3260==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3260==    by 0x464C0D: ____C_A_T_C_H____T_E_S_T____14() (unit_tests.cpp:157)
==3260==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3260==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3260==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3260==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3260==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3260==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3260==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3260==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3260==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3260== 
==3260== Conditional jump or move depends on uninitialised value(s)
==3260==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3260==    by 0x40D53E: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3260==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3260==    by 0x464C0D: ____C_A_T_C_H____T_E_S_T____14() (unit_tests.cpp:157)
==3260==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3260==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3260==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3260==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3260==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3260==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3260==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3260==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3260== 
==3260== Conditional jump or move depends on uninitialised value(s)
==3260==    at 0x427AEA: __get_pointer (string:1808)
==3260==    by 0x427AEA: data (string:1650)
==3260==    by 0x427AEA: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3260==    by 0x428FA3: operator() (unordered_map:384)
==3260==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (__hash_table:2020)
==3260==    by 0x40D66D: find (unordered_map:970)
==3260==    by 0x40D66D: Graph::assertVertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:296)
==3260==    by 0x40D5AD: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3260==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3260==    by 0x464C0D: ____C_A_T_C_H____T_E_S_T____14() (unit_tests.cpp:157)
==3260==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3260==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3260==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3260==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3260==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3260==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3260== 
==3260== Conditional jump or move depends on uninitialised value(s)
==3260==    at 0x427C0B: __get_pointer (string:1808)
==3260==    by 0x427C0B: data (string:1650)
==3260==    by 0x427C0B: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3260==    by 0x428FA3: operator() (unordered_map:384)
==3260==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<c
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing 3 x 3 plumbing - secret

- **Points**: 0 / 1

```
==3274== Memcheck, a memory error detector
==3274== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3274== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3274== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==3274== 
==3274== Conditional jump or move depends on uninitialised value(s)
==3274==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3274==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3274==    by 0x467132: ____C_A_T_C_H____T_E_S_T____16() (unit_tests.cpp:196)
==3274==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3274==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3274==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3274==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3274==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3274==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3274==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3274==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3274==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3274== 
==3274== Conditional jump or move depends on uninitialised value(s)
==3274==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3274==    by 0x40D53E: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3274==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3274==    by 0x467132: ____C_A_T_C_H____T_E_S_T____16() (unit_tests.cpp:196)
==3274==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3274==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3274==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3274==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3274==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3274==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3274==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3274==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3274== 
==3274== Conditional jump or move depends on uninitialised value(s)
==3274==    at 0x427AEA: __get_pointer (string:1808)
==3274==    by 0x427AEA: data (string:1650)
==3274==    by 0x427AEA: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3274==    by 0x428FA3: operator() (unordered_map:384)
==3274==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (__hash_table:2020)
==3274==    by 0x40D66D: find (unordered_map:970)
==3274==    by 0x40D66D: Graph::assertVertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:296)
==3274==    by 0x40D5AD: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3274==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3274==    by 0x467132: ____C_A_T_C_H____T_E_S_T____16() (unit_tests.cpp:196)
==3274==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3274==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3274==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3274==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3274==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3274==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3274== 
==3274== Conditional jump or move depends on uninitialised value(s)
==3274==    at 0x427C0B: __get_pointer (string:1808)
==3274==    by 0x427C0B: data (string:1650)
==3274==    by 0x427C0B: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3274==    by 0x428FA3: operator() (unordered_map:384)
==3274==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::bas
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing 3 x 3 plumbing

- **Points**: 0 / 1

```
==3289== Memcheck, a memory error detector
==3289== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3289== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3289== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==3289== 
==3289== Conditional jump or move depends on uninitialised value(s)
==3289==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3289==    by 0x43B28D: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3289==    by 0x4698D2: ____C_A_T_C_H____T_E_S_T____18() (unit_tests.cpp:235)
==3289==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3289==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3289==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3289==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3289==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3289==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3289==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3289==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3289==    by 0x48F83C: Catch::Session::run(int, char**) (catch.hpp:9076)
==3289== 
==3289== Conditional jump or move depends on uninitialised value(s)
==3289==    at 0x417A67: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (string:2096)
==3289==    by 0x40D53E: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3289==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3289==    by 0x4698D2: ____C_A_T_C_H____T_E_S_T____18() (unit_tests.cpp:235)
==3289==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3289==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3289==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3289==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3289==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3289==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3289==    by 0x48FBDE: Catch::Session::runInternal() (catch.hpp:9151)
==3289==    by 0x48F8BE: Catch::Session::run() (catch.hpp:9108)
==3289== 
==3289== Conditional jump or move depends on uninitialised value(s)
==3289==    at 0x427AEA: __get_pointer (string:1808)
==3289==    by 0x427AEA: data (string:1650)
==3289==    by 0x427AEA: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3289==    by 0x428FA3: operator() (unordered_map:384)
==3289==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Edge> > > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (__hash_table:2020)
==3289==    by 0x40D66D: find (unordered_map:970)
==3289==    by 0x40D66D: Graph::assertVertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:296)
==3289==    by 0x40D5AD: Graph::vertexExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const (graph.cpp:153)
==3289==    by 0x43B2A5: NetworkFlow::NetworkFlow(Graph&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) (NetworkFlow.cpp:41)
==3289==    by 0x4698D2: ____C_A_T_C_H____T_E_S_T____18() (unit_tests.cpp:235)
==3289==    by 0x49C812: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==3289==    by 0x48D0C6: Catch::TestCase::invoke() const (catch.hpp:9771)
==3289==    by 0x48CFF8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==3289==    by 0x489D96: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==3289==    by 0x4883F1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==3289==    by 0x491153: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==3289== 
==3289== Conditional jump or move depends on uninitialised value(s)
==3289==    at 0x427C0B: __get_pointer (string:1808)
==3289==    by 0x427C0B: data (string:1650)
==3289==    by 0x427C0B: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (string:4184)
==3289==    by 0x428FA3: operator() (unordered_map:384)
==3289==    by 0x428FA3: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Edge, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<c
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **zrwong2** using **5382c8848f2a1f92c7005c6a87c47def3e5ebdcf** (from **December 10th 2018, 12:15:00 am**)
