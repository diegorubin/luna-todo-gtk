find_package(PkgConfig)

pkg_check_modules(GTK REQUIRED gtk+-3.0)
pkg_check_modules(GLIB_REQUIRED glib-2.0)

set(CFLAGS
  ${GLIB_CFLAGS} ${GLIB_CFLAGS_OTHER}
  ${GTK_CFLAGS} ${GTK_CFLAGS_OTHER}
)
add_definitions(${CFLAGS})

link_libraries(${GLIB_LIBRARIES})
link_libraries(${GTK_LIBRARIES})

link_directories(${GLIB_LIBRARY_DIRS})
link_directories(${GTK_LIBRARY_DIRS})

set(VALA_SRC
  views/window_main.vala
  lunatodo.vala
)

vala_precompile(VALA_C
  ${VALA_SRC}
PACKAGES
  gtk+-3.0
  posix
GENERATE_VAPI
  lunatodo
GENERATE_HEADER
  lunatodo
)

add_executable(lunatodo ${VALA_C})
add_library(lunatodo-clib ${VALA_C})

