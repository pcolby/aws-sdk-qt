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

#include "pinpointemailresponse.h"
#include "pinpointemailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PinpointEmailResponse
 * \brief The PinpointEmailResponse class provides an interface for PinpointEmail responses.
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PinpointEmailResponse object with parent \a parent.
 */
PinpointEmailResponse::PinpointEmailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PinpointEmailResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PinpointEmailResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointEmailResponsePrivate.
 */
PinpointEmailResponse::PinpointEmailResponse(PinpointEmailResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PinpointEmailResponse::parseFailure(QIODevice &response)
{
    //Q_D(PinpointEmailResponse);
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
 * \class QtAws::PinpointEmail::PinpointEmailResponsePrivate
 * \brief The PinpointEmailResponsePrivate class provides private implementation for PinpointEmailResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PinpointEmailResponsePrivate object with public implementation \a q.
 */
PinpointEmailResponsePrivate::PinpointEmailResponsePrivate(
    PinpointEmailResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
