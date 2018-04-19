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

#include "snsresponse.h"
#include "snsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SNSResponse
 * \brief The SNSResponse class provides an interface for SNS responses.
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SNSResponse object with parent \a parent.
 */
SNSResponse::SNSResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SNSResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SNSResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SNSResponsePrivate.
 */
SNSResponse::SNSResponse(SNSResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SNSResponse::parseFailure(QIODevice &response)
{
    Q_D(SNSResponse);
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
 * \class QtAws::SNS::SNSResponsePrivate
 * \brief The SNSResponsePrivate class provides private implementation for SNSResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SNSResponsePrivate object with public implementation \a q.
 */
SNSResponsePrivate::SNSResponsePrivate(
    SNSResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SNS
} // namespace QtAws
