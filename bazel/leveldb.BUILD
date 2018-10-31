package(default_visibility = ["//visibility:public"])


config_setting(
    name = "darwin",
    values = {"cpu": "darwin"},
    visibility = ["//visibility:public"],
)

SOURCES = ["/home/agnes/Documents/myleveldb-1.20/db/builder.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/c.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/dbformat.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/db_impl.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/db_iter.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/dumpfile.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/filename.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/log_reader.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/log_writer.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/memtable.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/repair.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/table_cache.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/version_edit.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/version_set.cc",
         "/home/agnes/Documents/myleveldb-1.20/db/write_batch.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/block_builder.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/block.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/filter_block.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/format.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/iterator.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/merger.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/table_builder.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/table.cc",
         "/home/agnes/Documents/myleveldb-1.20/table/two_level_iterator.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/arena.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/bloom.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/cache.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/coding.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/comparator.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/crc32c.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/env.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/env_posix.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/filter_policy.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/hash.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/histogram.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/logging.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/options.cc",
         "/home/agnes/Documents/myleveldb-1.20/util/status.cc",
         "/home/agnes/Documents/myleveldb-1.20/port/port_posix.cc",
         "/home/agnes/Documents/myleveldb-1.20/port/port_posix_sse.cc",
         "/home/agnes/Documents/myleveldb-1.20/helpers/memenv/memenv.cc",
    ]

cc_library(
    name = "leveldb",
    srcs = SOURCES,
    hdrs = glob([ 
        "helpers/memenv/*.h",
        "util/*.h",
        "port/*.h",
        "port/win/*.h",
        "table/*.h",
        "db/*.h",
        "/home/agnes/Documents/myleveldb-1.20/include/leveldb/*.h"
    ],
    exclude = [
            "**/*test.*",
    ]),
    includes = [
        "include/",
    ],
    copts = [
        "-fno-builtin-memcmp",
        "-DLEVELDB_PLATFORM_POSIX=1",
        "-DLEVELDB_ATOMIC_PRESENT",
    ],
    defines = [
        "LEVELDB_PLATFORM_POSIX",
    ] + select({
        ":darwin": ["OS_MACOSX"],
        "//conditions:default": [],
    }),
)