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

#include "deleteplaceindexresponse.h"
#include "deleteplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeletePlaceIndexResponse
 * \brief The DeletePlaceIndexResponse class provides an interace for LocationService DeletePlaceIndex responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deletePlaceIndex
 */

/*!
 * Constructs a DeletePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlaceIndexResponse::DeletePlaceIndexResponse(
        const DeletePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DeletePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new DeletePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlaceIndexRequest * DeletePlaceIndexResponse::request() const
{
    return static_cast<const DeletePlaceIndexRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService DeletePlaceIndex \a response.
 */
void DeletePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DeletePlaceIndexResponsePrivate
 * \brief The DeletePlaceIndexResponsePrivate class provides private implementation for DeletePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeletePlaceIndexResponsePrivate object with public implementation \a q.
 */
DeletePlaceIndexResponsePrivate::DeletePlaceIndexResponsePrivate(
    DeletePlaceIndexResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DeletePlaceIndex response element from \a xml.
 */
void DeletePlaceIndexResponsePrivate::parseDeletePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
