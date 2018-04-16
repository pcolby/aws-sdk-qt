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

#include "disassociatediscoveredresourcerequest.h"
#include "disassociatediscoveredresourcerequest_p.h"
#include "disassociatediscoveredresourceresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateDiscoveredResourceRequest
 *
 * \brief The DisassociateDiscoveredResourceRequest class provides an interface for MigrationHub DisassociateDiscoveredResource requests.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::disassociateDiscoveredResource
 */

/*!
 * @brief  Constructs a new DisassociateDiscoveredResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateDiscoveredResourceRequest::DisassociateDiscoveredResourceRequest(const DisassociateDiscoveredResourceRequest &other)
    : MigrationHubRequest(new DisassociateDiscoveredResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisassociateDiscoveredResourceRequest object.
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
 * @brief  Construct an DisassociateDiscoveredResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateDiscoveredResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDiscoveredResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDiscoveredResourceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisassociateDiscoveredResourceRequestPrivate
 *
 * @brief  Private implementation for DisassociateDiscoveredResourceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateDiscoveredResourceRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public DisassociateDiscoveredResourceRequest instance.
 */
DisassociateDiscoveredResourceRequestPrivate::DisassociateDiscoveredResourceRequestPrivate(
    const MigrationHubRequest::Action action, DisassociateDiscoveredResourceRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateDiscoveredResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDiscoveredResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateDiscoveredResourceRequest instance.
 */
DisassociateDiscoveredResourceRequestPrivate::DisassociateDiscoveredResourceRequestPrivate(
    const DisassociateDiscoveredResourceRequestPrivate &other, DisassociateDiscoveredResourceRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
