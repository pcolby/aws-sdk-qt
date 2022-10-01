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

#include "describewhatifforecastexportresponse.h"
#include "describewhatifforecastexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportResponse
 * \brief The DescribeWhatIfForecastExportResponse class provides an interace for Forecast DescribeWhatIfForecastExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfForecastExport
 */

/*!
 * Constructs a DescribeWhatIfForecastExportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWhatIfForecastExportResponse::DescribeWhatIfForecastExportResponse(
        const DescribeWhatIfForecastExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeWhatIfForecastExportResponsePrivate(this), parent)
{
    setRequest(new DescribeWhatIfForecastExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWhatIfForecastExportRequest * DescribeWhatIfForecastExportResponse::request() const
{
    Q_D(const DescribeWhatIfForecastExportResponse);
    return static_cast<const DescribeWhatIfForecastExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeWhatIfForecastExport \a response.
 */
void DescribeWhatIfForecastExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWhatIfForecastExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportResponsePrivate
 * \brief The DescribeWhatIfForecastExportResponsePrivate class provides private implementation for DescribeWhatIfForecastExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastExportResponsePrivate object with public implementation \a q.
 */
DescribeWhatIfForecastExportResponsePrivate::DescribeWhatIfForecastExportResponsePrivate(
    DescribeWhatIfForecastExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeWhatIfForecastExport response element from \a xml.
 */
void DescribeWhatIfForecastExportResponsePrivate::parseDescribeWhatIfForecastExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWhatIfForecastExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
