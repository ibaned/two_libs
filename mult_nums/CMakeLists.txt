add_library(mult_nums mult_nums.c)
set_target_properties(mult_nums PUBLIC_HEADER mult_nums.h)
target_include_directories(mult_nums PRIVATE ${ADD_NUMS_INCLUDE_DIRS})
target_link_libraries(mult_nums add_nums)
install(TARGETS add_nums EXPORT add_nums-targets
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include)
install(EXPORT mult_nums-targets DESTINATION lib/two_libs)
