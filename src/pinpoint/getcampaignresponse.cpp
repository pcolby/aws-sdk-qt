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

#include "getcampaignresponse.h"
#include "getcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignResponse
 * \brief The GetCampaignResponse class provides an interace for Pinpoint GetCampaign responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaign
 */

/*!
 * Constructs a GetCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignResponse::GetCampaignResponse(
        const GetCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignResponsePrivate(this), parent)
{
    setRequest(new GetCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignRequest * GetCampaignResponse::request() const
{
    Q_D(const GetCampaignResponse);
    return static_cast<const GetCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaign \a response.
 */
void GetCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignResponsePrivate
 * \brief The GetCampaignResponsePrivate class provides private implementation for GetCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignResponsePrivate object with public implementation \a q.
 */
GetCampaignResponsePrivate::GetCampaignResponsePrivate(
    GetCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaign response element from \a xml.
 */
void GetCampaignResponsePrivate::parseGetCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
