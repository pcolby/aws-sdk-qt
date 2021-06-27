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

#include "createmapresponse.h"
#include "createmapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateMapResponse
 * \brief The CreateMapResponse class provides an interace for LocationService CreateMap responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createMap
 */

/*!
 * Constructs a CreateMapResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMapResponse::CreateMapResponse(
        const CreateMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new CreateMapResponsePrivate(this), parent)
{
    setRequest(new CreateMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMapRequest * CreateMapResponse::request() const
{
    return static_cast<const CreateMapRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService CreateMap \a response.
 */
void CreateMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::CreateMapResponsePrivate
 * \brief The CreateMapResponsePrivate class provides private implementation for CreateMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateMapResponsePrivate object with public implementation \a q.
 */
CreateMapResponsePrivate::CreateMapResponsePrivate(
    CreateMapResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService CreateMap response element from \a xml.
 */
void CreateMapResponsePrivate::parseCreateMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
