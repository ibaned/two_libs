add_library(add_nums add_nums.c)
target_include_directories(add_nums INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include>
  )
target_link_libraries(add_nums PRIVATE incr_num)
install(TARGETS add_nums EXPORT add_nums-targets DESTINATION lib)
install(FILES add_nums.h DESTINATION include)
install(EXPORT add_nums-targets DESTINATION lib/two_libs)
