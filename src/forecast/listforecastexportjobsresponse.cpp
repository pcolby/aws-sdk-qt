// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listforecastexportjobsresponse.h"
#include "listforecastexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListForecastExportJobsResponse
 * \brief The ListForecastExportJobsResponse class provides an interace for Forecast ListForecastExportJobs responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listForecastExportJobs
 */

/*!
 * Constructs a ListForecastExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListForecastExportJobsResponse::ListForecastExportJobsResponse(
        const ListForecastExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListForecastExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListForecastExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListForecastExportJobsRequest * ListForecastExportJobsResponse::request() const
{
    Q_D(const ListForecastExportJobsResponse);
    return static_cast<const ListForecastExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListForecastExportJobs \a response.
 */
void ListForecastExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListForecastExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListForecastExportJobsResponsePrivate
 * \brief The ListForecastExportJobsResponsePrivate class provides private implementation for ListForecastExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListForecastExportJobsResponsePrivate object with public implementation \a q.
 */
ListForecastExportJobsResponsePrivate::ListForecastExportJobsResponsePrivate(
    ListForecastExportJobsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListForecastExportJobs response element from \a xml.
 */
void ListForecastExportJobsResponsePrivate::parseListForecastExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListForecastExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
