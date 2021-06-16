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

#include "getcampaigndaterangekpiresponse.h"
#include "getcampaigndaterangekpiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignDateRangeKpiResponse
 * \brief The GetCampaignDateRangeKpiResponse class provides an interace for Pinpoint GetCampaignDateRangeKpi responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignDateRangeKpi
 */

/*!
 * Constructs a GetCampaignDateRangeKpiResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignDateRangeKpiResponse::GetCampaignDateRangeKpiResponse(
        const GetCampaignDateRangeKpiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignDateRangeKpiResponsePrivate(this), parent)
{
    setRequest(new GetCampaignDateRangeKpiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignDateRangeKpiRequest * GetCampaignDateRangeKpiResponse::request() const
{
    Q_D(const GetCampaignDateRangeKpiResponse);
    return static_cast<const GetCampaignDateRangeKpiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaignDateRangeKpi \a response.
 */
void GetCampaignDateRangeKpiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignDateRangeKpiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignDateRangeKpiResponsePrivate
 * \brief The GetCampaignDateRangeKpiResponsePrivate class provides private implementation for GetCampaignDateRangeKpiResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignDateRangeKpiResponsePrivate object with public implementation \a q.
 */
GetCampaignDateRangeKpiResponsePrivate::GetCampaignDateRangeKpiResponsePrivate(
    GetCampaignDateRangeKpiResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaignDateRangeKpi response element from \a xml.
 */
void GetCampaignDateRangeKpiResponsePrivate::parseGetCampaignDateRangeKpiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignDateRangeKpiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
