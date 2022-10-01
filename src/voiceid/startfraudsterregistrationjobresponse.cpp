// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfraudsterregistrationjobresponse.h"
#include "startfraudsterregistrationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::StartFraudsterRegistrationJobResponse
 * \brief The StartFraudsterRegistrationJobResponse class provides an interace for VoiceId StartFraudsterRegistrationJob responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::startFraudsterRegistrationJob
 */

/*!
 * Constructs a StartFraudsterRegistrationJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartFraudsterRegistrationJobResponse::StartFraudsterRegistrationJobResponse(
        const StartFraudsterRegistrationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new StartFraudsterRegistrationJobResponsePrivate(this), parent)
{
    setRequest(new StartFraudsterRegistrationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFraudsterRegistrationJobRequest * StartFraudsterRegistrationJobResponse::request() const
{
    Q_D(const StartFraudsterRegistrationJobResponse);
    return static_cast<const StartFraudsterRegistrationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId StartFraudsterRegistrationJob \a response.
 */
void StartFraudsterRegistrationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFraudsterRegistrationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::StartFraudsterRegistrationJobResponsePrivate
 * \brief The StartFraudsterRegistrationJobResponsePrivate class provides private implementation for StartFraudsterRegistrationJobResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a StartFraudsterRegistrationJobResponsePrivate object with public implementation \a q.
 */
StartFraudsterRegistrationJobResponsePrivate::StartFraudsterRegistrationJobResponsePrivate(
    StartFraudsterRegistrationJobResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId StartFraudsterRegistrationJob response element from \a xml.
 */
void StartFraudsterRegistrationJobResponsePrivate::parseStartFraudsterRegistrationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFraudsterRegistrationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
