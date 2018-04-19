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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
 *
 * Constructs a AssociateDiscoveredResourceRequestPrivate object for MigrationHub \a action with,
 * public implementation \a q.
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
