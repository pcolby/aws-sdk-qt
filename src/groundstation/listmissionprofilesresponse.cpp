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

#include "listmissionprofilesresponse.h"
#include "listmissionprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListMissionProfilesResponse
 * \brief The ListMissionProfilesResponse class provides an interace for GroundStation ListMissionProfiles responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listMissionProfiles
 */

/*!
 * Constructs a ListMissionProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMissionProfilesResponse::ListMissionProfilesResponse(
        const ListMissionProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListMissionProfilesResponsePrivate(this), parent)
{
    setRequest(new ListMissionProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMissionProfilesRequest * ListMissionProfilesResponse::request() const
{
    Q_D(const ListMissionProfilesResponse);
    return static_cast<const ListMissionProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListMissionProfiles \a response.
 */
void ListMissionProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMissionProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListMissionProfilesResponsePrivate
 * \brief The ListMissionProfilesResponsePrivate class provides private implementation for ListMissionProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListMissionProfilesResponsePrivate object with public implementation \a q.
 */
ListMissionProfilesResponsePrivate::ListMissionProfilesResponsePrivate(
    ListMissionProfilesResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListMissionProfiles response element from \a xml.
 */
void ListMissionProfilesResponsePrivate::parseListMissionProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMissionProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
