// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
 * Constructs a ListDiscoveredResourcesRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
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
