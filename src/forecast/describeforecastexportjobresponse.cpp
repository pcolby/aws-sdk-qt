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

#include "describeforecastexportjobresponse.h"
#include "describeforecastexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeForecastExportJobResponse
 * \brief The DescribeForecastExportJobResponse class provides an interace for Forecast DescribeForecastExportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeForecastExportJob
 */

/*!
 * Constructs a DescribeForecastExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeForecastExportJobResponse::DescribeForecastExportJobResponse(
        const DescribeForecastExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeForecastExportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeForecastExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeForecastExportJobRequest * DescribeForecastExportJobResponse::request() const
{
    Q_D(const DescribeForecastExportJobResponse);
    return static_cast<const DescribeForecastExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeForecastExportJob \a response.
 */
void DescribeForecastExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeForecastExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeForecastExportJobResponsePrivate
 * \brief The DescribeForecastExportJobResponsePrivate class provides private implementation for DescribeForecastExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeForecastExportJobResponsePrivate object with public implementation \a q.
 */
DescribeForecastExportJobResponsePrivate::DescribeForecastExportJobResponsePrivate(
    DescribeForecastExportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeForecastExportJob response element from \a xml.
 */
void DescribeForecastExportJobResponsePrivate::parseDescribeForecastExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeForecastExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
