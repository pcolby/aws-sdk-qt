/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createopenidconnectproviderrequest.h"
#include "createopenidconnectproviderrequest_p.h"
#include "createopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateOpenIDConnectProviderRequest
 *
 * @brief  Implements IAM CreateOpenIDConnectProvider requests.
 *
 * @see    IAMClient::createOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new CreateOpenIDConnectProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOpenIDConnectProviderRequest::CreateOpenIDConnectProviderRequest(const CreateOpenIDConnectProviderRequest &other)
    : IAMRequest(new CreateOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateOpenIDConnectProviderRequest object.
 */
CreateOpenIDConnectProviderRequest::CreateOpenIDConnectProviderRequest()
    : IAMRequest(new CreateOpenIDConnectProviderRequestPrivate(IAMRequest::CreateOpenIDConnectProviderAction, this))
{

}

bool CreateOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateOpenIDConnectProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOpenIDConnectProviderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new CreateOpenIDConnectProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateOpenIDConnectProviderRequestPrivate
 *
 * @brief  Private implementation for CreateOpenIDConnectProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOpenIDConnectProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateOpenIDConnectProviderRequest instance.
 */
CreateOpenIDConnectProviderRequestPrivate::CreateOpenIDConnectProviderRequestPrivate(
    const IAMRequest::Action action, CreateOpenIDConnectProviderRequest * const q)
    : CreateOpenIDConnectProviderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateOpenIDConnectProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOpenIDConnectProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOpenIDConnectProviderRequest instance.
 */
CreateOpenIDConnectProviderRequestPrivate::CreateOpenIDConnectProviderRequestPrivate(
    const CreateOpenIDConnectProviderRequestPrivate &other, CreateOpenIDConnectProviderRequest * const q)
    : CreateOpenIDConnectProviderPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
