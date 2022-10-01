// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
