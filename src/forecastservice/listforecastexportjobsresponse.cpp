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

#include "listforecastexportjobsresponse.h"
#include "listforecastexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ListForecastExportJobsResponse
 * \brief The ListForecastExportJobsResponse class provides an interace for ForecastService ListForecastExportJobs responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::listForecastExportJobs
 */

/*!
 * Constructs a ListForecastExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListForecastExportJobsResponse::ListForecastExportJobsResponse(
        const ListForecastExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new ListForecastExportJobsResponsePrivate(this), parent)
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
 * Parses a successful ForecastService ListForecastExportJobs \a response.
 */
void ListForecastExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListForecastExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::ListForecastExportJobsResponsePrivate
 * \brief The ListForecastExportJobsResponsePrivate class provides private implementation for ListForecastExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ListForecastExportJobsResponsePrivate object with public implementation \a q.
 */
ListForecastExportJobsResponsePrivate::ListForecastExportJobsResponsePrivate(
    ListForecastExportJobsResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService ListForecastExportJobs response element from \a xml.
 */
void ListForecastExportJobsResponsePrivate::parseListForecastExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListForecastExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
