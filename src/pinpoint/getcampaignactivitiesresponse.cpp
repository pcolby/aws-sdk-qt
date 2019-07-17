/*
    Copyright 2013-2019 Paul Colby

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

#include "getcampaignactivitiesresponse.h"
#include "getcampaignactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesResponse
 * \brief The GetCampaignActivitiesResponse class provides an interace for Pinpoint GetCampaignActivities responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignActivities
 */

/*!
 * Constructs a GetCampaignActivitiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignActivitiesResponse::GetCampaignActivitiesResponse(
        const GetCampaignActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignActivitiesResponsePrivate(this), parent)
{
    setRequest(new GetCampaignActivitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignActivitiesRequest * GetCampaignActivitiesResponse::request() const
{
    Q_D(const GetCampaignActivitiesResponse);
    return static_cast<const GetCampaignActivitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaignActivities \a response.
 */
void GetCampaignActivitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignActivitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesResponsePrivate
 * \brief The GetCampaignActivitiesResponsePrivate class provides private implementation for GetCampaignActivitiesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignActivitiesResponsePrivate object with public implementation \a q.
 */
GetCampaignActivitiesResponsePrivate::GetCampaignActivitiesResponsePrivate(
    GetCampaignActivitiesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaignActivities response element from \a xml.
 */
void GetCampaignActivitiesResponsePrivate::parseGetCampaignActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignActivitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
