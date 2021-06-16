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

#include "getjourneydaterangekpiresponse.h"
#include "getjourneydaterangekpiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyDateRangeKpiResponse
 * \brief The GetJourneyDateRangeKpiResponse class provides an interace for Pinpoint GetJourneyDateRangeKpi responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyDateRangeKpi
 */

/*!
 * Constructs a GetJourneyDateRangeKpiResponse object for \a reply to \a request, with parent \a parent.
 */
GetJourneyDateRangeKpiResponse::GetJourneyDateRangeKpiResponse(
        const GetJourneyDateRangeKpiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetJourneyDateRangeKpiResponsePrivate(this), parent)
{
    setRequest(new GetJourneyDateRangeKpiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJourneyDateRangeKpiRequest * GetJourneyDateRangeKpiResponse::request() const
{
    Q_D(const GetJourneyDateRangeKpiResponse);
    return static_cast<const GetJourneyDateRangeKpiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetJourneyDateRangeKpi \a response.
 */
void GetJourneyDateRangeKpiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJourneyDateRangeKpiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetJourneyDateRangeKpiResponsePrivate
 * \brief The GetJourneyDateRangeKpiResponsePrivate class provides private implementation for GetJourneyDateRangeKpiResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyDateRangeKpiResponsePrivate object with public implementation \a q.
 */
GetJourneyDateRangeKpiResponsePrivate::GetJourneyDateRangeKpiResponsePrivate(
    GetJourneyDateRangeKpiResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetJourneyDateRangeKpi response element from \a xml.
 */
void GetJourneyDateRangeKpiResponsePrivate::parseGetJourneyDateRangeKpiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJourneyDateRangeKpiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
