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

#include "deletereusabledelegationsetrequest.h"
#include "deletereusabledelegationsetrequest_p.h"
#include "deletereusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteReusableDelegationSetRequest
 *
 * @brief  Implements Route53 DeleteReusableDelegationSet requests.
 *
 * @see    Route53Client::deleteReusableDelegationSet
 */

/**
 * @brief  Constructs a new DeleteReusableDelegationSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReusableDelegationSetRequest::DeleteReusableDelegationSetRequest(const DeleteReusableDelegationSetRequest &other)
    : Route53Request(new DeleteReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReusableDelegationSetRequest object.
 */
DeleteReusableDelegationSetRequest::DeleteReusableDelegationSetRequest()
    : Route53Request(new DeleteReusableDelegationSetRequestPrivate(Route53Request::DeleteReusableDelegationSetAction, this))
{

}

bool DeleteReusableDelegationSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReusableDelegationSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReusableDelegationSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * DeleteReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReusableDelegationSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReusableDelegationSetRequestPrivate
 *
 * @brief  Private implementation for DeleteReusableDelegationSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReusableDelegationSetRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteReusableDelegationSetRequest instance.
 */
DeleteReusableDelegationSetRequestPrivate::DeleteReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, DeleteReusableDelegationSetRequest * const q)
    : DeleteReusableDelegationSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReusableDelegationSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReusableDelegationSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReusableDelegationSetRequest instance.
 */
DeleteReusableDelegationSetRequestPrivate::DeleteReusableDelegationSetRequestPrivate(
    const DeleteReusableDelegationSetRequestPrivate &other, DeleteReusableDelegationSetRequest * const q)
    : DeleteReusableDelegationSetPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
