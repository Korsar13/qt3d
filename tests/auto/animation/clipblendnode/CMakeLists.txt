# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

# Generated from clipblendnode.pro.

#####################################################################
## tst_clipblendnode Test:
#####################################################################

qt_internal_add_test(tst_clipblendnode
    SOURCES
        tst_clipblendnode.cpp
    INCLUDE_DIRECTORIES
        ../../core/common
    PUBLIC_LIBRARIES
        Qt::3DAnimation
        Qt::3DAnimationPrivate
        Qt::3DCore
        Qt::3DCorePrivate
        Qt::CorePrivate
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:clipblendnode.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_internal_extend_target(tst_clipblendnode CONDITION QT_FEATURE_private_tests
    SOURCES
        ../../core/common/qbackendnodetester.cpp ../../core/common/qbackendnodetester.h
        ../../core/common/testarbiter.h
)
