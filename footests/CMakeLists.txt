add_executable(
        catch
        catch.h
        catch.cpp
        catch_example_1.cpp
        catch_example_2.cpp
        catch_example_3.cpp
        testHello.cpp
)
target_link_libraries(catch LINK_PUBLIC Hello)