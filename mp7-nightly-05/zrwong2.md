


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
In file included from tests/GraphTests.cpp:1:
In file included from tests/../cs225/catch/catch.hpp:315:
In file included from /class/cs225/lm35/bin/../include/c++/v1/string:439:
In file included from /class/cs225/lm35/bin/../include/c++/v1/algorithm:628:
/class/cs225/lm35/bin/../include/c++/v1/memory:1645:31: fatal error: no matching constructor for initialization of 'Vertex'
            ::new((void*)__p) _Up(_VSTD::forward<_Args>(__args)...);
                              ^
/class/cs225/lm35/bin/../include/c++/v1/memory:1572:18: note: in instantiation of function template specialization 'std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &>, void *> >::construct<Vertex>' requested here
            {__a.construct(__p, _VSTD::forward<_Args>(__args)...);}
                 ^
/class/cs225/lm35/bin/../include/c++/v1/memory:1453:14: note: in instantiation of function template specialization 'std::__1::allocator_traits<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &>, void *> > >::__construct<Vertex>' requested here
            {__construct(__has_construct<allocator_type, pointer, _Args...>(),
             ^
/class/cs225/lm35/bin/../include/c++/v1/unordered_map:1340:20: note: in instantiation of function template specialization 'std::__1::allocator_traits<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &>, void *> > >::construct<Vertex>' requested here
    __node_traits::construct(__na, _VSTD::addressof(__h->__value_.__cc.second));
                   ^
/class/cs225/lm35/bin/../include/c++/v1/unordered_map:1363:25: note: in instantiation of member function 'std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &> > >::__construct_node_with_key' requested here
    __node_holder __h = __construct_node_with_key(__k);
                        ^
tests/../Graph.hpp:119:16: note: in instantiation of member function 'std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Vertex &> > >::operator[]' requested here
  V vertex_1 = vertexMap[key1];
               ^
tests/GraphTests.cpp:99:5: note: in instantiation of member function 'Graph<Vertex, Edge>::removeEdge' requested here
  g.removeEdge("a","c");
    ^
tests/../Vertex.h:10:5: note: candidate constructor not viable: requires single argument 'key', but no arguments were provided
    Vertex(string key) : key_(key) { }
    ^
tests/../Vertex.h:8:7: note: candidate constructor (the implicit move constructor) not viable: requires 1 argument, but 0 were provided
class Vertex {
      ^
tests/../Vertex.h:8:7: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 0 were provided
1 error generated.
make: *** [.objs/tests/GraphTests.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c CYOA.cpp -o .objs/CYOA.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/DirectedEdgeTests.cpp -o .objs/tests/DirectedEdgeTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/GraphTests.cpp -o .objs/tests/GraphTests.o

```


---

This report was generated for **zrwong2** using **5cf0f38f90c689ae2c48b076f98b9fdf9e88abe3** (from **December 12th 2018, 12:05:00 am**)
