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

#include "addclientidtoopenidconnectproviderrequest.h"
#include "addclientidtoopenidconnectproviderrequest_p.h"
#include "addclientidtoopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  AddClientIDToOpenIDConnectProviderRequest
 *
 * @brief  Implements IAM AddClientIDToOpenIDConnectProvider requests.
 *
 * @see    IAMClient::addClientIDToOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new AddClientIDToOpenIDConnectProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddClientIDToOpenIDConnectProviderRequest::AddClientIDToOpenIDConnectProviderRequest(const AddClientIDToOpenIDConnectProviderRequest &other)
    : IAMRequest(new AddClientIDToOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddClientIDToOpenIDConnectProviderRequest object.
 */
AddClientIDToOpenIDConnectProviderRequest::AddClientIDToOpenIDConnectProviderRequest()
    : IAMRequest(new AddClientIDToOpenIDConnectProviderRequestPrivate(IAMRequest::AddClientIDToOpenIDConnectProviderAction, this))
{

}

bool AddClientIDToOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddClientIDToOpenIDConnectProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddClientIDToOpenIDConnectProviderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * AddClientIDToOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new AddClientIDToOpenIDConnectProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddClientIDToOpenIDConnectProviderRequestPrivate
 *
 * @brief  Private implementation for AddClientIDToOpenIDConnectProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddClientIDToOpenIDConnectProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public AddClientIDToOpenIDConnectProviderRequest instance.
 */
AddClientIDToOpenIDConnectProviderRequestPrivate::AddClientIDToOpenIDConnectProviderRequestPrivate(
    const IAMRequest::Action action, AddClientIDToOpenIDConnectProviderRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddClientIDToOpenIDConnectProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddClientIDToOpenIDConnectProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddClientIDToOpenIDConnectProviderRequest instance.
 */
AddClientIDToOpenIDConnectProviderRequestPrivate::AddClientIDToOpenIDConnectProviderRequestPrivate(
    const AddClientIDToOpenIDConnectProviderRequestPrivate &other, AddClientIDToOpenIDConnectProviderRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
