// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasourcesyncjobsresponse.h"
#include "listdatasourcesyncjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListDataSourceSyncJobsResponse
 * \brief The ListDataSourceSyncJobsResponse class provides an interace for Kendra ListDataSourceSyncJobs responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listDataSourceSyncJobs
 */

/*!
 * Constructs a ListDataSourceSyncJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSourceSyncJobsResponse::ListDataSourceSyncJobsResponse(
        const ListDataSourceSyncJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListDataSourceSyncJobsResponsePrivate(this), parent)
{
    setRequest(new ListDataSourceSyncJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSourceSyncJobsRequest * ListDataSourceSyncJobsResponse::request() const
{
    Q_D(const ListDataSourceSyncJobsResponse);
    return static_cast<const ListDataSourceSyncJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListDataSourceSyncJobs \a response.
 */
void ListDataSourceSyncJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSourceSyncJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListDataSourceSyncJobsResponsePrivate
 * \brief The ListDataSourceSyncJobsResponsePrivate class provides private implementation for ListDataSourceSyncJobsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListDataSourceSyncJobsResponsePrivate object with public implementation \a q.
 */
ListDataSourceSyncJobsResponsePrivate::ListDataSourceSyncJobsResponsePrivate(
    ListDataSourceSyncJobsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListDataSourceSyncJobs response element from \a xml.
 */
void ListDataSourceSyncJobsResponsePrivate::parseListDataSourceSyncJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSourceSyncJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
