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

#include "getopenidconnectproviderrequest.h"
#include "getopenidconnectproviderrequest_p.h"
#include "getopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetOpenIDConnectProviderRequest
 *
 * @brief  Implements IAM GetOpenIDConnectProvider requests.
 *
 * @see    IAMClient::getOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new GetOpenIDConnectProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOpenIDConnectProviderRequest::GetOpenIDConnectProviderRequest(const GetOpenIDConnectProviderRequest &other)
    : IAMRequest(new GetOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOpenIDConnectProviderRequest object.
 */
GetOpenIDConnectProviderRequest::GetOpenIDConnectProviderRequest()
    : IAMRequest(new GetOpenIDConnectProviderRequestPrivate(IAMRequest::GetOpenIDConnectProviderAction, this))
{

}

bool GetOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOpenIDConnectProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOpenIDConnectProviderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new GetOpenIDConnectProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOpenIDConnectProviderRequestPrivate
 *
 * @brief  Private implementation for GetOpenIDConnectProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIDConnectProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetOpenIDConnectProviderRequest instance.
 */
GetOpenIDConnectProviderRequestPrivate::GetOpenIDConnectProviderRequestPrivate(
    const IAMRequest::Action action, GetOpenIDConnectProviderRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIDConnectProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOpenIDConnectProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOpenIDConnectProviderRequest instance.
 */
GetOpenIDConnectProviderRequestPrivate::GetOpenIDConnectProviderRequestPrivate(
    const GetOpenIDConnectProviderRequestPrivate &other, GetOpenIDConnectProviderRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
