// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appmeshresponse.h"
#include "appmeshresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::AppMeshResponse
 * \brief The AppMeshResponse class provides an interface for AppMesh responses.
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a AppMeshResponse object with parent \a parent.
 */
AppMeshResponse::AppMeshResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppMeshResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppMeshResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppMeshResponsePrivate.
 */
AppMeshResponse::AppMeshResponse(AppMeshResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppMeshResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppMeshResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::AppMesh::AppMeshResponsePrivate
 * \brief The AppMeshResponsePrivate class provides private implementation for AppMeshResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a AppMeshResponsePrivate object with public implementation \a q.
 */
AppMeshResponsePrivate::AppMeshResponsePrivate(
    AppMeshResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppMesh
} // namespace QtAws
