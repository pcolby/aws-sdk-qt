// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatediscoveredresourcerequest.h"
#include "associatediscoveredresourcerequest_p.h"
#include "associatediscoveredresourceresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::AssociateDiscoveredResourceRequest
 * \brief The AssociateDiscoveredResourceRequest class provides an interface for MigrationHub AssociateDiscoveredResource requests.
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
 * \sa MigrationHubClient::associateDiscoveredResource
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDiscoveredResourceRequest::AssociateDiscoveredResourceRequest(const AssociateDiscoveredResourceRequest &other)
    : MigrationHubRequest(new AssociateDiscoveredResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDiscoveredResourceRequest object.
 */
AssociateDiscoveredResourceRequest::AssociateDiscoveredResourceRequest()
    : MigrationHubRequest(new AssociateDiscoveredResourceRequestPrivate(MigrationHubRequest::AssociateDiscoveredResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDiscoveredResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDiscoveredResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDiscoveredResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDiscoveredResourceResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::AssociateDiscoveredResourceRequestPrivate
 * \brief The AssociateDiscoveredResourceRequestPrivate class provides private implementation for AssociateDiscoveredResourceRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a AssociateDiscoveredResourceRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
AssociateDiscoveredResourceRequestPrivate::AssociateDiscoveredResourceRequestPrivate(
    const MigrationHubRequest::Action action, AssociateDiscoveredResourceRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDiscoveredResourceRequest
 * class' copy constructor.
 */
AssociateDiscoveredResourceRequestPrivate::AssociateDiscoveredResourceRequestPrivate(
    const AssociateDiscoveredResourceRequestPrivate &other, AssociateDiscoveredResourceRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
