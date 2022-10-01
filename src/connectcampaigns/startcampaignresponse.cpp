// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcampaignresponse.h"
#include "startcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StartCampaignResponse
 * \brief The StartCampaignResponse class provides an interace for ConnectCampaigns StartCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::startCampaign
 */

/*!
 * Constructs a StartCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
StartCampaignResponse::StartCampaignResponse(
        const StartCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new StartCampaignResponsePrivate(this), parent)
{
    setRequest(new StartCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCampaignRequest * StartCampaignResponse::request() const
{
    Q_D(const StartCampaignResponse);
    return static_cast<const StartCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns StartCampaign \a response.
 */
void StartCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::StartCampaignResponsePrivate
 * \brief The StartCampaignResponsePrivate class provides private implementation for StartCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StartCampaignResponsePrivate object with public implementation \a q.
 */
StartCampaignResponsePrivate::StartCampaignResponsePrivate(
    StartCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns StartCampaign response element from \a xml.
 */
void StartCampaignResponsePrivate::parseStartCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
