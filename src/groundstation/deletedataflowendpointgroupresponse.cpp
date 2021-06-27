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

#include "deletedataflowendpointgroupresponse.h"
#include "deletedataflowendpointgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteDataflowEndpointGroupResponse
 * \brief The DeleteDataflowEndpointGroupResponse class provides an interace for GroundStation DeleteDataflowEndpointGroup responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteDataflowEndpointGroup
 */

/*!
 * Constructs a DeleteDataflowEndpointGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataflowEndpointGroupResponse::DeleteDataflowEndpointGroupResponse(
        const DeleteDataflowEndpointGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new DeleteDataflowEndpointGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDataflowEndpointGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataflowEndpointGroupRequest * DeleteDataflowEndpointGroupResponse::request() const
{
    return static_cast<const DeleteDataflowEndpointGroupRequest *>(GroundStationResponse::request());
}

/*!
 * \reimp
 * Parses a successful GroundStation DeleteDataflowEndpointGroup \a response.
 */
void DeleteDataflowEndpointGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataflowEndpointGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::DeleteDataflowEndpointGroupResponsePrivate
 * \brief The DeleteDataflowEndpointGroupResponsePrivate class provides private implementation for DeleteDataflowEndpointGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteDataflowEndpointGroupResponsePrivate object with public implementation \a q.
 */
DeleteDataflowEndpointGroupResponsePrivate::DeleteDataflowEndpointGroupResponsePrivate(
    DeleteDataflowEndpointGroupResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation DeleteDataflowEndpointGroup response element from \a xml.
 */
void DeleteDataflowEndpointGroupResponsePrivate::parseDeleteDataflowEndpointGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataflowEndpointGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
