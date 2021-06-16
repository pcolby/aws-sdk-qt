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

#include "describegeofencecollectionresponse.h"
#include "describegeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeGeofenceCollectionResponse
 * \brief The DescribeGeofenceCollectionResponse class provides an interace for LocationService DescribeGeofenceCollection responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeGeofenceCollection
 */

/*!
 * Constructs a DescribeGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGeofenceCollectionResponse::DescribeGeofenceCollectionResponse(
        const DescribeGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DescribeGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new DescribeGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGeofenceCollectionRequest * DescribeGeofenceCollectionResponse::request() const
{
    Q_D(const DescribeGeofenceCollectionResponse);
    return static_cast<const DescribeGeofenceCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService DescribeGeofenceCollection \a response.
 */
void DescribeGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DescribeGeofenceCollectionResponsePrivate
 * \brief The DescribeGeofenceCollectionResponsePrivate class provides private implementation for DescribeGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
DescribeGeofenceCollectionResponsePrivate::DescribeGeofenceCollectionResponsePrivate(
    DescribeGeofenceCollectionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DescribeGeofenceCollection response element from \a xml.
 */
void DescribeGeofenceCollectionResponsePrivate::parseDescribeGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
