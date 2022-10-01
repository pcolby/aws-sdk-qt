// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListDataflowEndpointGroupsResponse);
    return static_cast<const ListDataflowEndpointGroupsRequest *>(d->request);
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
