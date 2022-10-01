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

#include "dynamodbresponse.h"
#include "dynamodbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DynamoDbResponse
 * \brief The DynamoDbResponse class provides an interface for DynamoDb responses.
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DynamoDbResponse object with parent \a parent.
 */
DynamoDbResponse::DynamoDbResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DynamoDbResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DynamoDbResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DynamoDbResponsePrivate.
 */
DynamoDbResponse::DynamoDbResponse(DynamoDbResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DynamoDbResponse::parseFailure(QIODevice &response)
{
    //Q_D(DynamoDbResponse);
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
 * \class QtAws::DynamoDb::DynamoDbResponsePrivate
 * \brief The DynamoDbResponsePrivate class provides private implementation for DynamoDbResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DynamoDbResponsePrivate object with public implementation \a q.
 */
DynamoDbResponsePrivate::DynamoDbResponsePrivate(
    DynamoDbResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DynamoDb
} // namespace QtAws
