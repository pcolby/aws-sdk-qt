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

#include "getmaptileresponse.h"
#include "getmaptileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapTileResponse
 * \brief The GetMapTileResponse class provides an interace for LocationService GetMapTile responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapTile
 */

/*!
 * Constructs a GetMapTileResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapTileResponse::GetMapTileResponse(
        const GetMapTileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetMapTileResponsePrivate(this), parent)
{
    setRequest(new GetMapTileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapTileRequest * GetMapTileResponse::request() const
{
    return static_cast<const GetMapTileRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService GetMapTile \a response.
 */
void GetMapTileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapTileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetMapTileResponsePrivate
 * \brief The GetMapTileResponsePrivate class provides private implementation for GetMapTileResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapTileResponsePrivate object with public implementation \a q.
 */
GetMapTileResponsePrivate::GetMapTileResponsePrivate(
    GetMapTileResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetMapTile response element from \a xml.
 */
void GetMapTileResponsePrivate::parseGetMapTileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapTileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
