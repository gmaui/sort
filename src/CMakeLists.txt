
set(SRCS  main.cpp )  
include_directories(  
		    ${PROJECT_SOURCE_DIR}/src/insert/  
		    ${PROJECT_SOURCE_DIR}/src/shellinsert/  
		    ${PROJECT_SOURCE_DIR}/src/bubble/  
		)  

#link_directories(  
#		    ${PROJECT_SOURCE_DIR}/src/insert/  
#		)  
  
#link_libraries(main sort.insert.0)  
	  
add_executable(main ${SRCS})  

target_link_libraries(main sort.insert.0)
target_link_libraries(main sort.shellinsert.0)
target_link_libraries(main sort.bubble.0)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/)  

add_subdirectory(insert)
add_subdirectory(shellinsert)
add_subdirectory(bubble)
	  
install(TARGETS main RUNTIME DESTINATION bin)
