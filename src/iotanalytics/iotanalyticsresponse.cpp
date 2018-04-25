/*
    Copyright 2013-2018 Paul Colby

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

#include "iotanalyticsresponse.h"
#include "iotanalyticsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::IoTAnalyticsResponse
 * \brief The IoTAnalyticsResponse class provides an interface for IoTAnalytics responses.
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a IoTAnalyticsResponse object with parent \a parent.
 */
IoTAnalyticsResponse::IoTAnalyticsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTAnalyticsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTAnalyticsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTAnalyticsResponsePrivate.
 */
IoTAnalyticsResponse::IoTAnalyticsResponse(IoTAnalyticsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTAnalyticsResponse::parseFailure(QIODevice &response)
{
    Q_D(IoTAnalyticsResponse);
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
 * \class QtAws::IoTAnalytics::IoTAnalyticsResponsePrivate
 * \brief The IoTAnalyticsResponsePrivate class provides private implementation for IoTAnalyticsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a IoTAnalyticsResponsePrivate object with public implementation \a q.
 */
IoTAnalyticsResponsePrivate::IoTAnalyticsResponsePrivate(
    IoTAnalyticsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTAnalytics
} // namespace QtAws
