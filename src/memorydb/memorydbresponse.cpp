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

#include "memorydbresponse.h"
#include "memorydbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::MemoryDbResponse
 * \brief The MemoryDbResponse class provides an interface for MemoryDb responses.
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a MemoryDbResponse object with parent \a parent.
 */
MemoryDbResponse::MemoryDbResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MemoryDbResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MemoryDbResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MemoryDbResponsePrivate.
 */
MemoryDbResponse::MemoryDbResponse(MemoryDbResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MemoryDbResponse::parseFailure(QIODevice &response)
{
    //Q_D(MemoryDbResponse);
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
 * \class QtAws::MemoryDb::MemoryDbResponsePrivate
 * \brief The MemoryDbResponsePrivate class provides private implementation for MemoryDbResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a MemoryDbResponsePrivate object with public implementation \a q.
 */
MemoryDbResponsePrivate::MemoryDbResponsePrivate(
    MemoryDbResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MemoryDb
} // namespace QtAws
