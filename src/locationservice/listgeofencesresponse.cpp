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

#include "listgeofencesresponse.h"
#include "listgeofencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListGeofencesResponse
 * \brief The ListGeofencesResponse class provides an interace for LocationService ListGeofences responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listGeofences
 */

/*!
 * Constructs a ListGeofencesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeofencesResponse::ListGeofencesResponse(
        const ListGeofencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListGeofencesResponsePrivate(this), parent)
{
    setRequest(new ListGeofencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeofencesRequest * ListGeofencesResponse::request() const
{
    Q_D(const ListGeofencesResponse);
    return static_cast<const ListGeofencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService ListGeofences \a response.
 */
void ListGeofencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeofencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListGeofencesResponsePrivate
 * \brief The ListGeofencesResponsePrivate class provides private implementation for ListGeofencesResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListGeofencesResponsePrivate object with public implementation \a q.
 */
ListGeofencesResponsePrivate::ListGeofencesResponsePrivate(
    ListGeofencesResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListGeofences response element from \a xml.
 */
void ListGeofencesResponsePrivate::parseListGeofencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeofencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
