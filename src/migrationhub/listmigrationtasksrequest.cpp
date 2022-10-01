// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a ListMigrationTasksRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
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
