// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iot1clickdevicesresponse.h"
#include "iot1clickdevicesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesResponse
 * \brief The IoT1ClickDevicesResponse class provides an interface for IoT1ClickDevices responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a IoT1ClickDevicesResponse object with parent \a parent.
 */
IoT1ClickDevicesResponse::IoT1ClickDevicesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoT1ClickDevicesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoT1ClickDevicesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickDevicesResponsePrivate.
 */
IoT1ClickDevicesResponse::IoT1ClickDevicesResponse(IoT1ClickDevicesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoT1ClickDevicesResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoT1ClickDevicesResponse);
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
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesResponsePrivate
 * \brief The IoT1ClickDevicesResponsePrivate class provides private implementation for IoT1ClickDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a IoT1ClickDevicesResponsePrivate object with public implementation \a q.
 */
IoT1ClickDevicesResponsePrivate::IoT1ClickDevicesResponsePrivate(
    IoT1ClickDevicesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
