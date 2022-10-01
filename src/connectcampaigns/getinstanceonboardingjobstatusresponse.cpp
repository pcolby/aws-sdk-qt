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

#include "getinstanceonboardingjobstatusresponse.h"
#include "getinstanceonboardingjobstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetInstanceOnboardingJobStatusResponse
 * \brief The GetInstanceOnboardingJobStatusResponse class provides an interace for ConnectCampaigns GetInstanceOnboardingJobStatus responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getInstanceOnboardingJobStatus
 */

/*!
 * Constructs a GetInstanceOnboardingJobStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetInstanceOnboardingJobStatusResponse::GetInstanceOnboardingJobStatusResponse(
        const GetInstanceOnboardingJobStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new GetInstanceOnboardingJobStatusResponsePrivate(this), parent)
{
    setRequest(new GetInstanceOnboardingJobStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInstanceOnboardingJobStatusRequest * GetInstanceOnboardingJobStatusResponse::request() const
{
    Q_D(const GetInstanceOnboardingJobStatusResponse);
    return static_cast<const GetInstanceOnboardingJobStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns GetInstanceOnboardingJobStatus \a response.
 */
void GetInstanceOnboardingJobStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInstanceOnboardingJobStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::GetInstanceOnboardingJobStatusResponsePrivate
 * \brief The GetInstanceOnboardingJobStatusResponsePrivate class provides private implementation for GetInstanceOnboardingJobStatusResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetInstanceOnboardingJobStatusResponsePrivate object with public implementation \a q.
 */
GetInstanceOnboardingJobStatusResponsePrivate::GetInstanceOnboardingJobStatusResponsePrivate(
    GetInstanceOnboardingJobStatusResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns GetInstanceOnboardingJobStatus response element from \a xml.
 */
void GetInstanceOnboardingJobStatusResponsePrivate::parseGetInstanceOnboardingJobStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceOnboardingJobStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
