if (WITH_DMI AND (HashburstMiner_OS_WIN OR HashburstMiner_OS_LINUX OR HashburstMiner_OS_FREEBSD OR (HashburstMiner_OS_MACOS AND NOT HashburstMiner_ARM)))
    set(WITH_DMI ON)
else()
    set(WITH_DMI OFF)
endif()

if (WITH_DMI)
    add_definitions(/DHashburstMiner_FEATURE_DMI)

    list(APPEND HEADERS
        src/hw/dmi/DmiBoard.h
        src/hw/dmi/DmiMemory.h
        src/hw/dmi/DmiReader.h
        src/hw/dmi/DmiTools.h
        )

    list(APPEND SOURCES
        src/hw/dmi/DmiBoard.cpp
        src/hw/dmi/DmiMemory.cpp
        src/hw/dmi/DmiReader.cpp
        src/hw/dmi/DmiTools.cpp
        )

    if (HashburstMiner_OS_WIN)
        list(APPEND SOURCES src/hw/dmi/DmiReader_win.cpp)
    elseif(HashburstMiner_OS_LINUX OR HashburstMiner_OS_FREEBSD)
        list(APPEND SOURCES src/hw/dmi/DmiReader_unix.cpp)
    elseif(HashburstMiner_OS_MACOS)
        list(APPEND SOURCES src/hw/dmi/DmiReader_mac.cpp)
    endif()
else()
    remove_definitions(/DHashburstMiner_FEATURE_DMI)
endif()
