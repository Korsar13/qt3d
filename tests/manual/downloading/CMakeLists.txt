# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from downloading.pro.

#####################################################################
## downloading Binary:
#####################################################################

qt_internal_add_manual_test(downloading
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
set(downloading_resource_files
    "main.qml"
)

qt_internal_add_resource(downloading "downloading"
    PREFIX
        "/"
    FILES
        ${downloading_resource_files}
)


#### Keys ignored in scope 1:.:.:downloading.pro:<TRUE>:
# OTHER_FILES = "main.qml"

## Scopes:
#####################################################################
