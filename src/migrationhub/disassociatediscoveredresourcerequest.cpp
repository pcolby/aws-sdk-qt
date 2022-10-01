// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatediscoveredresourcerequest.h"
#include "disassociatediscoveredresourcerequest_p.h"
#include "disassociatediscoveredresourceresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateDiscoveredResourceRequest
 * \brief The DisassociateDiscoveredResourceRequest class provides an interface for MigrationHub DisassociateDiscoveredResource requests.
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
 * \sa MigrationHubClient::disassociateDiscoveredResource
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDiscoveredResourceRequest::DisassociateDiscoveredResourceRequest(const DisassociateDiscoveredResourceRequest &other)
    : MigrationHubRequest(new DisassociateDiscoveredResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDiscoveredResourceRequest object.
 */
DisassociateDiscoveredResourceRequest::DisassociateDiscoveredResourceRequest()
    : MigrationHubRequest(new DisassociateDiscoveredResourceRequestPrivate(MigrationHubRequest::DisassociateDiscoveredResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDiscoveredResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDiscoveredResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDiscoveredResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDiscoveredResourceResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::DisassociateDiscoveredResourceRequestPrivate
 * \brief The DisassociateDiscoveredResourceRequestPrivate class provides private implementation for DisassociateDiscoveredResourceRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DisassociateDiscoveredResourceRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
DisassociateDiscoveredResourceRequestPrivate::DisassociateDiscoveredResourceRequestPrivate(
    const MigrationHubRequest::Action action, DisassociateDiscoveredResourceRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDiscoveredResourceRequest
 * class' copy constructor.
 */
DisassociateDiscoveredResourceRequestPrivate::DisassociateDiscoveredResourceRequestPrivate(
    const DisassociateDiscoveredResourceRequestPrivate &other, DisassociateDiscoveredResourceRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
