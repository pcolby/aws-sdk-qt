// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
