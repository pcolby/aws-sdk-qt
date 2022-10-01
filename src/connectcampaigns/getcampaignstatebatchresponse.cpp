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
