# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from enabled-qml.pro.

#####################################################################
## enabled-qml Binary:
#####################################################################

qt_internal_add_manual_test(enabled-qml
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::3DCore
        Qt::3DQuick
        Qt::3DQuickExtras
        Qt::3DRender
        Qt::Gui
        Qt::Qml
)

# Resources:
set(enabled-qml_resource_files
    "main.qml"
)

qt_internal_add_resource(enabled-qml "enabled-qml"
    PREFIX
        "/"
    FILES
        ${enabled-qml_resource_files}
)


## Scopes:
#####################################################################
