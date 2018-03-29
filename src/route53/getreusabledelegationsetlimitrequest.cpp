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

#include "getreusabledelegationsetlimitrequest.h"
#include "getreusabledelegationsetlimitrequest_p.h"
#include "getreusabledelegationsetlimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetReusableDelegationSetLimitRequest
 *
 * @brief  Implements Route53 GetReusableDelegationSetLimit requests.
 *
 * @see    Route53Client::getReusableDelegationSetLimit
 */

/**
 * @brief  Constructs a new GetReusableDelegationSetLimitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest(const GetReusableDelegationSetLimitRequest &other)
    : Route53Request(new GetReusableDelegationSetLimitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetReusableDelegationSetLimitRequest object.
 */
GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest()
    : Route53Request(new GetReusableDelegationSetLimitRequestPrivate(Route53Request::GetReusableDelegationSetLimitAction, this))
{

}

bool GetReusableDelegationSetLimitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetReusableDelegationSetLimitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReusableDelegationSetLimitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetReusableDelegationSetLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetReusableDelegationSetLimitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetReusableDelegationSetLimitRequestPrivate
 *
 * @brief  Private implementation for GetReusableDelegationSetLimitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReusableDelegationSetLimitRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetReusableDelegationSetLimitRequest instance.
 */
GetReusableDelegationSetLimitRequestPrivate::GetReusableDelegationSetLimitRequestPrivate(
    const Route53Request::Action action, GetReusableDelegationSetLimitRequest * const q)
    : GetReusableDelegationSetLimitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetReusableDelegationSetLimitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReusableDelegationSetLimitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReusableDelegationSetLimitRequest instance.
 */
GetReusableDelegationSetLimitRequestPrivate::GetReusableDelegationSetLimitRequestPrivate(
    const GetReusableDelegationSetLimitRequestPrivate &other, GetReusableDelegationSetLimitRequest * const q)
    : GetReusableDelegationSetLimitPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
