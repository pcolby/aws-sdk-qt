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
