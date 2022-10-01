// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationstatesrequest.h"
#include "listapplicationstatesrequest_p.h"
#include "listapplicationstatesresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListApplicationStatesRequest
 * \brief The ListApplicationStatesRequest class provides an interface for MigrationHub ListApplicationStates requests.
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
 * \sa MigrationHubClient::listApplicationStates
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationStatesRequest::ListApplicationStatesRequest(const ListApplicationStatesRequest &other)
    : MigrationHubRequest(new ListApplicationStatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationStatesRequest object.
 */
ListApplicationStatesRequest::ListApplicationStatesRequest()
    : MigrationHubRequest(new ListApplicationStatesRequestPrivate(MigrationHubRequest::ListApplicationStatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationStatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationStatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationStatesRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationStatesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ListApplicationStatesRequestPrivate
 * \brief The ListApplicationStatesRequestPrivate class provides private implementation for ListApplicationStatesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListApplicationStatesRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
ListApplicationStatesRequestPrivate::ListApplicationStatesRequestPrivate(
    const MigrationHubRequest::Action action, ListApplicationStatesRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationStatesRequest
 * class' copy constructor.
 */
ListApplicationStatesRequestPrivate::ListApplicationStatesRequestPrivate(
    const ListApplicationStatesRequestPrivate &other, ListApplicationStatesRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
