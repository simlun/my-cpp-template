add_executable(tests tests.cpp catch.h)
target_link_libraries(tests LINK_PUBLIC Hello)