cmake_minimum_required (VERSION 2.8.11)
project (tinkerboard_io)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -O0 -g")

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})

add_library(tinkerboard_io SHARED tinkerboard_io.c)

add_executable(gpio_out_example examples/gpio_out_example.c)
target_link_libraries(gpio_out_example tinkerboard_io ${CURSES_LIBRARIES})

add_executable(gpio_in_example examples/gpio_in_example.c)
target_link_libraries(gpio_in_example tinkerboard_io ${CURSES_LIBRARIES})

add_executable(spi_example examples/spi_example.c)
target_link_libraries(spi_example tinkerboard_io)

install (TARGETS tinkerboard_io LIBRARY DESTINATION lib)
install (FILES tinkerboard_io.h DESTINATION include)
install (FILES tinkerboard_spi.h DESTINATION include)