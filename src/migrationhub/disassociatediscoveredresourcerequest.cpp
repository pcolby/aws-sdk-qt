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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
