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

#include "getreusabledelegationsetrequest.h"
#include "getreusabledelegationsetrequest_p.h"
#include "getreusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetReusableDelegationSetRequest
 *
 * @brief  Implements Route53 GetReusableDelegationSet requests.
 *
 * @see    Route53Client::getReusableDelegationSet
 */

/**
 * @brief  Constructs a new GetReusableDelegationSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReusableDelegationSetRequest::GetReusableDelegationSetRequest(const GetReusableDelegationSetRequest &other)
    : Route53Request(new GetReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetReusableDelegationSetRequest object.
 */
GetReusableDelegationSetRequest::GetReusableDelegationSetRequest()
    : Route53Request(new GetReusableDelegationSetRequestPrivate(Route53Request::GetReusableDelegationSetAction, this))
{

}

bool GetReusableDelegationSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetReusableDelegationSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReusableDelegationSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new GetReusableDelegationSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetReusableDelegationSetRequestPrivate
 *
 * @brief  Private implementation for GetReusableDelegationSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReusableDelegationSetRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetReusableDelegationSetRequest instance.
 */
GetReusableDelegationSetRequestPrivate::GetReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, GetReusableDelegationSetRequest * const q)
    : GetReusableDelegationSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetReusableDelegationSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReusableDelegationSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReusableDelegationSetRequest instance.
 */
GetReusableDelegationSetRequestPrivate::GetReusableDelegationSetRequestPrivate(
    const GetReusableDelegationSetRequestPrivate &other, GetReusableDelegationSetRequest * const q)
    : GetReusableDelegationSetPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
