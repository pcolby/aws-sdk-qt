// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsatellitesresponse.h"
#include "listsatellitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListSatellitesResponse
 * \brief The ListSatellitesResponse class provides an interace for GroundStation ListSatellites responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listSatellites
 */

/*!
 * Constructs a ListSatellitesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSatellitesResponse::ListSatellitesResponse(
        const ListSatellitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListSatellitesResponsePrivate(this), parent)
{
    setRequest(new ListSatellitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSatellitesRequest * ListSatellitesResponse::request() const
{
    Q_D(const ListSatellitesResponse);
    return static_cast<const ListSatellitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListSatellites \a response.
 */
void ListSatellitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSatellitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListSatellitesResponsePrivate
 * \brief The ListSatellitesResponsePrivate class provides private implementation for ListSatellitesResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListSatellitesResponsePrivate object with public implementation \a q.
 */
ListSatellitesResponsePrivate::ListSatellitesResponsePrivate(
    ListSatellitesResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListSatellites response element from \a xml.
 */
void ListSatellitesResponsePrivate::parseListSatellitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSatellitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
