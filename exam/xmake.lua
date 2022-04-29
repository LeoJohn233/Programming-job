add_rules("mode.debug", "mode.release")

target("1")
    set_kind("binary")
    add_files("src/1/*.cc")

target("2")
    set_kind("binary")
    add_files("src/2/*.cc")

target("3")
    set_kind("binary")
    add_files("src/3/*.cc")

target("4")
    set_kind("binary")
    add_files("src/4/*.cc")

target("5")
    set_kind("binary")
    add_files("src/5/*.cc")
