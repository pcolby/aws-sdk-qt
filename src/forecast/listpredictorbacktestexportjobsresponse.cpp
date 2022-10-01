// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpredictorbacktestexportjobsresponse.h"
#include "listpredictorbacktestexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListPredictorBacktestExportJobsResponse
 * \brief The ListPredictorBacktestExportJobsResponse class provides an interace for Forecast ListPredictorBacktestExportJobs responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listPredictorBacktestExportJobs
 */

/*!
 * Constructs a ListPredictorBacktestExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPredictorBacktestExportJobsResponse::ListPredictorBacktestExportJobsResponse(
        const ListPredictorBacktestExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListPredictorBacktestExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListPredictorBacktestExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPredictorBacktestExportJobsRequest * ListPredictorBacktestExportJobsResponse::request() const
{
    Q_D(const ListPredictorBacktestExportJobsResponse);
    return static_cast<const ListPredictorBacktestExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListPredictorBacktestExportJobs \a response.
 */
void ListPredictorBacktestExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPredictorBacktestExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListPredictorBacktestExportJobsResponsePrivate
 * \brief The ListPredictorBacktestExportJobsResponsePrivate class provides private implementation for ListPredictorBacktestExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListPredictorBacktestExportJobsResponsePrivate object with public implementation \a q.
 */
ListPredictorBacktestExportJobsResponsePrivate::ListPredictorBacktestExportJobsResponsePrivate(
    ListPredictorBacktestExportJobsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListPredictorBacktestExportJobs response element from \a xml.
 */
void ListPredictorBacktestExportJobsResponsePrivate::parseListPredictorBacktestExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPredictorBacktestExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
