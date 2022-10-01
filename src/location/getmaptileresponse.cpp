// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmaptileresponse.h"
#include "getmaptileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapTileResponse
 * \brief The GetMapTileResponse class provides an interace for Location GetMapTile responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapTile
 */

/*!
 * Constructs a GetMapTileResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapTileResponse::GetMapTileResponse(
        const GetMapTileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetMapTileResponsePrivate(this), parent)
{
    setRequest(new GetMapTileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapTileRequest * GetMapTileResponse::request() const
{
    Q_D(const GetMapTileResponse);
    return static_cast<const GetMapTileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location GetMapTile \a response.
 */
void GetMapTileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapTileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetMapTileResponsePrivate
 * \brief The GetMapTileResponsePrivate class provides private implementation for GetMapTileResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapTileResponsePrivate object with public implementation \a q.
 */
GetMapTileResponsePrivate::GetMapTileResponsePrivate(
    GetMapTileResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetMapTile response element from \a xml.
 */
void GetMapTileResponsePrivate::parseGetMapTileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapTileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
