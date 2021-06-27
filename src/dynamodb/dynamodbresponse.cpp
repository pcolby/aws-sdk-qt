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
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::DynamoDBResponse
 * \brief The DynamoDBResponse class provides an interface for DynamoDB responses.
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a DynamoDBResponse object with parent \a parent.
 */
DynamoDBResponse::DynamoDBResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new DynamoDBResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a DynamoDBResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DynamoDBResponsePrivate.
 */
DynamoDBResponse::DynamoDBResponse(DynamoDBResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void DynamoDBResponse::parseFailure(QIODevice &response)
{
    //Q_D(DynamoDBResponse);
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
 * \class QtAws::DynamoDB::DynamoDBResponsePrivate
 * \brief The DynamoDBResponsePrivate class provides private implementation for DynamoDBResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a DynamoDBResponsePrivate object with public implementation \a q.
 */
DynamoDBResponsePrivate::DynamoDBResponsePrivate(
    DynamoDBResponse * const q) : q_ptr(q)
{

}

} // namespace DynamoDB
} // namespace QtAws
