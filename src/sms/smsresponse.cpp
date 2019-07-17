/*
    Copyright 2013-2019 Paul Colby

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

#include "smsresponse.h"
#include "smsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::SmsResponse
 * \brief The SmsResponse class provides an interface for SMS responses.
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a SmsResponse object with parent \a parent.
 */
SmsResponse::SmsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SmsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SmsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SmsResponsePrivate.
 */
SmsResponse::SmsResponse(SmsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SmsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SmsResponse);
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
 * \class QtAws::SMS::SmsResponsePrivate
 * \brief The SmsResponsePrivate class provides private implementation for SmsResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a SmsResponsePrivate object with public implementation \a q.
 */
SmsResponsePrivate::SmsResponsePrivate(
    SmsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SMS
} // namespace QtAws
