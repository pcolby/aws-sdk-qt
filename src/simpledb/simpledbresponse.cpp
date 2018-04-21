/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "simpledbresponse.h"
#include "simpledbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::SimpleDBResponse
 * \brief The SimpleDBResponse class provides an interface for SimpleDB responses.
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a SimpleDBResponse object with parent \a parent.
 */
SimpleDBResponse::SimpleDBResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SimpleDBResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SimpleDBResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SimpleDBResponsePrivate.
 */
SimpleDBResponse::SimpleDBResponse(SimpleDBResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SimpleDBResponse::parseFailure(QIODevice &response)
{
    Q_D(SimpleDBResponse);
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
 * \class QtAws::SimpleDB::SimpleDBResponsePrivate
 * \brief The SimpleDBResponsePrivate class provides private implementation for SimpleDBResponse.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a SimpleDBResponsePrivate object with public implementation \a q.
 */
SimpleDBResponsePrivate::SimpleDBResponsePrivate(
    SimpleDBResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SimpleDB
} // namespace QtAws
