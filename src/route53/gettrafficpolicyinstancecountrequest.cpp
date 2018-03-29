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

#include "gettrafficpolicyinstancecountrequest.h"
#include "gettrafficpolicyinstancecountrequest_p.h"
#include "gettrafficpolicyinstancecountresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetTrafficPolicyInstanceCountRequest
 *
 * @brief  Implements Route53 GetTrafficPolicyInstanceCount requests.
 *
 * @see    Route53Client::getTrafficPolicyInstanceCount
 */

/**
 * @brief  Constructs a new GetTrafficPolicyInstanceCountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTrafficPolicyInstanceCountRequest::GetTrafficPolicyInstanceCountRequest(const GetTrafficPolicyInstanceCountRequest &other)
    : Route53Request(new GetTrafficPolicyInstanceCountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTrafficPolicyInstanceCountRequest object.
 */
GetTrafficPolicyInstanceCountRequest::GetTrafficPolicyInstanceCountRequest()
    : Route53Request(new GetTrafficPolicyInstanceCountRequestPrivate(Route53Request::GetTrafficPolicyInstanceCountAction, this))
{

}

bool GetTrafficPolicyInstanceCountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTrafficPolicyInstanceCountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTrafficPolicyInstanceCountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyInstanceCountRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyInstanceCountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTrafficPolicyInstanceCountRequestPrivate
 *
 * @brief  Private implementation for GetTrafficPolicyInstanceCountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyInstanceCountRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetTrafficPolicyInstanceCountRequest instance.
 */
GetTrafficPolicyInstanceCountRequestPrivate::GetTrafficPolicyInstanceCountRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyInstanceCountRequest * const q)
    : GetTrafficPolicyInstanceCountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyInstanceCountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyInstanceCountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTrafficPolicyInstanceCountRequest instance.
 */
GetTrafficPolicyInstanceCountRequestPrivate::GetTrafficPolicyInstanceCountRequestPrivate(
    const GetTrafficPolicyInstanceCountRequestPrivate &other, GetTrafficPolicyInstanceCountRequest * const q)
    : GetTrafficPolicyInstanceCountPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
