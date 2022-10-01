// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotsecuretunnelingresponse.h"
#include "iotsecuretunnelingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingResponse
 * \brief The IoTSecureTunnelingResponse class provides an interface for IoTSecureTunneling responses.
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingResponse object with parent \a parent.
 */
IoTSecureTunnelingResponse::IoTSecureTunnelingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTSecureTunnelingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTSecureTunnelingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTSecureTunnelingResponsePrivate.
 */
IoTSecureTunnelingResponse::IoTSecureTunnelingResponse(IoTSecureTunnelingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTSecureTunnelingResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTSecureTunnelingResponse);
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
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingResponsePrivate
 * \brief The IoTSecureTunnelingResponsePrivate class provides private implementation for IoTSecureTunnelingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingResponsePrivate object with public implementation \a q.
 */
IoTSecureTunnelingResponsePrivate::IoTSecureTunnelingResponsePrivate(
    IoTSecureTunnelingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
