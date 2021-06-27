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

#include "listdataflowendpointgroupsresponse.h"
#include "listdataflowendpointgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListDataflowEndpointGroupsResponse
 * \brief The ListDataflowEndpointGroupsResponse class provides an interace for GroundStation ListDataflowEndpointGroups responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listDataflowEndpointGroups
 */

/*!
 * Constructs a ListDataflowEndpointGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataflowEndpointGroupsResponse::ListDataflowEndpointGroupsResponse(
        const ListDataflowEndpointGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListDataflowEndpointGroupsResponsePrivate(this), parent)
{
    setRequest(new ListDataflowEndpointGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataflowEndpointGroupsRequest * ListDataflowEndpointGroupsResponse::request() const
{
    return static_cast<const ListDataflowEndpointGroupsRequest *>(GroundStationResponse::request());
}

/*!
 * \reimp
 * Parses a successful GroundStation ListDataflowEndpointGroups \a response.
 */
void ListDataflowEndpointGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataflowEndpointGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListDataflowEndpointGroupsResponsePrivate
 * \brief The ListDataflowEndpointGroupsResponsePrivate class provides private implementation for ListDataflowEndpointGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListDataflowEndpointGroupsResponsePrivate object with public implementation \a q.
 */
ListDataflowEndpointGroupsResponsePrivate::ListDataflowEndpointGroupsResponsePrivate(
    ListDataflowEndpointGroupsResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListDataflowEndpointGroups response element from \a xml.
 */
void ListDataflowEndpointGroupsResponsePrivate::parseListDataflowEndpointGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataflowEndpointGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
