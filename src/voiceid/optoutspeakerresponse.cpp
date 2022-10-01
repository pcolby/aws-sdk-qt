// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
