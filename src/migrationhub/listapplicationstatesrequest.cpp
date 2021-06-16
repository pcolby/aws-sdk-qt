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
