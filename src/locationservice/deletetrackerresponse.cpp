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

#include "deletetrackerresponse.h"
#include "deletetrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteTrackerResponse
 * \brief The DeleteTrackerResponse class provides an interace for LocationService DeleteTracker responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteTracker
 */

/*!
 * Constructs a DeleteTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrackerResponse::DeleteTrackerResponse(
        const DeleteTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DeleteTrackerResponsePrivate(this), parent)
{
    setRequest(new DeleteTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrackerRequest * DeleteTrackerResponse::request() const
{
    Q_D(const DeleteTrackerResponse);
    return static_cast<const DeleteTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService DeleteTracker \a response.
 */
void DeleteTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DeleteTrackerResponsePrivate
 * \brief The DeleteTrackerResponsePrivate class provides private implementation for DeleteTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteTrackerResponsePrivate object with public implementation \a q.
 */
DeleteTrackerResponsePrivate::DeleteTrackerResponsePrivate(
    DeleteTrackerResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DeleteTracker response element from \a xml.
 */
void DeleteTrackerResponsePrivate::parseDeleteTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
