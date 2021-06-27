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

#include "iotfleethubresponse.h"
#include "iotfleethubresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::IoTFleetHubResponse
 * \brief The IoTFleetHubResponse class provides an interface for IoTFleetHub responses.
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a IoTFleetHubResponse object with parent \a parent.
 */
IoTFleetHubResponse::IoTFleetHubResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new IoTFleetHubResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a IoTFleetHubResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTFleetHubResponsePrivate.
 */
IoTFleetHubResponse::IoTFleetHubResponse(IoTFleetHubResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void IoTFleetHubResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTFleetHubResponse);
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
 * \class QtAws::IoTFleetHub::IoTFleetHubResponsePrivate
 * \brief The IoTFleetHubResponsePrivate class provides private implementation for IoTFleetHubResponse.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a IoTFleetHubResponsePrivate object with public implementation \a q.
 */
IoTFleetHubResponsePrivate::IoTFleetHubResponsePrivate(
    IoTFleetHubResponse * const q) : q_ptr(q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
