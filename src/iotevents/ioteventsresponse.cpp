// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ioteventsresponse.h"
#include "ioteventsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::IoTEventsResponse
 * \brief The IoTEventsResponse class provides an interface for IoTEvents responses.
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a IoTEventsResponse object with parent \a parent.
 */
IoTEventsResponse::IoTEventsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTEventsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTEventsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTEventsResponsePrivate.
 */
IoTEventsResponse::IoTEventsResponse(IoTEventsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTEventsResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTEventsResponse);
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
 * \class QtAws::IoTEvents::IoTEventsResponsePrivate
 * \brief The IoTEventsResponsePrivate class provides private implementation for IoTEventsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a IoTEventsResponsePrivate object with public implementation \a q.
 */
IoTEventsResponsePrivate::IoTEventsResponsePrivate(
    IoTEventsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTEvents
} // namespace QtAws
