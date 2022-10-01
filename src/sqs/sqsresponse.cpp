// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsresponse.h"
#include "sqsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::SqsResponse
 * \brief The SqsResponse class provides an interface for Sqs responses.
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a SqsResponse object with parent \a parent.
 */
SqsResponse::SqsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SqsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SqsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SqsResponsePrivate.
 */
SqsResponse::SqsResponse(SqsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SqsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SqsResponse);
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
 * \class QtAws::Sqs::SqsResponsePrivate
 * \brief The SqsResponsePrivate class provides private implementation for SqsResponse.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a SqsResponsePrivate object with public implementation \a q.
 */
SqsResponsePrivate::SqsResponsePrivate(
    SqsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Sqs
} // namespace QtAws
