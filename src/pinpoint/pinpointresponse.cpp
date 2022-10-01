// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pinpointresponse.h"
#include "pinpointresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PinpointResponse
 * \brief The PinpointResponse class provides an interface for Pinpoint responses.
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PinpointResponse object with parent \a parent.
 */
PinpointResponse::PinpointResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PinpointResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PinpointResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointResponsePrivate.
 */
PinpointResponse::PinpointResponse(PinpointResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PinpointResponse::parseFailure(QIODevice &response)
{
    //Q_D(PinpointResponse);
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
 * \class QtAws::Pinpoint::PinpointResponsePrivate
 * \brief The PinpointResponsePrivate class provides private implementation for PinpointResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PinpointResponsePrivate object with public implementation \a q.
 */
PinpointResponsePrivate::PinpointResponsePrivate(
    PinpointResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Pinpoint
} // namespace QtAws
