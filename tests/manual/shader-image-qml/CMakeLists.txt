# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from shader-image-qml.pro.

#####################################################################
## shader-image-qml Binary:
#####################################################################

qt_internal_add_manual_test(shader-image-qml
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::3DCore
        Qt::3DInput
        Qt::3DQuick
        Qt::3DQuickExtras
        Qt::3DRender
        Qt::Gui
        Qt::Qml
        Qt::Quick
)

# Resources:
set(shader-image-qml_resource_files
    "image_512x512.jpg"
    "main.qml"
)

qt_internal_add_resource(shader-image-qml "shader-image-qml"
    PREFIX
        "/"
    FILES
        ${shader-image-qml_resource_files}
)


#### Keys ignored in scope 1:.:.:shader-image-qml.pro:<TRUE>:
# OTHER_FILES = "main.qml"

## Scopes:
#####################################################################
