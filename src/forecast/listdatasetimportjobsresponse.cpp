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

#include "listdatasetimportjobsresponse.h"
#include "listdatasetimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListDatasetImportJobsResponse
 * \brief The ListDatasetImportJobsResponse class provides an interace for Forecast ListDatasetImportJobs responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listDatasetImportJobs
 */

/*!
 * Constructs a ListDatasetImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetImportJobsResponse::ListDatasetImportJobsResponse(
        const ListDatasetImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListDatasetImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetImportJobsRequest * ListDatasetImportJobsResponse::request() const
{
    Q_D(const ListDatasetImportJobsResponse);
    return static_cast<const ListDatasetImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListDatasetImportJobs \a response.
 */
void ListDatasetImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListDatasetImportJobsResponsePrivate
 * \brief The ListDatasetImportJobsResponsePrivate class provides private implementation for ListDatasetImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListDatasetImportJobsResponsePrivate object with public implementation \a q.
 */
ListDatasetImportJobsResponsePrivate::ListDatasetImportJobsResponsePrivate(
    ListDatasetImportJobsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListDatasetImportJobs response element from \a xml.
 */
void ListDatasetImportJobsResponsePrivate::parseListDatasetImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
