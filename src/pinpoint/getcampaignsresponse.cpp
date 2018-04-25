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

#include "getcampaignsresponse.h"
#include "getcampaignsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignsResponse
 * \brief The GetCampaignsResponse class provides an interace for Pinpoint GetCampaigns responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getCampaigns
 */

/*!
 * Constructs a GetCampaignsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignsResponse::GetCampaignsResponse(
        const GetCampaignsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignsRequest * GetCampaignsResponse::request() const
{
    Q_D(const GetCampaignsResponse);
    return static_cast<const GetCampaignsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaigns \a response.
 */
void GetCampaignsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCampaignsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignsResponsePrivate
 * \brief The GetCampaignsResponsePrivate class provides private implementation for GetCampaignsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignsResponsePrivate object with public implementation \a q.
 */
GetCampaignsResponsePrivate::GetCampaignsResponsePrivate(
    GetCampaignsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaigns response element from \a xml.
 */
void GetCampaignsResponsePrivate::parseGetCampaignsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
