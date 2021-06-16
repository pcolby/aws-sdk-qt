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

#include "creategeofencecollectionresponse.h"
#include "creategeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateGeofenceCollectionResponse
 * \brief The CreateGeofenceCollectionResponse class provides an interace for LocationService CreateGeofenceCollection responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createGeofenceCollection
 */

/*!
 * Constructs a CreateGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGeofenceCollectionResponse::CreateGeofenceCollectionResponse(
        const CreateGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new CreateGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new CreateGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGeofenceCollectionRequest * CreateGeofenceCollectionResponse::request() const
{
    Q_D(const CreateGeofenceCollectionResponse);
    return static_cast<const CreateGeofenceCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService CreateGeofenceCollection \a response.
 */
void CreateGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::CreateGeofenceCollectionResponsePrivate
 * \brief The CreateGeofenceCollectionResponsePrivate class provides private implementation for CreateGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
CreateGeofenceCollectionResponsePrivate::CreateGeofenceCollectionResponsePrivate(
    CreateGeofenceCollectionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService CreateGeofenceCollection response element from \a xml.
 */
void CreateGeofenceCollectionResponsePrivate::parseCreateGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
