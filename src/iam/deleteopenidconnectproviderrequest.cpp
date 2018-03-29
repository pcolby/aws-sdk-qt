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

#include "deleteopenidconnectproviderrequest.h"
#include "deleteopenidconnectproviderrequest_p.h"
#include "deleteopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteOpenIDConnectProviderRequest
 *
 * @brief  Implements IAM DeleteOpenIDConnectProvider requests.
 *
 * @see    IAMClient::deleteOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new DeleteOpenIDConnectProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteOpenIDConnectProviderRequest::DeleteOpenIDConnectProviderRequest(const DeleteOpenIDConnectProviderRequest &other)
    : IAMRequest(new DeleteOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteOpenIDConnectProviderRequest object.
 */
DeleteOpenIDConnectProviderRequest::DeleteOpenIDConnectProviderRequest()
    : IAMRequest(new DeleteOpenIDConnectProviderRequestPrivate(IAMRequest::DeleteOpenIDConnectProviderAction, this))
{

}

bool DeleteOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteOpenIDConnectProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteOpenIDConnectProviderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOpenIDConnectProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteOpenIDConnectProviderRequestPrivate
 *
 * @brief  Private implementation for DeleteOpenIDConnectProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOpenIDConnectProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteOpenIDConnectProviderRequest instance.
 */
DeleteOpenIDConnectProviderRequestPrivate::DeleteOpenIDConnectProviderRequestPrivate(
    const IAMRequest::Action action, DeleteOpenIDConnectProviderRequest * const q)
    : DeleteOpenIDConnectProviderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOpenIDConnectProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteOpenIDConnectProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteOpenIDConnectProviderRequest instance.
 */
DeleteOpenIDConnectProviderRequestPrivate::DeleteOpenIDConnectProviderRequestPrivate(
    const DeleteOpenIDConnectProviderRequestPrivate &other, DeleteOpenIDConnectProviderRequest * const q)
    : DeleteOpenIDConnectProviderPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
