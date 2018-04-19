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

#include "sqsresponse.h"
#include "sqsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::SQSResponse
 * \brief The SQSResponse class provides an interface for SQS responses.
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SQSResponse object with parent \a parent.
 */
SQSResponse::SQSResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SQSResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SQSResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SQSResponsePrivate.
 */
SQSResponse::SQSResponse(SQSResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SQSResponse::parseFailure(QIODevice &response)
{
    Q_D(SQSResponse);
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
 * \class QtAws::SQS::SQSResponsePrivate
 * \brief The SQSResponsePrivate class provides private implementation for SQSResponse.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SQSResponsePrivate object with public implementation \a q.
 */
SQSResponsePrivate::SQSResponsePrivate(
    SQSResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SQS
} // namespace QtAws
