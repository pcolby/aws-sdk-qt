// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignstatebatchresponse.h"
#include "getcampaignstatebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateBatchResponse
 * \brief The GetCampaignStateBatchResponse class provides an interace for ConnectCampaigns GetCampaignStateBatch responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getCampaignStateBatch
 */

/*!
 * Constructs a GetCampaignStateBatchResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignStateBatchResponse::GetCampaignStateBatchResponse(
        const GetCampaignStateBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new GetCampaignStateBatchResponsePrivate(this), parent)
{
    setRequest(new GetCampaignStateBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignStateBatchRequest * GetCampaignStateBatchResponse::request() const
{
    Q_D(const GetCampaignStateBatchResponse);
    return static_cast<const GetCampaignStateBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns GetCampaignStateBatch \a response.
 */
void GetCampaignStateBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignStateBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateBatchResponsePrivate
 * \brief The GetCampaignStateBatchResponsePrivate class provides private implementation for GetCampaignStateBatchResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetCampaignStateBatchResponsePrivate object with public implementation \a q.
 */
GetCampaignStateBatchResponsePrivate::GetCampaignStateBatchResponsePrivate(
    GetCampaignStateBatchResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns GetCampaignStateBatch response element from \a xml.
 */
void GetCampaignStateBatchResponsePrivate::parseGetCampaignStateBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignStateBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
