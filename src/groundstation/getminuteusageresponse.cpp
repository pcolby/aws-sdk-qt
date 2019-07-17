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

#include "getminuteusageresponse.h"
#include "getminuteusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetMinuteUsageResponse
 * \brief The GetMinuteUsageResponse class provides an interace for GroundStation GetMinuteUsage responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getMinuteUsage
 */

/*!
 * Constructs a GetMinuteUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetMinuteUsageResponse::GetMinuteUsageResponse(
        const GetMinuteUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new GetMinuteUsageResponsePrivate(this), parent)
{
    setRequest(new GetMinuteUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMinuteUsageRequest * GetMinuteUsageResponse::request() const
{
    Q_D(const GetMinuteUsageResponse);
    return static_cast<const GetMinuteUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation GetMinuteUsage \a response.
 */
void GetMinuteUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMinuteUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::GetMinuteUsageResponsePrivate
 * \brief The GetMinuteUsageResponsePrivate class provides private implementation for GetMinuteUsageResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetMinuteUsageResponsePrivate object with public implementation \a q.
 */
GetMinuteUsageResponsePrivate::GetMinuteUsageResponsePrivate(
    GetMinuteUsageResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation GetMinuteUsage response element from \a xml.
 */
void GetMinuteUsageResponsePrivate::parseGetMinuteUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMinuteUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
