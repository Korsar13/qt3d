# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from geometryloaders.pro.

#####################################################################
## tst_geometryloaders Test:
#####################################################################

qt_internal_add_test(tst_geometryloaders
    SOURCES
        tst_geometryloaders.cpp
    PUBLIC_LIBRARIES
        Qt::3DCore
        Qt::3DCorePrivate
        Qt::3DExtras
        Qt::3DRender
        Qt::3DRenderPrivate
        Qt::Gui
)

# Resources:
set(geometryloaders_resource_files
    "cube.fbx"
    "cube.gltf"
    "cube.obj"
    "cube.ply"
    "cube.stl"
    "cube2.obj"
    "cube_buffer.bin"
)

qt_internal_add_resource(tst_geometryloaders "geometryloaders"
    PREFIX
        "/"
    FILES
        ${geometryloaders_resource_files}
)


#### Keys ignored in scope 1:.:.:geometryloaders.pro:<TRUE>:
# TEMPLATE = "app"
