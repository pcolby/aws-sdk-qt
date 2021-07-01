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

#include "createtrackerresponse.h"
#include "createtrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateTrackerResponse
 * \brief The CreateTrackerResponse class provides an interace for LocationService CreateTracker responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createTracker
 */

/*!
 * Constructs a CreateTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrackerResponse::CreateTrackerResponse(
        const CreateTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new CreateTrackerResponsePrivate(this), parent)
{
    setRequest(new CreateTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrackerRequest * CreateTrackerResponse::request() const
{
    Q_D(const CreateTrackerResponse);
    return static_cast<const CreateTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService CreateTracker \a response.
 */
void CreateTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::CreateTrackerResponsePrivate
 * \brief The CreateTrackerResponsePrivate class provides private implementation for CreateTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateTrackerResponsePrivate object with public implementation \a q.
 */
CreateTrackerResponsePrivate::CreateTrackerResponsePrivate(
    CreateTrackerResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService CreateTracker response element from \a xml.
 */
void CreateTrackerResponsePrivate::parseCreateTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
