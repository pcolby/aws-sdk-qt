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

#include "listgeofencecollectionsresponse.h"
#include "listgeofencecollectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListGeofenceCollectionsResponse
 * \brief The ListGeofenceCollectionsResponse class provides an interace for LocationService ListGeofenceCollections responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listGeofenceCollections
 */

/*!
 * Constructs a ListGeofenceCollectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeofenceCollectionsResponse::ListGeofenceCollectionsResponse(
        const ListGeofenceCollectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListGeofenceCollectionsResponsePrivate(this), parent)
{
    setRequest(new ListGeofenceCollectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeofenceCollectionsRequest * ListGeofenceCollectionsResponse::request() const
{
    return static_cast<const ListGeofenceCollectionsRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService ListGeofenceCollections \a response.
 */
void ListGeofenceCollectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeofenceCollectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListGeofenceCollectionsResponsePrivate
 * \brief The ListGeofenceCollectionsResponsePrivate class provides private implementation for ListGeofenceCollectionsResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListGeofenceCollectionsResponsePrivate object with public implementation \a q.
 */
ListGeofenceCollectionsResponsePrivate::ListGeofenceCollectionsResponsePrivate(
    ListGeofenceCollectionsResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListGeofenceCollections response element from \a xml.
 */
void ListGeofenceCollectionsResponsePrivate::parseListGeofenceCollectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeofenceCollectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
