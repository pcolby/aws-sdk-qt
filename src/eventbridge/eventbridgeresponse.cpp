// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "eventbridgeresponse.h"
#include "eventbridgeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::EventBridgeResponse
 * \brief The EventBridgeResponse class provides an interface for EventBridge responses.
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a EventBridgeResponse object with parent \a parent.
 */
EventBridgeResponse::EventBridgeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EventBridgeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EventBridgeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EventBridgeResponsePrivate.
 */
EventBridgeResponse::EventBridgeResponse(EventBridgeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EventBridgeResponse::parseFailure(QIODevice &response)
{
    //Q_D(EventBridgeResponse);
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
 * \class QtAws::EventBridge::EventBridgeResponsePrivate
 * \brief The EventBridgeResponsePrivate class provides private implementation for EventBridgeResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a EventBridgeResponsePrivate object with public implementation \a q.
 */
EventBridgeResponsePrivate::EventBridgeResponsePrivate(
    EventBridgeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EventBridge
} // namespace QtAws
