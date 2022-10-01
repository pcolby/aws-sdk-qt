// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgeofenceresponse.h"
#include "getgeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetGeofenceResponse
 * \brief The GetGeofenceResponse class provides an interace for Location GetGeofence responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getGeofence
 */

/*!
 * Constructs a GetGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeofenceResponse::GetGeofenceResponse(
        const GetGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetGeofenceResponsePrivate(this), parent)
{
    setRequest(new GetGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeofenceRequest * GetGeofenceResponse::request() const
{
    Q_D(const GetGeofenceResponse);
    return static_cast<const GetGeofenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location GetGeofence \a response.
 */
void GetGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetGeofenceResponsePrivate
 * \brief The GetGeofenceResponsePrivate class provides private implementation for GetGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetGeofenceResponsePrivate object with public implementation \a q.
 */
GetGeofenceResponsePrivate::GetGeofenceResponsePrivate(
    GetGeofenceResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetGeofence response element from \a xml.
 */
void GetGeofenceResponsePrivate::parseGetGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
