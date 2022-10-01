// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
