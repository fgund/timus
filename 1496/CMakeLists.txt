cmake_minimum_required(VERSION 3.2)

project(1496)
add_executable(${PROJECT_NAME} main.cpp)

set_target_properties(
	${PROJECT_NAME}
PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE
        /W4 /MD
    )
else ()
    target_compile_options(${PROJECT_NAME} PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()
