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

#include "describeexplainabilityresponse.h"
#include "describeexplainabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeExplainabilityResponse
 * \brief The DescribeExplainabilityResponse class provides an interace for Forecast DescribeExplainability responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeExplainability
 */

/*!
 * Constructs a DescribeExplainabilityResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExplainabilityResponse::DescribeExplainabilityResponse(
        const DescribeExplainabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeExplainabilityResponsePrivate(this), parent)
{
    setRequest(new DescribeExplainabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExplainabilityRequest * DescribeExplainabilityResponse::request() const
{
    Q_D(const DescribeExplainabilityResponse);
    return static_cast<const DescribeExplainabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeExplainability \a response.
 */
void DescribeExplainabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExplainabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeExplainabilityResponsePrivate
 * \brief The DescribeExplainabilityResponsePrivate class provides private implementation for DescribeExplainabilityResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeExplainabilityResponsePrivate object with public implementation \a q.
 */
DescribeExplainabilityResponsePrivate::DescribeExplainabilityResponsePrivate(
    DescribeExplainabilityResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeExplainability response element from \a xml.
 */
void DescribeExplainabilityResponsePrivate::parseDescribeExplainabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExplainabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
