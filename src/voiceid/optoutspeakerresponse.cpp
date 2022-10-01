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

#include "optoutspeakerresponse.h"
#include "optoutspeakerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::OptOutSpeakerResponse
 * \brief The OptOutSpeakerResponse class provides an interace for VoiceId OptOutSpeaker responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::optOutSpeaker
 */

/*!
 * Constructs a OptOutSpeakerResponse object for \a reply to \a request, with parent \a parent.
 */
OptOutSpeakerResponse::OptOutSpeakerResponse(
        const OptOutSpeakerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new OptOutSpeakerResponsePrivate(this), parent)
{
    setRequest(new OptOutSpeakerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const OptOutSpeakerRequest * OptOutSpeakerResponse::request() const
{
    Q_D(const OptOutSpeakerResponse);
    return static_cast<const OptOutSpeakerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId OptOutSpeaker \a response.
 */
void OptOutSpeakerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(OptOutSpeakerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::OptOutSpeakerResponsePrivate
 * \brief The OptOutSpeakerResponsePrivate class provides private implementation for OptOutSpeakerResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a OptOutSpeakerResponsePrivate object with public implementation \a q.
 */
OptOutSpeakerResponsePrivate::OptOutSpeakerResponsePrivate(
    OptOutSpeakerResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId OptOutSpeaker response element from \a xml.
 */
void OptOutSpeakerResponsePrivate::parseOptOutSpeakerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("OptOutSpeakerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
