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

#include "getsatelliteresponse.h"
#include "getsatelliteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetSatelliteResponse
 * \brief The GetSatelliteResponse class provides an interace for GroundStation GetSatellite responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getSatellite
 */

/*!
 * Constructs a GetSatelliteResponse object for \a reply to \a request, with parent \a parent.
 */
GetSatelliteResponse::GetSatelliteResponse(
        const GetSatelliteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new GetSatelliteResponsePrivate(this), parent)
{
    setRequest(new GetSatelliteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSatelliteRequest * GetSatelliteResponse::request() const
{
    Q_D(const GetSatelliteResponse);
    return static_cast<const GetSatelliteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation GetSatellite \a response.
 */
void GetSatelliteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSatelliteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::GetSatelliteResponsePrivate
 * \brief The GetSatelliteResponsePrivate class provides private implementation for GetSatelliteResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetSatelliteResponsePrivate object with public implementation \a q.
 */
GetSatelliteResponsePrivate::GetSatelliteResponsePrivate(
    GetSatelliteResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation GetSatellite response element from \a xml.
 */
void GetSatelliteResponsePrivate::parseGetSatelliteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSatelliteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
