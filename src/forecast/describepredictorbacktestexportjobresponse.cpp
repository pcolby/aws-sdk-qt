// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepredictorbacktestexportjobresponse.h"
#include "describepredictorbacktestexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribePredictorBacktestExportJobResponse
 * \brief The DescribePredictorBacktestExportJobResponse class provides an interace for Forecast DescribePredictorBacktestExportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describePredictorBacktestExportJob
 */

/*!
 * Constructs a DescribePredictorBacktestExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePredictorBacktestExportJobResponse::DescribePredictorBacktestExportJobResponse(
        const DescribePredictorBacktestExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribePredictorBacktestExportJobResponsePrivate(this), parent)
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
 * Parses a successful Forecast DescribePredictorBacktestExportJob \a response.
 */
void DescribePredictorBacktestExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePredictorBacktestExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribePredictorBacktestExportJobResponsePrivate
 * \brief The DescribePredictorBacktestExportJobResponsePrivate class provides private implementation for DescribePredictorBacktestExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribePredictorBacktestExportJobResponsePrivate object with public implementation \a q.
 */
DescribePredictorBacktestExportJobResponsePrivate::DescribePredictorBacktestExportJobResponsePrivate(
    DescribePredictorBacktestExportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribePredictorBacktestExportJob response element from \a xml.
 */
void DescribePredictorBacktestExportJobResponsePrivate::parseDescribePredictorBacktestExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePredictorBacktestExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
