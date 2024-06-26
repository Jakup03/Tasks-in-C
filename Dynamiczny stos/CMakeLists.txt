﻿#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-31 15:15:33.687732
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-D_GNU_SOURCE"
      "-Wno-parentheses"
      "-Wno-error=parentheses"
      "-pedantic"
      "-Wextra"
      "-ggdb3"
      "-xc"
      "-fmax-errors=5"
      "-Werror=vla"
      "-D_ANSI_OUTPUT"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=unused-parameter"
      "-Werror"
      "-DINSIDE_DANTE"
      "-fdiagnostics-color"
      "-Wall"
      "-std=c11"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
        "-ggdb3"
        "-Wl,-cref"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
        "stack.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)