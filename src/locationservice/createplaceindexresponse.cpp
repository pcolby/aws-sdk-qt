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

#include "createplaceindexresponse.h"
#include "createplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreatePlaceIndexResponse
 * \brief The CreatePlaceIndexResponse class provides an interace for LocationService CreatePlaceIndex responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createPlaceIndex
 */

/*!
 * Constructs a CreatePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePlaceIndexResponse::CreatePlaceIndexResponse(
        const CreatePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new CreatePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new CreatePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePlaceIndexRequest * CreatePlaceIndexResponse::request() const
{
    return static_cast<const CreatePlaceIndexRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService CreatePlaceIndex \a response.
 */
void CreatePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::CreatePlaceIndexResponsePrivate
 * \brief The CreatePlaceIndexResponsePrivate class provides private implementation for CreatePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreatePlaceIndexResponsePrivate object with public implementation \a q.
 */
CreatePlaceIndexResponsePrivate::CreatePlaceIndexResponsePrivate(
    CreatePlaceIndexResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService CreatePlaceIndex response element from \a xml.
 */
void CreatePlaceIndexResponsePrivate::parseCreatePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
