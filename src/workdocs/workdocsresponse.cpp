/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "workdocsresponse.h"
#include "workdocsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::WorkDocsResponse
 * \brief The WorkDocsResponse class provides an interface for WorkDocs responses.
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a WorkDocsResponse object with parent \a parent.
 */
WorkDocsResponse::WorkDocsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkDocsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkDocsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkDocsResponsePrivate.
 */
WorkDocsResponse::WorkDocsResponse(WorkDocsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkDocsResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkDocsResponse);
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
 * \class QtAws::WorkDocs::WorkDocsResponsePrivate
 * \brief The WorkDocsResponsePrivate class provides private implementation for WorkDocsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a WorkDocsResponsePrivate object with public implementation \a q.
 */
WorkDocsResponsePrivate::WorkDocsResponsePrivate(
    WorkDocsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkDocs
} // namespace QtAws
