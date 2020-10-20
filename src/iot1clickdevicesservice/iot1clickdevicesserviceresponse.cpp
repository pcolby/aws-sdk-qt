/*
    Copyright 2013-2020 Paul Colby

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

#include "iot1clickdevicesserviceresponse.h"
#include "iot1clickdevicesserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::IoT1ClickDevicesServiceResponse
 * \brief The IoT1ClickDevicesServiceResponse class provides an interface for IoT1ClickDevicesService responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a IoT1ClickDevicesServiceResponse object with parent \a parent.
 */
IoT1ClickDevicesServiceResponse::IoT1ClickDevicesServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoT1ClickDevicesServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoT1ClickDevicesServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickDevicesServiceResponsePrivate.
 */
IoT1ClickDevicesServiceResponse::IoT1ClickDevicesServiceResponse(IoT1ClickDevicesServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoT1ClickDevicesServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoT1ClickDevicesServiceResponse);
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
 * \class QtAws::IoT1ClickDevicesService::IoT1ClickDevicesServiceResponsePrivate
 * \brief The IoT1ClickDevicesServiceResponsePrivate class provides private implementation for IoT1ClickDevicesServiceResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a IoT1ClickDevicesServiceResponsePrivate object with public implementation \a q.
 */
IoT1ClickDevicesServiceResponsePrivate::IoT1ClickDevicesServiceResponsePrivate(
    IoT1ClickDevicesServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
