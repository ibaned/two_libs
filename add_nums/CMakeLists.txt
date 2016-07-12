add_library(add_nums add_nums.c)
set_target_properties(add_nums PUBLIC_HEADER add_nums.h)
install(TARGETS add_nums EXPORT add_nums-targets
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include)
install(EXPORT add_nums-targets DESTINATION lib/two_libs)
set(ADD_NUMS_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
