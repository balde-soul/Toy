message(${CMAKE_CURRENT_LIST_FILE})
include(ExternalProject)
set(ProjectBaseUrl https://github.com/balde-soul/ProjectBase.git)
set(ProjectBaseDownload ${CMAKE_SOURCE_DIR}/external)
set(ProjectBaseTag framework-building)
set(ProjectBaseInstallPrefix ${CMAKE_INSTALL_PREFIX})

ExternalProject_Add(
    ProjectBase
    PREFIX ProjectBase
    GIT_REPOSITORY ${ProjectBaseUrl}
    GIT_TAG ${ProjectBaseTag}
    BUILD_IN_SOURCE 0
    BUILD_COMMAND make -j 8
    INSTALL_COMMAND make install
    CMAKE_CACHE_ARGS
        -DCMAKE_BUILD_TYPE:STRING=Release
        -DCMAKE_INSTALL_PREFIX:STRING=${ProjectBaseInstallPrefix}
        -Dproject_base_build_shared_lib:BOOL=ON
)