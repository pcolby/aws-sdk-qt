// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmapglyphsresponse.h"
#include "getmapglyphsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapGlyphsResponse
 * \brief The GetMapGlyphsResponse class provides an interace for Location GetMapGlyphs responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapGlyphs
 */

/*!
 * Constructs a GetMapGlyphsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapGlyphsResponse::GetMapGlyphsResponse(
        const GetMapGlyphsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetMapGlyphsResponsePrivate(this), parent)
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
 * Parses a successful Location GetMapGlyphs \a response.
 */
void GetMapGlyphsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapGlyphsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetMapGlyphsResponsePrivate
 * \brief The GetMapGlyphsResponsePrivate class provides private implementation for GetMapGlyphsResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapGlyphsResponsePrivate object with public implementation \a q.
 */
GetMapGlyphsResponsePrivate::GetMapGlyphsResponsePrivate(
    GetMapGlyphsResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetMapGlyphs response element from \a xml.
 */
void GetMapGlyphsResponsePrivate::parseGetMapGlyphsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapGlyphsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
