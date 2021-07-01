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

#include "getmapglyphsresponse.h"
#include "getmapglyphsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapGlyphsResponse
 * \brief The GetMapGlyphsResponse class provides an interace for LocationService GetMapGlyphs responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapGlyphs
 */

/*!
 * Constructs a GetMapGlyphsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapGlyphsResponse::GetMapGlyphsResponse(
        const GetMapGlyphsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetMapGlyphsResponsePrivate(this), parent)
{
    setRequest(new GetMapGlyphsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapGlyphsRequest * GetMapGlyphsResponse::request() const
{
    Q_D(const GetMapGlyphsResponse);
    return static_cast<const GetMapGlyphsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService GetMapGlyphs \a response.
 */
void GetMapGlyphsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapGlyphsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetMapGlyphsResponsePrivate
 * \brief The GetMapGlyphsResponsePrivate class provides private implementation for GetMapGlyphsResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapGlyphsResponsePrivate object with public implementation \a q.
 */
GetMapGlyphsResponsePrivate::GetMapGlyphsResponsePrivate(
    GetMapGlyphsResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetMapGlyphs response element from \a xml.
 */
void GetMapGlyphsResponsePrivate::parseGetMapGlyphsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapGlyphsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
