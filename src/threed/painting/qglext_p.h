/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: http://www.qt-project.org/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QGLEXT_P_H
#define QGLEXT_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QOpenGLBuffer>
#include <QtGlobal>
#include <QByteArray>

#include "qt3dglobal.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

// Provide some useful OpenGL extension definitions.

#if !defined(QT_OPENGL_ES)

extern void Q_QT3D_EXPORT qt_gl_ClientActiveTexture(GLenum texture);

#elif !defined(QT_OPENGL_ES_2)

#define qt_gl_ClientActiveTexture   glClientActiveTexture

#endif

class QGLExtensionChecker
{
public:
    QGLExtensionChecker(const char *str)
        : gl_extensions(str), gl_extensions_length(qstrlen(str))
    {}

    bool match(const char *str) {
        int str_length = qstrlen(str);
        const char *extensions = gl_extensions;
        int extensions_length = gl_extensions_length;

        while (1) {
            // the total length that needs to be matched is the str_length +
            // the space character that terminates the extension name
            if (extensions_length < str_length + 1)
                return false;
            if (qstrncmp(extensions, str, str_length) == 0 && extensions[str_length] == ' ')
                return true;

            int split_pos = 0;
            while (split_pos < extensions_length && extensions[split_pos] != ' ')
                ++split_pos;
            ++split_pos; // added for the terminating space character
            extensions += split_pos;
            extensions_length -= split_pos;
        }
        return false;
    }

private:
    const char *gl_extensions;
    int gl_extensions_length;
};

// Copy of some definitions from <QtOpenGL/private/qgl_p.h> so that
// we can avoid a direct dependency upon private headers in Qt.

QT_END_NAMESPACE

QT_END_HEADER

#endif
