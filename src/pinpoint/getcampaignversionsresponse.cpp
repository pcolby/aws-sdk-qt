/*
    Copyright 2013-2018 Paul Colby

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

#include "getcampaignversionsresponse.h"
#include "getcampaignversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsResponse
 * \brief The GetCampaignVersionsResponse class provides an interace for Pinpoint GetCampaignVersions responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getCampaignVersions
 */

/*!
 * Constructs a GetCampaignVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignVersionsResponse::GetCampaignVersionsResponse(
        const GetCampaignVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignVersionsRequest * GetCampaignVersionsResponse::request() const
{
    Q_D(const GetCampaignVersionsResponse);
    return static_cast<const GetCampaignVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaignVersions \a response.
 */
void GetCampaignVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsResponsePrivate
 * \brief The GetCampaignVersionsResponsePrivate class provides private implementation for GetCampaignVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignVersionsResponsePrivate object with public implementation \a q.
 */
GetCampaignVersionsResponsePrivate::GetCampaignVersionsResponsePrivate(
    GetCampaignVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaignVersions response element from \a xml.
 */
void GetCampaignVersionsResponsePrivate::parseGetCampaignVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignVersionsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
