// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(IoTAnalyticsResponse);
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
