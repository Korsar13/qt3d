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

#include "qglsceneformatplugin.h"
#include "qglobjscenehandler.h"

QT_BEGIN_NAMESPACE

//! [1]
class QGLObjScenePlugin : public QGLSceneFormatPlugin
{
public:
    QStringList keys() const;
    virtual QGLSceneFormatHandler *create(QIODevice *device, const QUrl& url, const QString &format) const;
};
//! [1]

//! [2]
QStringList QGLObjScenePlugin::keys() const
{
    return QStringList() << QLatin1String("obj") << QLatin1String("model/obj");
}
//! [2]

//! [3]
QGLSceneFormatHandler *QGLObjScenePlugin::create(QIODevice *device, const QUrl& url, const QString &format) const
{
    Q_UNUSED(device);
    Q_UNUSED(url);
    Q_UNUSED(format);
    return new QGLObjSceneHandler;
}
//! [3]

//! [4]
Q_EXPORT_STATIC_PLUGIN(QGLObjScenePlugin)
Q_EXPORT_PLUGIN2(qsceneobj, QGLObjScenePlugin)
//! [4]

QT_END_NAMESPACE
