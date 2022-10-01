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

#include "describespeakerenrollmentjobresponse.h"
#include "describespeakerenrollmentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeSpeakerEnrollmentJobResponse
 * \brief The DescribeSpeakerEnrollmentJobResponse class provides an interace for VoiceId DescribeSpeakerEnrollmentJob responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeSpeakerEnrollmentJob
 */

/*!
 * Constructs a DescribeSpeakerEnrollmentJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSpeakerEnrollmentJobResponse::DescribeSpeakerEnrollmentJobResponse(
        const DescribeSpeakerEnrollmentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DescribeSpeakerEnrollmentJobResponsePrivate(this), parent)
{
    setRequest(new DescribeSpeakerEnrollmentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSpeakerEnrollmentJobRequest * DescribeSpeakerEnrollmentJobResponse::request() const
{
    Q_D(const DescribeSpeakerEnrollmentJobResponse);
    return static_cast<const DescribeSpeakerEnrollmentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DescribeSpeakerEnrollmentJob \a response.
 */
void DescribeSpeakerEnrollmentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSpeakerEnrollmentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DescribeSpeakerEnrollmentJobResponsePrivate
 * \brief The DescribeSpeakerEnrollmentJobResponsePrivate class provides private implementation for DescribeSpeakerEnrollmentJobResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeSpeakerEnrollmentJobResponsePrivate object with public implementation \a q.
 */
DescribeSpeakerEnrollmentJobResponsePrivate::DescribeSpeakerEnrollmentJobResponsePrivate(
    DescribeSpeakerEnrollmentJobResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DescribeSpeakerEnrollmentJob response element from \a xml.
 */
void DescribeSpeakerEnrollmentJobResponsePrivate::parseDescribeSpeakerEnrollmentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpeakerEnrollmentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
