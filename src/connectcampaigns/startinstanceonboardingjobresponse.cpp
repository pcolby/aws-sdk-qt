// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
