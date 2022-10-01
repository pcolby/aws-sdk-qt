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

#include "describewhatifforecastresponse.h"
#include "describewhatifforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastResponse
 * \brief The DescribeWhatIfForecastResponse class provides an interace for Forecast DescribeWhatIfForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWhatIfForecastResponse::DescribeWhatIfForecastResponse(
        const DescribeWhatIfForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeWhatIfForecastResponsePrivate(this), parent)
{
    setRequest(new DescribeWhatIfForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWhatIfForecastRequest * DescribeWhatIfForecastResponse::request() const
{
    Q_D(const DescribeWhatIfForecastResponse);
    return static_cast<const DescribeWhatIfForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeWhatIfForecast \a response.
 */
void DescribeWhatIfForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWhatIfForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastResponsePrivate
 * \brief The DescribeWhatIfForecastResponsePrivate class provides private implementation for DescribeWhatIfForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastResponsePrivate object with public implementation \a q.
 */
DescribeWhatIfForecastResponsePrivate::DescribeWhatIfForecastResponsePrivate(
    DescribeWhatIfForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeWhatIfForecast response element from \a xml.
 */
void DescribeWhatIfForecastResponsePrivate::parseDescribeWhatIfForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWhatIfForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
