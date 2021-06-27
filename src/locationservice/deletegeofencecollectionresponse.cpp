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

#include "deletegeofencecollectionresponse.h"
#include "deletegeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteGeofenceCollectionResponse
 * \brief The DeleteGeofenceCollectionResponse class provides an interace for LocationService DeleteGeofenceCollection responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteGeofenceCollection
 */

/*!
 * Constructs a DeleteGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGeofenceCollectionResponse::DeleteGeofenceCollectionResponse(
        const DeleteGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DeleteGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new DeleteGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGeofenceCollectionRequest * DeleteGeofenceCollectionResponse::request() const
{
    return static_cast<const DeleteGeofenceCollectionRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService DeleteGeofenceCollection \a response.
 */
void DeleteGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DeleteGeofenceCollectionResponsePrivate
 * \brief The DeleteGeofenceCollectionResponsePrivate class provides private implementation for DeleteGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
DeleteGeofenceCollectionResponsePrivate::DeleteGeofenceCollectionResponsePrivate(
    DeleteGeofenceCollectionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DeleteGeofenceCollection response element from \a xml.
 */
void DeleteGeofenceCollectionResponsePrivate::parseDeleteGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
