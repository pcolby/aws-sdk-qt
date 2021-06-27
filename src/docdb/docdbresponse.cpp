/*
    Copyright 2013-2021 Paul Colby

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

#include "docdbresponse.h"
#include "docdbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DocDBResponse
 * \brief The DocDBResponse class provides an interface for DocDB responses.
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DocDBResponse object with parent \a parent.
 */
DocDBResponse::DocDBResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new DocDBResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a DocDBResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DocDBResponsePrivate.
 */
DocDBResponse::DocDBResponse(DocDBResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void DocDBResponse::parseFailure(QIODevice &response)
{
    //Q_D(DocDBResponse);
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
 * \class QtAws::DocDB::DocDBResponsePrivate
 * \brief The DocDBResponsePrivate class provides private implementation for DocDBResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DocDBResponsePrivate object with public implementation \a q.
 */
DocDBResponsePrivate::DocDBResponsePrivate(
    DocDBResponse * const q) : q_ptr(q)
{

}

} // namespace DocDB
} // namespace QtAws
