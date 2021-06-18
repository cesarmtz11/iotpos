file(REMOVE_RECURSE
  "iotpos.shell"
  "iotpos_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/translations.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
