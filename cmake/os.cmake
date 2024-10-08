if (WIN32)
    set(HashburstMiner_OS_WIN ON)
elseif (APPLE)
    set(HashburstMiner_OS_APPLE ON)

    if (IOS OR CMAKE_SYSTEM_NAME STREQUAL iOS)
        set(HashburstMiner_OS_IOS ON)
    else()
        set(HashburstMiner_OS_MACOS ON)
    endif()
else()
    set(HashburstMiner_OS_UNIX ON)

    if (ANDROID OR CMAKE_SYSTEM_NAME MATCHES "Android")
        set(HashburstMiner_OS_ANDROID ON)
    elseif(CMAKE_SYSTEM_NAME MATCHES "Linux")
        set(HashburstMiner_OS_LINUX ON)
    elseif(CMAKE_SYSTEM_NAME STREQUAL FreeBSD OR CMAKE_SYSTEM_NAME STREQUAL DragonFly)
        set(HashburstMiner_OS_FREEBSD ON)
    endif()
endif()


if (HashburstMiner_OS_WIN)
    add_definitions(-DWIN32 -DHashburstMiner_OS_WIN)
elseif(HashburstMiner_OS_APPLE)
    add_definitions(-DHashburstMiner_OS_APPLE)

    if (HashburstMiner_OS_IOS)
        add_definitions(-DHashburstMiner_OS_IOS)
    else()
        add_definitions(-DHashburstMiner_OS_MACOS)
    endif()

    if (HashburstMiner_ARM)
        set(WITH_SECURE_JIT ON)
    endif()
elseif(HashburstMiner_OS_UNIX)
    add_definitions(-DHashburstMiner_OS_UNIX)

    if (HashburstMiner_OS_ANDROID)
        add_definitions(-DHashburstMiner_OS_ANDROID)
    elseif (HashburstMiner_OS_LINUX)
        add_definitions(-DHashburstMiner_OS_LINUX)
    elseif (HashburstMiner_OS_FREEBSD)
        add_definitions(-DHashburstMiner_OS_FREEBSD)
    endif()
endif()

if (WITH_SECURE_JIT)
    add_definitions(-DHashburstMiner_SECURE_JIT)
endif()
