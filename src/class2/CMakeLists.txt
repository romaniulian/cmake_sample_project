add_library(Class2 src/Class2.cpp)
target_include_directories(Class2 PRIVATE inc ../Class1/inc)

target_link_libraries(Class2 Class1)