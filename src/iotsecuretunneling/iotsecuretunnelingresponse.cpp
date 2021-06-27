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

#include "iotsecuretunnelingresponse.h"
#include "iotsecuretunnelingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingResponse
 * \brief The IoTSecureTunnelingResponse class provides an interface for IoTSecureTunneling responses.
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingResponse object with parent \a parent.
 */
IoTSecureTunnelingResponse::IoTSecureTunnelingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new IoTSecureTunnelingResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a IoTSecureTunnelingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTSecureTunnelingResponsePrivate.
 */
IoTSecureTunnelingResponse::IoTSecureTunnelingResponse(IoTSecureTunnelingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void IoTSecureTunnelingResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTSecureTunnelingResponse);
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
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingResponsePrivate
 * \brief The IoTSecureTunnelingResponsePrivate class provides private implementation for IoTSecureTunnelingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingResponsePrivate object with public implementation \a q.
 */
IoTSecureTunnelingResponsePrivate::IoTSecureTunnelingResponsePrivate(
    IoTSecureTunnelingResponse * const q) : q_ptr(q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
