#creating an executable
#add_executable() can contain multiple source files 
add_executable(ipc_example main.cpp test.cpp)

#here we define that we want to use C++14
target_compile_features(ipc_example PRIVATE cxx_std_14)

#here we specify were we want to install the executable
install(TARGETS ipc_example DESTINATION executable PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE)