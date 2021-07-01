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

#include "describepredictorbacktestexportjobresponse.h"
#include "describepredictorbacktestexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DescribePredictorBacktestExportJobResponse
 * \brief The DescribePredictorBacktestExportJobResponse class provides an interace for ForecastService DescribePredictorBacktestExportJob responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::describePredictorBacktestExportJob
 */

/*!
 * Constructs a DescribePredictorBacktestExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePredictorBacktestExportJobResponse::DescribePredictorBacktestExportJobResponse(
        const DescribePredictorBacktestExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new DescribePredictorBacktestExportJobResponsePrivate(this), parent)
{
    setRequest(new DescribePredictorBacktestExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePredictorBacktestExportJobRequest * DescribePredictorBacktestExportJobResponse::request() const
{
    Q_D(const DescribePredictorBacktestExportJobResponse);
    return static_cast<const DescribePredictorBacktestExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService DescribePredictorBacktestExportJob \a response.
 */
void DescribePredictorBacktestExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePredictorBacktestExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::DescribePredictorBacktestExportJobResponsePrivate
 * \brief The DescribePredictorBacktestExportJobResponsePrivate class provides private implementation for DescribePredictorBacktestExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DescribePredictorBacktestExportJobResponsePrivate object with public implementation \a q.
 */
DescribePredictorBacktestExportJobResponsePrivate::DescribePredictorBacktestExportJobResponsePrivate(
    DescribePredictorBacktestExportJobResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService DescribePredictorBacktestExportJob response element from \a xml.
 */
void DescribePredictorBacktestExportJobResponsePrivate::parseDescribePredictorBacktestExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePredictorBacktestExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
