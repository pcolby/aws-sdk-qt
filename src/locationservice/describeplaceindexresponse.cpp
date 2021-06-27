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

#include "describeplaceindexresponse.h"
#include "describeplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribePlaceIndexResponse
 * \brief The DescribePlaceIndexResponse class provides an interace for LocationService DescribePlaceIndex responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describePlaceIndex
 */

/*!
 * Constructs a DescribePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePlaceIndexResponse::DescribePlaceIndexResponse(
        const DescribePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DescribePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new DescribePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePlaceIndexRequest * DescribePlaceIndexResponse::request() const
{
    return static_cast<const DescribePlaceIndexRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService DescribePlaceIndex \a response.
 */
void DescribePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DescribePlaceIndexResponsePrivate
 * \brief The DescribePlaceIndexResponsePrivate class provides private implementation for DescribePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribePlaceIndexResponsePrivate object with public implementation \a q.
 */
DescribePlaceIndexResponsePrivate::DescribePlaceIndexResponsePrivate(
    DescribePlaceIndexResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DescribePlaceIndex response element from \a xml.
 */
void DescribePlaceIndexResponsePrivate::parseDescribePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
