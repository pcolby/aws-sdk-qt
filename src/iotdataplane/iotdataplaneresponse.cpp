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

#include "iotdataplaneresponse.h"
#include "iotdataplaneresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::IoTDataPlaneResponse
 * \brief The IoTDataPlaneResponse class provides an interface for IoTDataPlane responses.
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a IoTDataPlaneResponse object with parent \a parent.
 */
IoTDataPlaneResponse::IoTDataPlaneResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTDataPlaneResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTDataPlaneResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTDataPlaneResponsePrivate.
 */
IoTDataPlaneResponse::IoTDataPlaneResponse(IoTDataPlaneResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTDataPlaneResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTDataPlaneResponse);
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
 * \class QtAws::IoTDataPlane::IoTDataPlaneResponsePrivate
 * \brief The IoTDataPlaneResponsePrivate class provides private implementation for IoTDataPlaneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a IoTDataPlaneResponsePrivate object with public implementation \a q.
 */
IoTDataPlaneResponsePrivate::IoTDataPlaneResponsePrivate(
    IoTDataPlaneResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
