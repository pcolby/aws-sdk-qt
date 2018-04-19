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

#include "iotjobsdataplaneresponse.h"
#include "iotjobsdataplaneresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneResponse
 * \brief The IoTJobsDataPlaneResponse class provides an interface for IoTJobsDataPlane responses.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a IoTJobsDataPlaneResponse object with parent \a parent.
 */
IoTJobsDataPlaneResponse::IoTJobsDataPlaneResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTJobsDataPlaneResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTJobsDataPlaneResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTJobsDataPlaneResponsePrivate.
 */
IoTJobsDataPlaneResponse::IoTJobsDataPlaneResponse(IoTJobsDataPlaneResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTJobsDataPlaneResponse::parseFailure(QIODevice &response)
{
    Q_D(IoTJobsDataPlaneResponse);
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
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneResponsePrivate
 * \brief The IoTJobsDataPlaneResponsePrivate class provides private implementation for IoTJobsDataPlaneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a IoTJobsDataPlaneResponsePrivate object with public implementation \a q.
 */
IoTJobsDataPlaneResponsePrivate::IoTJobsDataPlaneResponsePrivate(
    IoTJobsDataPlaneResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
