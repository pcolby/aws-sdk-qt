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

#include "listdiscoveredresourcesrequest.h"
#include "listdiscoveredresourcesrequest_p.h"
#include "listdiscoveredresourcesresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListDiscoveredResourcesRequest
 * \brief The ListDiscoveredResourcesRequest class provides an interface for MigrationHub ListDiscoveredResources requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::listDiscoveredResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest(const ListDiscoveredResourcesRequest &other)
    : MigrationHubRequest(new ListDiscoveredResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDiscoveredResourcesRequest object.
 */
ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest()
    : MigrationHubRequest(new ListDiscoveredResourcesRequestPrivate(MigrationHubRequest::ListDiscoveredResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDiscoveredResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDiscoveredResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDiscoveredResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDiscoveredResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ListDiscoveredResourcesRequestPrivate
 * \brief The ListDiscoveredResourcesRequestPrivate class provides private implementation for ListDiscoveredResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 *
 * Constructs a ListDiscoveredResourcesRequestPrivate object for MigrationHub \a action with,
 * public implementation \a q.
 */
ListDiscoveredResourcesRequestPrivate::ListDiscoveredResourcesRequestPrivate(
    const MigrationHubRequest::Action action, ListDiscoveredResourcesRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDiscoveredResourcesRequest
 * class' copy constructor.
 */
ListDiscoveredResourcesRequestPrivate::ListDiscoveredResourcesRequestPrivate(
    const ListDiscoveredResourcesRequestPrivate &other, ListDiscoveredResourcesRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
