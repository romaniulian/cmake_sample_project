#creating an executable
#add_executable() can contain multiple source files 
add_executable(ipc_example main.cpp)

#here we define that we want to use C++14
target_compile_features(ipc_example PRIVATE cxx_std_14)

target_link_libraries(ipc_example test)

target_include_directories(ipc_example PRIVATE ../test/inc ../class1/inc ../class2/inc)

#here we specify were we want to install the executable
install(TARGETS ipc_example DESTINATION executable PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE)