# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from animationutils.pro.

#####################################################################
## tst_animationutils Test:
#####################################################################

qt_internal_add_test(tst_animationutils
    SOURCES
        tst_animationutils.cpp
    PUBLIC_LIBRARIES
        Qt::3DAnimation
        Qt::3DAnimationPrivate
        Qt::3DCore
        Qt::3DCorePrivate
        Qt::CorePrivate
        Qt::Gui
)

# Resources:
set(animationutils_resource_files
    "clip1.json"
    "clip2.json"
    "clip3.json"
    "clip4.json"
    "clip5.json"
    "clip6.json"
)

qt_internal_add_resource(tst_animationutils "animationutils"
    PREFIX
        "/"
    FILES
        ${animationutils_resource_files}
)


#### Keys ignored in scope 1:.:.:animationutils.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

include(../../core/common/common.cmake)
qt3d_setup_common_test(tst_animationutils)
