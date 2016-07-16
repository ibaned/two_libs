add_library(incr_num INTERFACE)
target_include_directories(incr_num INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include>
  )
install(TARGETS incr_num EXPORT incr_num-targets DESTINATION lib)
install(FILES incr_num.h DESTINATION include)
install(EXPORT incr_num-targets DESTINATION lib/two_libs)
