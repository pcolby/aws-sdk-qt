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
 * \class QtAws::SNS::SnsResponse
 * \brief The SnsResponse class provides an interface for SNS responses.
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SnsResponse object with parent \a parent.
 */
SnsResponse::SnsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SnsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SnsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnsResponsePrivate.
 */
SnsResponse::SnsResponse(SnsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SnsResponse::parseFailure(QIODevice &response)
{
    Q_D(SnsResponse);
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
 * \class QtAws::SNS::SnsResponsePrivate
 * \brief The SnsResponsePrivate class provides private implementation for SnsResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SnsResponsePrivate object with public implementation \a q.
 */
SnsResponsePrivate::SnsResponsePrivate(
    SnsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SNS
} // namespace QtAws
