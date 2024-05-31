#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-18 19:42:38.166765
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-DINSIDE_DANTE"
      "-std=c11"
      "-Wall"
      "-D_GNU_SOURCE"
      "-pedantic"
      "-ggdb3"
      "-Wno-error=unused-parameter"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"
      "-xc"
      "-Werror=vla"
      "-Wextra"
      "-Wno-parentheses"
      "-fdiagnostics-color"
      "-fmax-errors=5"
      "-Werror"
      "-D_ANSI_OUTPUT"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-cref"
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