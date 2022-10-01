// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmigrationtasksresponse.h"
#include "listmigrationtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListMigrationTasksResponse
 * \brief The ListMigrationTasksResponse class provides an interace for MigrationHub ListMigrationTasks responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::listMigrationTasks
 */

/*!
 * Constructs a ListMigrationTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListMigrationTasksResponse::ListMigrationTasksResponse(
        const ListMigrationTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListMigrationTasksResponsePrivate(this), parent)
{
    setRequest(new ListMigrationTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMigrationTasksRequest * ListMigrationTasksResponse::request() const
{
    Q_D(const ListMigrationTasksResponse);
    return static_cast<const ListMigrationTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ListMigrationTasks \a response.
 */
void ListMigrationTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMigrationTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ListMigrationTasksResponsePrivate
 * \brief The ListMigrationTasksResponsePrivate class provides private implementation for ListMigrationTasksResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListMigrationTasksResponsePrivate object with public implementation \a q.
 */
ListMigrationTasksResponsePrivate::ListMigrationTasksResponsePrivate(
    ListMigrationTasksResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ListMigrationTasks response element from \a xml.
 */
void ListMigrationTasksResponsePrivate::parseListMigrationTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMigrationTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
