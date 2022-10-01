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
