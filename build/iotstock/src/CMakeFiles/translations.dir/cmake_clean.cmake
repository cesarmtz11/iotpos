file(REMOVE_RECURSE
  "iotstock.shell"
  "iotstock_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/translations.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
