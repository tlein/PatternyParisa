
file(GLOB_RECURSE PAT_Lib_Code *.cpp)
file(GLOB_RECURSE PAT_Lib_Headers *.hpp)

add_library(PAT_Lib ${PAT_Lib_Code} ${PAT_Lib_Headers})
