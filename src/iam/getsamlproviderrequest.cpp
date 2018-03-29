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

#include "getsamlproviderrequest.h"
#include "getsamlproviderrequest_p.h"
#include "getsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetSAMLProviderRequest
 *
 * @brief  Implements IAM GetSAMLProvider requests.
 *
 * @see    IAMClient::getSAMLProvider
 */

/**
 * @brief  Constructs a new GetSAMLProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSAMLProviderRequest::GetSAMLProviderRequest(const GetSAMLProviderRequest &other)
    : IAMRequest(new GetSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSAMLProviderRequest object.
 */
GetSAMLProviderRequest::GetSAMLProviderRequest()
    : IAMRequest(new GetSAMLProviderRequestPrivate(IAMRequest::GetSAMLProviderAction, this))
{

}

bool GetSAMLProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSAMLProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSAMLProviderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new GetSAMLProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSAMLProviderRequestPrivate
 *
 * @brief  Private implementation for GetSAMLProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSAMLProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetSAMLProviderRequest instance.
 */
GetSAMLProviderRequestPrivate::GetSAMLProviderRequestPrivate(
    const IAMRequest::Action action, GetSAMLProviderRequest * const q)
    : GetSAMLProviderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSAMLProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSAMLProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSAMLProviderRequest instance.
 */
GetSAMLProviderRequestPrivate::GetSAMLProviderRequestPrivate(
    const GetSAMLProviderRequestPrivate &other, GetSAMLProviderRequest * const q)
    : GetSAMLProviderPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
