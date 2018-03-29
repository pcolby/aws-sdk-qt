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

#include "gettrafficpolicyinstancerequest.h"
#include "gettrafficpolicyinstancerequest_p.h"
#include "gettrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetTrafficPolicyInstanceRequest
 *
 * @brief  Implements Route53 GetTrafficPolicyInstance requests.
 *
 * @see    Route53Client::getTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new GetTrafficPolicyInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTrafficPolicyInstanceRequest::GetTrafficPolicyInstanceRequest(const GetTrafficPolicyInstanceRequest &other)
    : Route53Request(new GetTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTrafficPolicyInstanceRequest object.
 */
GetTrafficPolicyInstanceRequest::GetTrafficPolicyInstanceRequest()
    : Route53Request(new GetTrafficPolicyInstanceRequestPrivate(Route53Request::GetTrafficPolicyInstanceAction, this))
{

}

bool GetTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTrafficPolicyInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTrafficPolicyInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTrafficPolicyInstanceRequestPrivate
 *
 * @brief  Private implementation for GetTrafficPolicyInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyInstanceRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetTrafficPolicyInstanceRequest instance.
 */
GetTrafficPolicyInstanceRequestPrivate::GetTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyInstanceRequest * const q)
    : GetTrafficPolicyInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTrafficPolicyInstanceRequest instance.
 */
GetTrafficPolicyInstanceRequestPrivate::GetTrafficPolicyInstanceRequestPrivate(
    const GetTrafficPolicyInstanceRequestPrivate &other, GetTrafficPolicyInstanceRequest * const q)
    : GetTrafficPolicyInstancePrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
