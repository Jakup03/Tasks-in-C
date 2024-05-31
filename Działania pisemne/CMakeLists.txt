#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-26 12:38:47.137364
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-std=c11"
      "-D_ANSI_OUTPUT"
      "-ggdb3"
      "-Werror"
      "-fmax-errors=5"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-Wno-error=unused-parameter"
      "-Wno-error=parentheses"
      "-Wextra"
      "-Werror=vla"
      "-pedantic"
      "-Wno-parentheses"
      "-xc"
      "-Wall"
      "-fdiagnostics-color"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-Wl,-wrap,main"
        "-ggdb3"
        "-Wl,-Map=main.map"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)