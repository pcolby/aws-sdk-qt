/*
    Copyright 2013-2020 Paul Colby

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

#include "getdataflowendpointgroupresponse.h"
#include "getdataflowendpointgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetDataflowEndpointGroupResponse
 * \brief The GetDataflowEndpointGroupResponse class provides an interace for GroundStation GetDataflowEndpointGroup responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getDataflowEndpointGroup
 */

/*!
 * Constructs a GetDataflowEndpointGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataflowEndpointGroupResponse::GetDataflowEndpointGroupResponse(
        const GetDataflowEndpointGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new GetDataflowEndpointGroupResponsePrivate(this), parent)
{
    setRequest(new GetDataflowEndpointGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataflowEndpointGroupRequest * GetDataflowEndpointGroupResponse::request() const
{
    Q_D(const GetDataflowEndpointGroupResponse);
    return static_cast<const GetDataflowEndpointGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation GetDataflowEndpointGroup \a response.
 */
void GetDataflowEndpointGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataflowEndpointGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::GetDataflowEndpointGroupResponsePrivate
 * \brief The GetDataflowEndpointGroupResponsePrivate class provides private implementation for GetDataflowEndpointGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetDataflowEndpointGroupResponsePrivate object with public implementation \a q.
 */
GetDataflowEndpointGroupResponsePrivate::GetDataflowEndpointGroupResponsePrivate(
    GetDataflowEndpointGroupResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation GetDataflowEndpointGroup response element from \a xml.
 */
void GetDataflowEndpointGroupResponsePrivate::parseGetDataflowEndpointGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataflowEndpointGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
