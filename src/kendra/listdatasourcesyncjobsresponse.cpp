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

#include "listdatasourcesyncjobsresponse.h"
#include "listdatasourcesyncjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::ListDataSourceSyncJobsResponse
 * \brief The ListDataSourceSyncJobsResponse class provides an interace for kendra ListDataSourceSyncJobs responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::listDataSourceSyncJobs
 */

/*!
 * Constructs a ListDataSourceSyncJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSourceSyncJobsResponse::ListDataSourceSyncJobsResponse(
        const ListDataSourceSyncJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new ListDataSourceSyncJobsResponsePrivate(this), parent)
{
    setRequest(new ListDataSourceSyncJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSourceSyncJobsRequest * ListDataSourceSyncJobsResponse::request() const
{
    return static_cast<const ListDataSourceSyncJobsRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra ListDataSourceSyncJobs \a response.
 */
void ListDataSourceSyncJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSourceSyncJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::ListDataSourceSyncJobsResponsePrivate
 * \brief The ListDataSourceSyncJobsResponsePrivate class provides private implementation for ListDataSourceSyncJobsResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a ListDataSourceSyncJobsResponsePrivate object with public implementation \a q.
 */
ListDataSourceSyncJobsResponsePrivate::ListDataSourceSyncJobsResponsePrivate(
    ListDataSourceSyncJobsResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra ListDataSourceSyncJobs response element from \a xml.
 */
void ListDataSourceSyncJobsResponsePrivate::parseListDataSourceSyncJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSourceSyncJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
