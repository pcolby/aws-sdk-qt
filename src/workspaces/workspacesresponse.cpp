// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workspacesresponse.h"
#include "workspacesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::WorkSpacesResponse
 * \brief The WorkSpacesResponse class provides an interface for WorkSpaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a WorkSpacesResponse object with parent \a parent.
 */
WorkSpacesResponse::WorkSpacesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkSpacesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkSpacesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkSpacesResponsePrivate.
 */
WorkSpacesResponse::WorkSpacesResponse(WorkSpacesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkSpacesResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkSpacesResponse);
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
 * \class QtAws::WorkSpaces::WorkSpacesResponsePrivate
 * \brief The WorkSpacesResponsePrivate class provides private implementation for WorkSpacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a WorkSpacesResponsePrivate object with public implementation \a q.
 */
WorkSpacesResponsePrivate::WorkSpacesResponsePrivate(
    WorkSpacesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
