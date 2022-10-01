// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
