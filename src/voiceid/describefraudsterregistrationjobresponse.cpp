// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefraudsterregistrationjobresponse.h"
#include "describefraudsterregistrationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRegistrationJobResponse
 * \brief The DescribeFraudsterRegistrationJobResponse class provides an interace for VoiceId DescribeFraudsterRegistrationJob responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeFraudsterRegistrationJob
 */

/*!
 * Constructs a DescribeFraudsterRegistrationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFraudsterRegistrationJobResponse::DescribeFraudsterRegistrationJobResponse(
        const DescribeFraudsterRegistrationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DescribeFraudsterRegistrationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeFraudsterRegistrationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFraudsterRegistrationJobRequest * DescribeFraudsterRegistrationJobResponse::request() const
{
    Q_D(const DescribeFraudsterRegistrationJobResponse);
    return static_cast<const DescribeFraudsterRegistrationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DescribeFraudsterRegistrationJob \a response.
 */
void DescribeFraudsterRegistrationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFraudsterRegistrationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRegistrationJobResponsePrivate
 * \brief The DescribeFraudsterRegistrationJobResponsePrivate class provides private implementation for DescribeFraudsterRegistrationJobResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeFraudsterRegistrationJobResponsePrivate object with public implementation \a q.
 */
DescribeFraudsterRegistrationJobResponsePrivate::DescribeFraudsterRegistrationJobResponsePrivate(
    DescribeFraudsterRegistrationJobResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DescribeFraudsterRegistrationJob response element from \a xml.
 */
void DescribeFraudsterRegistrationJobResponsePrivate::parseDescribeFraudsterRegistrationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFraudsterRegistrationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
