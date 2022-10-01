/*
    Copyright 2013-2021 Paul Colby

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

#include "voiceidresponse.h"
#include "voiceidresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::VoiceIdResponse
 * \brief The VoiceIdResponse class provides an interface for VoiceId responses.
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a VoiceIdResponse object with parent \a parent.
 */
VoiceIdResponse::VoiceIdResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new VoiceIdResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a VoiceIdResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from VoiceIdResponsePrivate.
 */
VoiceIdResponse::VoiceIdResponse(VoiceIdResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void VoiceIdResponse::parseFailure(QIODevice &response)
{
    //Q_D(VoiceIdResponse);
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
 * \class QtAws::VoiceId::VoiceIdResponsePrivate
 * \brief The VoiceIdResponsePrivate class provides private implementation for VoiceIdResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a VoiceIdResponsePrivate object with public implementation \a q.
 */
VoiceIdResponsePrivate::VoiceIdResponsePrivate(
    VoiceIdResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace VoiceId
} // namespace QtAws
