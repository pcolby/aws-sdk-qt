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

#include "describespeakerresponse.h"
#include "describespeakerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeSpeakerResponse
 * \brief The DescribeSpeakerResponse class provides an interace for VoiceId DescribeSpeaker responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeSpeaker
 */

/*!
 * Constructs a DescribeSpeakerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSpeakerResponse::DescribeSpeakerResponse(
        const DescribeSpeakerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DescribeSpeakerResponsePrivate(this), parent)
{
    setRequest(new DescribeSpeakerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSpeakerRequest * DescribeSpeakerResponse::request() const
{
    Q_D(const DescribeSpeakerResponse);
    return static_cast<const DescribeSpeakerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DescribeSpeaker \a response.
 */
void DescribeSpeakerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSpeakerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DescribeSpeakerResponsePrivate
 * \brief The DescribeSpeakerResponsePrivate class provides private implementation for DescribeSpeakerResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeSpeakerResponsePrivate object with public implementation \a q.
 */
DescribeSpeakerResponsePrivate::DescribeSpeakerResponsePrivate(
    DescribeSpeakerResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DescribeSpeaker response element from \a xml.
 */
void DescribeSpeakerResponsePrivate::parseDescribeSpeakerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpeakerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
