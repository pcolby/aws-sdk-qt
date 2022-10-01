// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeroutecalculatorresponse.h"
#include "describeroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeRouteCalculatorResponse
 * \brief The DescribeRouteCalculatorResponse class provides an interace for Location DescribeRouteCalculator responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeRouteCalculator
 */

/*!
 * Constructs a DescribeRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRouteCalculatorResponse::DescribeRouteCalculatorResponse(
        const DescribeRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DescribeRouteCalculatorResponsePrivate(this), parent)
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
 * Parses a successful Location DescribeRouteCalculator \a response.
 */
void DescribeRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DescribeRouteCalculatorResponsePrivate
 * \brief The DescribeRouteCalculatorResponsePrivate class provides private implementation for DescribeRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeRouteCalculatorResponsePrivate object with public implementation \a q.
 */
DescribeRouteCalculatorResponsePrivate::DescribeRouteCalculatorResponsePrivate(
    DescribeRouteCalculatorResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DescribeRouteCalculator response element from \a xml.
 */
void DescribeRouteCalculatorResponsePrivate::parseDescribeRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
