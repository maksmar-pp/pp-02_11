# CMakeList.txt: projekt CMake dla elementu pp-02_11, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (pp-02_11 "pp-02_11.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET pp-02_11 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
