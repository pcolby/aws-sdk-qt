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

#include "iot1clickdevicesresponse.h"
#include "iot1clickdevicesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesResponse
 * \brief The IoT1ClickDevicesResponse class provides an interface for IoT1ClickDevices responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a IoT1ClickDevicesResponse object with parent \a parent.
 */
IoT1ClickDevicesResponse::IoT1ClickDevicesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoT1ClickDevicesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoT1ClickDevicesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickDevicesResponsePrivate.
 */
IoT1ClickDevicesResponse::IoT1ClickDevicesResponse(IoT1ClickDevicesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoT1ClickDevicesResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoT1ClickDevicesResponse);
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
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesResponsePrivate
 * \brief The IoT1ClickDevicesResponsePrivate class provides private implementation for IoT1ClickDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a IoT1ClickDevicesResponsePrivate object with public implementation \a q.
 */
IoT1ClickDevicesResponsePrivate::IoT1ClickDevicesResponsePrivate(
    IoT1ClickDevicesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
