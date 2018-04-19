/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listmigrationtasksrequest.h"
#include "listmigrationtasksrequest_p.h"
#include "listmigrationtasksresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListMigrationTasksRequest
 * \brief The ListMigrationTasksRequest class provides an interface for MigrationHub ListMigrationTasks requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::listMigrationTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListMigrationTasksRequest::ListMigrationTasksRequest(const ListMigrationTasksRequest &other)
    : MigrationHubRequest(new ListMigrationTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMigrationTasksRequest object.
 */
ListMigrationTasksRequest::ListMigrationTasksRequest()
    : MigrationHubRequest(new ListMigrationTasksRequestPrivate(MigrationHubRequest::ListMigrationTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListMigrationTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMigrationTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMigrationTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListMigrationTasksResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ListMigrationTasksRequestPrivate
 * \brief The ListMigrationTasksRequestPrivate class provides private implementation for ListMigrationTasksRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 *
 * Constructs a ListMigrationTasksRequestPrivate object for MigrationHub \a action with,
 * public implementation \a q.
 */
ListMigrationTasksRequestPrivate::ListMigrationTasksRequestPrivate(
    const MigrationHubRequest::Action action, ListMigrationTasksRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMigrationTasksRequest
 * class' copy constructor.
 */
ListMigrationTasksRequestPrivate::ListMigrationTasksRequestPrivate(
    const ListMigrationTasksRequestPrivate &other, ListMigrationTasksRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
