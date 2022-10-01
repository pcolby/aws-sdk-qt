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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DocDbResponse
 * \brief The DocDbResponse class provides an interface for DocDb responses.
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DocDbResponse object with parent \a parent.
 */
DocDbResponse::DocDbResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DocDbResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DocDbResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DocDbResponsePrivate.
 */
DocDbResponse::DocDbResponse(DocDbResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DocDbResponse::parseFailure(QIODevice &response)
{
    //Q_D(DocDbResponse);
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
 * \class QtAws::DocDb::DocDbResponsePrivate
 * \brief The DocDbResponsePrivate class provides private implementation for DocDbResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DocDbResponsePrivate object with public implementation \a q.
 */
DocDbResponsePrivate::DocDbResponsePrivate(
    DocDbResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DocDb
} // namespace QtAws
