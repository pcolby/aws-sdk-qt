// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmapspritesresponse.h"
#include "getmapspritesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapSpritesResponse
 * \brief The GetMapSpritesResponse class provides an interace for Location GetMapSprites responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapSprites
 */

/*!
 * Constructs a GetMapSpritesResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapSpritesResponse::GetMapSpritesResponse(
        const GetMapSpritesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetMapSpritesResponsePrivate(this), parent)
{
    setRequest(new GetMapSpritesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapSpritesRequest * GetMapSpritesResponse::request() const
{
    Q_D(const GetMapSpritesResponse);
    return static_cast<const GetMapSpritesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location GetMapSprites \a response.
 */
void GetMapSpritesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapSpritesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetMapSpritesResponsePrivate
 * \brief The GetMapSpritesResponsePrivate class provides private implementation for GetMapSpritesResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapSpritesResponsePrivate object with public implementation \a q.
 */
GetMapSpritesResponsePrivate::GetMapSpritesResponsePrivate(
    GetMapSpritesResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetMapSprites response element from \a xml.
 */
void GetMapSpritesResponsePrivate::parseGetMapSpritesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapSpritesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
