/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pinpointsmsvoiceresponse.h"
#include "pinpointsmsvoiceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::PinpointSMSVoiceResponse
 * \brief The PinpointSMSVoiceResponse class provides an interface for PinpointSMSVoice responses.
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a PinpointSMSVoiceResponse object with parent \a parent.
 */
PinpointSMSVoiceResponse::PinpointSMSVoiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PinpointSMSVoiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PinpointSMSVoiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointSMSVoiceResponsePrivate.
 */
PinpointSMSVoiceResponse::PinpointSMSVoiceResponse(PinpointSMSVoiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PinpointSMSVoiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(PinpointSMSVoiceResponse);
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
 * \class QtAws::PinpointSMSVoice::PinpointSMSVoiceResponsePrivate
 * \brief The PinpointSMSVoiceResponsePrivate class provides private implementation for PinpointSMSVoiceResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a PinpointSMSVoiceResponsePrivate object with public implementation \a q.
 */
PinpointSMSVoiceResponsePrivate::PinpointSMSVoiceResponsePrivate(
    PinpointSMSVoiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PinpointSMSVoice
} // namespace QtAws
