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

#include "describeroutecalculatorresponse.h"
#include "describeroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeRouteCalculatorResponse
 * \brief The DescribeRouteCalculatorResponse class provides an interace for LocationService DescribeRouteCalculator responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeRouteCalculator
 */

/*!
 * Constructs a DescribeRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRouteCalculatorResponse::DescribeRouteCalculatorResponse(
        const DescribeRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DescribeRouteCalculatorResponsePrivate(this), parent)
{
    setRequest(new DescribeRouteCalculatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRouteCalculatorRequest * DescribeRouteCalculatorResponse::request() const
{
    Q_D(const DescribeRouteCalculatorResponse);
    return static_cast<const DescribeRouteCalculatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService DescribeRouteCalculator \a response.
 */
void DescribeRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DescribeRouteCalculatorResponsePrivate
 * \brief The DescribeRouteCalculatorResponsePrivate class provides private implementation for DescribeRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeRouteCalculatorResponsePrivate object with public implementation \a q.
 */
DescribeRouteCalculatorResponsePrivate::DescribeRouteCalculatorResponsePrivate(
    DescribeRouteCalculatorResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DescribeRouteCalculator response element from \a xml.
 */
void DescribeRouteCalculatorResponsePrivate::parseDescribeRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
