// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    : QtAws::Core::AwsAbstractResponse(new IoTFleetHubResponsePrivate(this), parent)
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
    : QtAws::Core::AwsAbstractResponse(d, parent)
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
    IoTFleetHubResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
