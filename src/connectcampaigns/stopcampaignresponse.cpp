// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcampaignresponse.h"
#include "stopcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StopCampaignResponse
 * \brief The StopCampaignResponse class provides an interace for ConnectCampaigns StopCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::stopCampaign
 */

/*!
 * Constructs a StopCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
StopCampaignResponse::StopCampaignResponse(
        const StopCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new StopCampaignResponsePrivate(this), parent)
{
    setRequest(new StopCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCampaignRequest * StopCampaignResponse::request() const
{
    Q_D(const StopCampaignResponse);
    return static_cast<const StopCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns StopCampaign \a response.
 */
void StopCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::StopCampaignResponsePrivate
 * \brief The StopCampaignResponsePrivate class provides private implementation for StopCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StopCampaignResponsePrivate object with public implementation \a q.
 */
StopCampaignResponsePrivate::StopCampaignResponsePrivate(
    StopCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns StopCampaign response element from \a xml.
 */
void StopCampaignResponsePrivate::parseStopCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
