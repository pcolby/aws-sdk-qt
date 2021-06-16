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

#include "getmapstyledescriptorresponse.h"
#include "getmapstyledescriptorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapStyleDescriptorResponse
 * \brief The GetMapStyleDescriptorResponse class provides an interace for LocationService GetMapStyleDescriptor responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapStyleDescriptor
 */

/*!
 * Constructs a GetMapStyleDescriptorResponse object for \a reply to \a request, with parent \a parent.
 */
GetMapStyleDescriptorResponse::GetMapStyleDescriptorResponse(
        const GetMapStyleDescriptorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetMapStyleDescriptorResponsePrivate(this), parent)
{
    setRequest(new GetMapStyleDescriptorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMapStyleDescriptorRequest * GetMapStyleDescriptorResponse::request() const
{
    Q_D(const GetMapStyleDescriptorResponse);
    return static_cast<const GetMapStyleDescriptorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService GetMapStyleDescriptor \a response.
 */
void GetMapStyleDescriptorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMapStyleDescriptorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetMapStyleDescriptorResponsePrivate
 * \brief The GetMapStyleDescriptorResponsePrivate class provides private implementation for GetMapStyleDescriptorResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapStyleDescriptorResponsePrivate object with public implementation \a q.
 */
GetMapStyleDescriptorResponsePrivate::GetMapStyleDescriptorResponsePrivate(
    GetMapStyleDescriptorResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetMapStyleDescriptor response element from \a xml.
 */
void GetMapStyleDescriptorResponsePrivate::parseGetMapStyleDescriptorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMapStyleDescriptorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
