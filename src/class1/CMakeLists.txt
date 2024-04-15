add_library(Class1 SHARED src/Class1.cpp)
target_include_directories(Class1 PRIVATE inc)

#here we specify were we want to install the executable
install(TARGETS Class1 DESTINATION executable PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE)