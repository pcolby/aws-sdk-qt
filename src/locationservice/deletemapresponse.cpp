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

#include "deletemapresponse.h"
#include "deletemapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteMapResponse
 * \brief The DeleteMapResponse class provides an interace for LocationService DeleteMap responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteMap
 */

/*!
 * Constructs a DeleteMapResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMapResponse::DeleteMapResponse(
        const DeleteMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DeleteMapResponsePrivate(this), parent)
{
    setRequest(new DeleteMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMapRequest * DeleteMapResponse::request() const
{
    Q_D(const DeleteMapResponse);
    return static_cast<const DeleteMapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService DeleteMap \a response.
 */
void DeleteMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DeleteMapResponsePrivate
 * \brief The DeleteMapResponsePrivate class provides private implementation for DeleteMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteMapResponsePrivate object with public implementation \a q.
 */
DeleteMapResponsePrivate::DeleteMapResponsePrivate(
    DeleteMapResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DeleteMap response element from \a xml.
 */
void DeleteMapResponsePrivate::parseDeleteMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
