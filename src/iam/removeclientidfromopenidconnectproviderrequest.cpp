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

#include "removeclientidfromopenidconnectproviderrequest.h"
#include "removeclientidfromopenidconnectproviderrequest_p.h"
#include "removeclientidfromopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  RemoveClientIDFromOpenIDConnectProviderRequest
 *
 * @brief  Implements IAM RemoveClientIDFromOpenIDConnectProvider requests.
 *
 * @see    IAMClient::removeClientIDFromOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new RemoveClientIDFromOpenIDConnectProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveClientIDFromOpenIDConnectProviderRequest::RemoveClientIDFromOpenIDConnectProviderRequest(const RemoveClientIDFromOpenIDConnectProviderRequest &other)
    : IAMRequest(new RemoveClientIDFromOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveClientIDFromOpenIDConnectProviderRequest object.
 */
RemoveClientIDFromOpenIDConnectProviderRequest::RemoveClientIDFromOpenIDConnectProviderRequest()
    : IAMRequest(new RemoveClientIDFromOpenIDConnectProviderRequestPrivate(IAMRequest::RemoveClientIDFromOpenIDConnectProviderAction, this))
{

}

bool RemoveClientIDFromOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveClientIDFromOpenIDConnectProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveClientIDFromOpenIDConnectProviderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveClientIDFromOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new RemoveClientIDFromOpenIDConnectProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveClientIDFromOpenIDConnectProviderRequestPrivate
 *
 * @brief  Private implementation for RemoveClientIDFromOpenIDConnectProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveClientIDFromOpenIDConnectProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public RemoveClientIDFromOpenIDConnectProviderRequest instance.
 */
RemoveClientIDFromOpenIDConnectProviderRequestPrivate::RemoveClientIDFromOpenIDConnectProviderRequestPrivate(
    const IAMRequest::Action action, RemoveClientIDFromOpenIDConnectProviderRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveClientIDFromOpenIDConnectProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveClientIDFromOpenIDConnectProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveClientIDFromOpenIDConnectProviderRequest instance.
 */
RemoveClientIDFromOpenIDConnectProviderRequestPrivate::RemoveClientIDFromOpenIDConnectProviderRequestPrivate(
    const RemoveClientIDFromOpenIDConnectProviderRequestPrivate &other, RemoveClientIDFromOpenIDConnectProviderRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
