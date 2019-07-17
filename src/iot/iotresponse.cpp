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

#include "iotresponse.h"
#include "iotresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::IoTResponse
 * \brief The IoTResponse class provides an interface for IoT responses.
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a IoTResponse object with parent \a parent.
 */
IoTResponse::IoTResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTResponsePrivate.
 */
IoTResponse::IoTResponse(IoTResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTResponse);
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
 * \class QtAws::IoT::IoTResponsePrivate
 * \brief The IoTResponsePrivate class provides private implementation for IoTResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a IoTResponsePrivate object with public implementation \a q.
 */
IoTResponsePrivate::IoTResponsePrivate(
    IoTResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoT
} // namespace QtAws
