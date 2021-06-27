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

#include "iotdeviceadvisorresponse.h"
#include "iotdeviceadvisorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::IoTDeviceAdvisorResponse
 * \brief The IoTDeviceAdvisorResponse class provides an interface for IoTDeviceAdvisor responses.
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a IoTDeviceAdvisorResponse object with parent \a parent.
 */
IoTDeviceAdvisorResponse::IoTDeviceAdvisorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new IoTDeviceAdvisorResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a IoTDeviceAdvisorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTDeviceAdvisorResponsePrivate.
 */
IoTDeviceAdvisorResponse::IoTDeviceAdvisorResponse(IoTDeviceAdvisorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void IoTDeviceAdvisorResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTDeviceAdvisorResponse);
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
 * \class QtAws::IoTDeviceAdvisor::IoTDeviceAdvisorResponsePrivate
 * \brief The IoTDeviceAdvisorResponsePrivate class provides private implementation for IoTDeviceAdvisorResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a IoTDeviceAdvisorResponsePrivate object with public implementation \a q.
 */
IoTDeviceAdvisorResponsePrivate::IoTDeviceAdvisorResponsePrivate(
    IoTDeviceAdvisorResponse * const q) : q_ptr(q)
{

}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
