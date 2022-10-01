// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotwirelessresponse.h"
#include "iotwirelessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::IoTWirelessResponse
 * \brief The IoTWirelessResponse class provides an interface for IoTWireless responses.
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a IoTWirelessResponse object with parent \a parent.
 */
IoTWirelessResponse::IoTWirelessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTWirelessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTWirelessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTWirelessResponsePrivate.
 */
IoTWirelessResponse::IoTWirelessResponse(IoTWirelessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTWirelessResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTWirelessResponse);
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
 * \class QtAws::IoTWireless::IoTWirelessResponsePrivate
 * \brief The IoTWirelessResponsePrivate class provides private implementation for IoTWirelessResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a IoTWirelessResponsePrivate object with public implementation \a q.
 */
IoTWirelessResponsePrivate::IoTWirelessResponsePrivate(
    IoTWirelessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTWireless
} // namespace QtAws
