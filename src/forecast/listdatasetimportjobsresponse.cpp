// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
