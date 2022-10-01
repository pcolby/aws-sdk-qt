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
