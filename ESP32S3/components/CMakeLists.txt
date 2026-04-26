set(src_dirs led iic xl9555 spi lcd)
set(inc_dirs led iic xl9555 spi lcd)
set(requires driver)

idf_component_register(SRC_DIRS ${src_dirs} INCLUDE_DIRS ${inc_dirs} REQUIRES ${requires})

component_compile_options(-ffast-math -O3 -Wno-error=format=-Wno-format)
