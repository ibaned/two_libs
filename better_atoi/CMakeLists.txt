add_library(better_atoi better_atoi.c)
set_property(TARGET better_atoi APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include>
  )
install(TARGETS better_atoi EXPORT better_atoi-targets DESTINATION lib)
install(FILES better_atoi.h DESTINATION include)
install(EXPORT better_atoi-targets DESTINATION lib/two_libs)
