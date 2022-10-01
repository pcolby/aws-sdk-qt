// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pausecampaignresponse.h"
#include "pausecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::PauseCampaignResponse
 * \brief The PauseCampaignResponse class provides an interace for ConnectCampaigns PauseCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::pauseCampaign
 */

/*!
 * Constructs a PauseCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
PauseCampaignResponse::PauseCampaignResponse(
        const PauseCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new PauseCampaignResponsePrivate(this), parent)
{
    setRequest(new PauseCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PauseCampaignRequest * PauseCampaignResponse::request() const
{
    Q_D(const PauseCampaignResponse);
    return static_cast<const PauseCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns PauseCampaign \a response.
 */
void PauseCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PauseCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::PauseCampaignResponsePrivate
 * \brief The PauseCampaignResponsePrivate class provides private implementation for PauseCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a PauseCampaignResponsePrivate object with public implementation \a q.
 */
PauseCampaignResponsePrivate::PauseCampaignResponsePrivate(
    PauseCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns PauseCampaign response element from \a xml.
 */
void PauseCampaignResponsePrivate::parsePauseCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PauseCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
