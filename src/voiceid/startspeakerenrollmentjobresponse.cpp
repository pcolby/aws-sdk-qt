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

#include "startspeakerenrollmentjobresponse.h"
#include "startspeakerenrollmentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::StartSpeakerEnrollmentJobResponse
 * \brief The StartSpeakerEnrollmentJobResponse class provides an interace for VoiceId StartSpeakerEnrollmentJob responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::startSpeakerEnrollmentJob
 */

/*!
 * Constructs a StartSpeakerEnrollmentJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartSpeakerEnrollmentJobResponse::StartSpeakerEnrollmentJobResponse(
        const StartSpeakerEnrollmentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new StartSpeakerEnrollmentJobResponsePrivate(this), parent)
{
    setRequest(new StartSpeakerEnrollmentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSpeakerEnrollmentJobRequest * StartSpeakerEnrollmentJobResponse::request() const
{
    Q_D(const StartSpeakerEnrollmentJobResponse);
    return static_cast<const StartSpeakerEnrollmentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId StartSpeakerEnrollmentJob \a response.
 */
void StartSpeakerEnrollmentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSpeakerEnrollmentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::StartSpeakerEnrollmentJobResponsePrivate
 * \brief The StartSpeakerEnrollmentJobResponsePrivate class provides private implementation for StartSpeakerEnrollmentJobResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a StartSpeakerEnrollmentJobResponsePrivate object with public implementation \a q.
 */
StartSpeakerEnrollmentJobResponsePrivate::StartSpeakerEnrollmentJobResponsePrivate(
    StartSpeakerEnrollmentJobResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId StartSpeakerEnrollmentJob response element from \a xml.
 */
void StartSpeakerEnrollmentJobResponsePrivate::parseStartSpeakerEnrollmentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSpeakerEnrollmentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
