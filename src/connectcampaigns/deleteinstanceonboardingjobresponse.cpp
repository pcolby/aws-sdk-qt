// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinstanceonboardingjobresponse.h"
#include "deleteinstanceonboardingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteInstanceOnboardingJobResponse
 * \brief The DeleteInstanceOnboardingJobResponse class provides an interace for ConnectCampaigns DeleteInstanceOnboardingJob responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteInstanceOnboardingJob
 */

/*!
 * Constructs a DeleteInstanceOnboardingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInstanceOnboardingJobResponse::DeleteInstanceOnboardingJobResponse(
        const DeleteInstanceOnboardingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new DeleteInstanceOnboardingJobResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceOnboardingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInstanceOnboardingJobRequest * DeleteInstanceOnboardingJobResponse::request() const
{
    Q_D(const DeleteInstanceOnboardingJobResponse);
    return static_cast<const DeleteInstanceOnboardingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns DeleteInstanceOnboardingJob \a response.
 */
void DeleteInstanceOnboardingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInstanceOnboardingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteInstanceOnboardingJobResponsePrivate
 * \brief The DeleteInstanceOnboardingJobResponsePrivate class provides private implementation for DeleteInstanceOnboardingJobResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteInstanceOnboardingJobResponsePrivate object with public implementation \a q.
 */
DeleteInstanceOnboardingJobResponsePrivate::DeleteInstanceOnboardingJobResponsePrivate(
    DeleteInstanceOnboardingJobResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns DeleteInstanceOnboardingJob response element from \a xml.
 */
void DeleteInstanceOnboardingJobResponsePrivate::parseDeleteInstanceOnboardingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceOnboardingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
