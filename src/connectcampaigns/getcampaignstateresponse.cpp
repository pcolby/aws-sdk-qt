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
