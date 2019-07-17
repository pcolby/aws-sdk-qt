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

#include "listgroundstationsresponse.h"
#include "listgroundstationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListGroundStationsResponse
 * \brief The ListGroundStationsResponse class provides an interace for GroundStation ListGroundStations responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listGroundStations
 */

/*!
 * Constructs a ListGroundStationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroundStationsResponse::ListGroundStationsResponse(
        const ListGroundStationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListGroundStationsResponsePrivate(this), parent)
{
    setRequest(new ListGroundStationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroundStationsRequest * ListGroundStationsResponse::request() const
{
    Q_D(const ListGroundStationsResponse);
    return static_cast<const ListGroundStationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListGroundStations \a response.
 */
void ListGroundStationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroundStationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListGroundStationsResponsePrivate
 * \brief The ListGroundStationsResponsePrivate class provides private implementation for ListGroundStationsResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListGroundStationsResponsePrivate object with public implementation \a q.
 */
ListGroundStationsResponsePrivate::ListGroundStationsResponsePrivate(
    ListGroundStationsResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListGroundStations response element from \a xml.
 */
void ListGroundStationsResponsePrivate::parseListGroundStationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroundStationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
