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

#include "listpredictorbacktestexportjobsresponse.h"
#include "listpredictorbacktestexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ListPredictorBacktestExportJobsResponse
 * \brief The ListPredictorBacktestExportJobsResponse class provides an interace for ForecastService ListPredictorBacktestExportJobs responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::listPredictorBacktestExportJobs
 */

/*!
 * Constructs a ListPredictorBacktestExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPredictorBacktestExportJobsResponse::ListPredictorBacktestExportJobsResponse(
        const ListPredictorBacktestExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new ListPredictorBacktestExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListPredictorBacktestExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPredictorBacktestExportJobsRequest * ListPredictorBacktestExportJobsResponse::request() const
{
    return static_cast<const ListPredictorBacktestExportJobsRequest *>(ForecastServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastService ListPredictorBacktestExportJobs \a response.
 */
void ListPredictorBacktestExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPredictorBacktestExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::ListPredictorBacktestExportJobsResponsePrivate
 * \brief The ListPredictorBacktestExportJobsResponsePrivate class provides private implementation for ListPredictorBacktestExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ListPredictorBacktestExportJobsResponsePrivate object with public implementation \a q.
 */
ListPredictorBacktestExportJobsResponsePrivate::ListPredictorBacktestExportJobsResponsePrivate(
    ListPredictorBacktestExportJobsResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService ListPredictorBacktestExportJobs response element from \a xml.
 */
void ListPredictorBacktestExportJobsResponsePrivate::parseListPredictorBacktestExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPredictorBacktestExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
