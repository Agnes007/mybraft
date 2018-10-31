file(REMOVE_RECURSE
  "../output/lib/libbraft.pdb"
  "../output/lib/libbraft.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/braft-shared.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
