// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignstateresponse.h"
#include "getcampaignstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateResponse
 * \brief The GetCampaignStateResponse class provides an interace for ConnectCampaigns GetCampaignState responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getCampaignState
 */

/*!
 * Constructs a GetCampaignStateResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignStateResponse::GetCampaignStateResponse(
        const GetCampaignStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new GetCampaignStateResponsePrivate(this), parent)
{
    setRequest(new GetCampaignStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignStateRequest * GetCampaignStateResponse::request() const
{
    Q_D(const GetCampaignStateResponse);
    return static_cast<const GetCampaignStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns GetCampaignState \a response.
 */
void GetCampaignStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateResponsePrivate
 * \brief The GetCampaignStateResponsePrivate class provides private implementation for GetCampaignStateResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetCampaignStateResponsePrivate object with public implementation \a q.
 */
GetCampaignStateResponsePrivate::GetCampaignStateResponsePrivate(
    GetCampaignStateResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns GetCampaignState response element from \a xml.
 */
void GetCampaignStateResponsePrivate::parseGetCampaignStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
