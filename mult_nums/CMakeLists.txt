add_library(mult_nums mult_nums.c)
target_include_directories(mult_nums INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include>
  )
target_link_libraries(mult_nums PRIVATE add_nums)
install(TARGETS mult_nums EXPORT mult_nums-targets DESTINATION lib)
install(FILES mult_nums.h DESTINATION include)
install(EXPORT mult_nums-targets DESTINATION lib/two_libs)
