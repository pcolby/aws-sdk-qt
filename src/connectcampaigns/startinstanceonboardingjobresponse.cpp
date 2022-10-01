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

#include "startinstanceonboardingjobresponse.h"
#include "startinstanceonboardingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StartInstanceOnboardingJobResponse
 * \brief The StartInstanceOnboardingJobResponse class provides an interace for ConnectCampaigns StartInstanceOnboardingJob responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::startInstanceOnboardingJob
 */

/*!
 * Constructs a StartInstanceOnboardingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartInstanceOnboardingJobResponse::StartInstanceOnboardingJobResponse(
        const StartInstanceOnboardingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new StartInstanceOnboardingJobResponsePrivate(this), parent)
{
    setRequest(new StartInstanceOnboardingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartInstanceOnboardingJobRequest * StartInstanceOnboardingJobResponse::request() const
{
    Q_D(const StartInstanceOnboardingJobResponse);
    return static_cast<const StartInstanceOnboardingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns StartInstanceOnboardingJob \a response.
 */
void StartInstanceOnboardingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartInstanceOnboardingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::StartInstanceOnboardingJobResponsePrivate
 * \brief The StartInstanceOnboardingJobResponsePrivate class provides private implementation for StartInstanceOnboardingJobResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StartInstanceOnboardingJobResponsePrivate object with public implementation \a q.
 */
StartInstanceOnboardingJobResponsePrivate::StartInstanceOnboardingJobResponsePrivate(
    StartInstanceOnboardingJobResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns StartInstanceOnboardingJob response element from \a xml.
 */
void StartInstanceOnboardingJobResponsePrivate::parseStartInstanceOnboardingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInstanceOnboardingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
