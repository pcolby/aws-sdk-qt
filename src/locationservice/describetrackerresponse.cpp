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

#include "describetrackerresponse.h"
#include "describetrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeTrackerResponse
 * \brief The DescribeTrackerResponse class provides an interace for LocationService DescribeTracker responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeTracker
 */

/*!
 * Constructs a DescribeTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrackerResponse::DescribeTrackerResponse(
        const DescribeTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DescribeTrackerResponsePrivate(this), parent)
{
    setRequest(new DescribeTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrackerRequest * DescribeTrackerResponse::request() const
{
    Q_D(const DescribeTrackerResponse);
    return static_cast<const DescribeTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService DescribeTracker \a response.
 */
void DescribeTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DescribeTrackerResponsePrivate
 * \brief The DescribeTrackerResponsePrivate class provides private implementation for DescribeTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeTrackerResponsePrivate object with public implementation \a q.
 */
DescribeTrackerResponsePrivate::DescribeTrackerResponsePrivate(
    DescribeTrackerResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DescribeTracker response element from \a xml.
 */
void DescribeTrackerResponsePrivate::parseDescribeTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
