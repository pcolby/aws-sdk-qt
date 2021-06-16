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

#include "ioteventsdataresponse.h"
#include "ioteventsdataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::IoTEventsDataResponse
 * \brief The IoTEventsDataResponse class provides an interface for IoTEventsData responses.
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a IoTEventsDataResponse object with parent \a parent.
 */
IoTEventsDataResponse::IoTEventsDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTEventsDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTEventsDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTEventsDataResponsePrivate.
 */
IoTEventsDataResponse::IoTEventsDataResponse(IoTEventsDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTEventsDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTEventsDataResponse);
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
 * \class QtAws::IoTEventsData::IoTEventsDataResponsePrivate
 * \brief The IoTEventsDataResponsePrivate class provides private implementation for IoTEventsDataResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a IoTEventsDataResponsePrivate object with public implementation \a q.
 */
IoTEventsDataResponsePrivate::IoTEventsDataResponsePrivate(
    IoTEventsDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
