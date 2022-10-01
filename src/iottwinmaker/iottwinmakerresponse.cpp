// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iottwinmakerresponse.h"
#include "iottwinmakerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::IoTTwinMakerResponse
 * \brief The IoTTwinMakerResponse class provides an interface for IoTTwinMaker responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a IoTTwinMakerResponse object with parent \a parent.
 */
IoTTwinMakerResponse::IoTTwinMakerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTTwinMakerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTTwinMakerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTTwinMakerResponsePrivate.
 */
IoTTwinMakerResponse::IoTTwinMakerResponse(IoTTwinMakerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTTwinMakerResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTTwinMakerResponse);
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
 * \class QtAws::IoTTwinMaker::IoTTwinMakerResponsePrivate
 * \brief The IoTTwinMakerResponsePrivate class provides private implementation for IoTTwinMakerResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a IoTTwinMakerResponsePrivate object with public implementation \a q.
 */
IoTTwinMakerResponsePrivate::IoTTwinMakerResponsePrivate(
    IoTTwinMakerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
