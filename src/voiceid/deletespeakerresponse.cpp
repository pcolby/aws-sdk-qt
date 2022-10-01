// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletespeakerresponse.h"
#include "deletespeakerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DeleteSpeakerResponse
 * \brief The DeleteSpeakerResponse class provides an interace for VoiceId DeleteSpeaker responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::deleteSpeaker
 */

/*!
 * Constructs a DeleteSpeakerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSpeakerResponse::DeleteSpeakerResponse(
        const DeleteSpeakerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DeleteSpeakerResponsePrivate(this), parent)
{
    setRequest(new DeleteSpeakerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSpeakerRequest * DeleteSpeakerResponse::request() const
{
    Q_D(const DeleteSpeakerResponse);
    return static_cast<const DeleteSpeakerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DeleteSpeaker \a response.
 */
void DeleteSpeakerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSpeakerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DeleteSpeakerResponsePrivate
 * \brief The DeleteSpeakerResponsePrivate class provides private implementation for DeleteSpeakerResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DeleteSpeakerResponsePrivate object with public implementation \a q.
 */
DeleteSpeakerResponsePrivate::DeleteSpeakerResponsePrivate(
    DeleteSpeakerResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DeleteSpeaker response element from \a xml.
 */
void DeleteSpeakerResponsePrivate::parseDeleteSpeakerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSpeakerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
