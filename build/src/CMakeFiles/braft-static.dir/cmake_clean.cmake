file(REMOVE_RECURSE
  "../output/lib/libbraft.pdb"
  "../output/lib/libbraft.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/braft-static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
