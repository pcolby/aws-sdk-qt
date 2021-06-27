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

#include "getmapspritesresponse.h"
#include "getmapspritesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapSpritesResponse
 * \brief The GetMapSpritesResponse class provides an interace for LocationService GetMapSprites responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapSprites
 */

/*!
 * Constructs a GetMapSpritesResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapSpritesResponse::GetMapSpritesResponse(
        const GetMapSpritesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetMapSpritesResponsePrivate(this), parent)
{
    setRequest(new GetMapSpritesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapSpritesRequest * GetMapSpritesResponse::request() const
{
    return static_cast<const GetMapSpritesRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService GetMapSprites \a response.
 */
void GetMapSpritesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapSpritesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetMapSpritesResponsePrivate
 * \brief The GetMapSpritesResponsePrivate class provides private implementation for GetMapSpritesResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapSpritesResponsePrivate object with public implementation \a q.
 */
GetMapSpritesResponsePrivate::GetMapSpritesResponsePrivate(
    GetMapSpritesResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetMapSprites response element from \a xml.
 */
void GetMapSpritesResponsePrivate::parseGetMapSpritesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapSpritesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
