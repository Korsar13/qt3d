# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from assimp.pro.

#####################################################################
## assimp Binary:
#####################################################################

qt_internal_add_manual_test(assimp
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::3DCore
        Qt::3DExtras
        Qt::3DInput
        Qt::3DQuick
        Qt::3DQuickExtras
        Qt::3DRender
        Qt::Gui
        Qt::Qml
        Qt::Quick
)

# Resources:
set(assimp_resource_files
    "main.qml"
)

qt_internal_add_resource(assimp "assimp"
    PREFIX
        "/"
    FILES
        ${assimp_resource_files}
)
set(test_scene_resource_files
    "../../../examples/qt3d/exampleresources/assets/test_scene.dae"
)

qt_internal_add_resource(assimp "test_scene"
    PREFIX
        "/"
    BASE
        "../../../examples/qt3d/exampleresources"
    FILES
        ${test_scene_resource_files}
)
set(obj_resource_files
    "../../../examples/qt3d/exampleresources/assets/obj/ball.obj"
    "../../../examples/qt3d/exampleresources/assets/obj/material-sphere.obj"
    "../../../examples/qt3d/exampleresources/assets/obj/plane-10x10.obj"
    "../../../examples/qt3d/exampleresources/assets/obj/toyplane.obj"
    "../../../examples/qt3d/exampleresources/assets/obj/trefoil.obj"
)

qt_internal_add_resource(assimp "obj"
    PREFIX
        "/"
    BASE
        "../../../examples/qt3d/exampleresources"
    FILES
        ${obj_resource_files}
)


#### Keys ignored in scope 1:.:.:assimp.pro:<TRUE>:
# OTHER_FILES = "main.qml"
# SOURCE = "main.cpp"

## Scopes:
#####################################################################
