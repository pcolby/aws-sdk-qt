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

/**
 * @class  AssociateDiscoveredResourceRequest
 *
 * @brief  Implements MigrationHub AssociateDiscoveredResource requests.
 *
 * @see    MigrationHubClient::associateDiscoveredResource
 */

/**
 * @brief  Constructs a new AssociateDiscoveredResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateDiscoveredResourceRequest::AssociateDiscoveredResourceRequest(const AssociateDiscoveredResourceRequest &other)
    : MigrationHubRequest(new AssociateDiscoveredResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateDiscoveredResourceRequest object.
 */
AssociateDiscoveredResourceRequest::AssociateDiscoveredResourceRequest()
    : MigrationHubRequest(new AssociateDiscoveredResourceRequestPrivate(MigrationHubRequest::AssociateDiscoveredResourceAction, this))
{

}

bool AssociateDiscoveredResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateDiscoveredResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateDiscoveredResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * AssociateDiscoveredResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDiscoveredResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateDiscoveredResourceRequestPrivate
 *
 * @brief  Private implementation for AssociateDiscoveredResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDiscoveredResourceRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public AssociateDiscoveredResourceRequest instance.
 */
AssociateDiscoveredResourceRequestPrivate::AssociateDiscoveredResourceRequestPrivate(
    const MigrationHubRequest::Action action, AssociateDiscoveredResourceRequest * const q)
    : AssociateDiscoveredResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDiscoveredResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateDiscoveredResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateDiscoveredResourceRequest instance.
 */
AssociateDiscoveredResourceRequestPrivate::AssociateDiscoveredResourceRequestPrivate(
    const AssociateDiscoveredResourceRequestPrivate &other, AssociateDiscoveredResourceRequest * const q)
    : AssociateDiscoveredResourcePrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
