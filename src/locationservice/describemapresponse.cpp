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

#include "describemapresponse.h"
#include "describemapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeMapResponse
 * \brief The DescribeMapResponse class provides an interace for LocationService DescribeMap responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeMap
 */

/*!
 * Constructs a DescribeMapResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMapResponse::DescribeMapResponse(
        const DescribeMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DescribeMapResponsePrivate(this), parent)
{
    setRequest(new DescribeMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMapRequest * DescribeMapResponse::request() const
{
    return static_cast<const DescribeMapRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService DescribeMap \a response.
 */
void DescribeMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DescribeMapResponsePrivate
 * \brief The DescribeMapResponsePrivate class provides private implementation for DescribeMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeMapResponsePrivate object with public implementation \a q.
 */
DescribeMapResponsePrivate::DescribeMapResponsePrivate(
    DescribeMapResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DescribeMap response element from \a xml.
 */
void DescribeMapResponsePrivate::parseDescribeMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
