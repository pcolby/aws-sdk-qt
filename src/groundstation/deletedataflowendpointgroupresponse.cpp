// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DeleteDataflowEndpointGroupResponse);
    return static_cast<const DeleteDataflowEndpointGroupRequest *>(d->request);
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
