// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
