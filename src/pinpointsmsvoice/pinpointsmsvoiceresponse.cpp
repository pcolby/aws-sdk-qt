// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pinpointsmsvoiceresponse.h"
#include "pinpointsmsvoiceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::PinpointSmsVoiceResponse
 * \brief The PinpointSmsVoiceResponse class provides an interface for PinpointSmsVoice responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a PinpointSmsVoiceResponse object with parent \a parent.
 */
PinpointSmsVoiceResponse::PinpointSmsVoiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PinpointSmsVoiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PinpointSmsVoiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointSmsVoiceResponsePrivate.
 */
PinpointSmsVoiceResponse::PinpointSmsVoiceResponse(PinpointSmsVoiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PinpointSmsVoiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(PinpointSmsVoiceResponse);
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
 * \class QtAws::PinpointSmsVoice::PinpointSmsVoiceResponsePrivate
 * \brief The PinpointSmsVoiceResponsePrivate class provides private implementation for PinpointSmsVoiceResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a PinpointSmsVoiceResponsePrivate object with public implementation \a q.
 */
PinpointSmsVoiceResponsePrivate::PinpointSmsVoiceResponsePrivate(
    PinpointSmsVoiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
