/*
    Copyright 2013-2018 Paul Colby

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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
