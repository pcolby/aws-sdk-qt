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

#include "listattacheduserpoliciesrequest.h"
#include "listattacheduserpoliciesrequest_p.h"
#include "listattacheduserpoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListAttachedUserPoliciesRequest
 *
 * @brief  Implements IAM ListAttachedUserPolicies requests.
 *
 * @see    IAMClient::listAttachedUserPolicies
 */

/**
 * @brief  Constructs a new ListAttachedUserPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedUserPoliciesResponse::ListAttachedUserPoliciesResponse(

/**
 * @brief  Constructs a new ListAttachedUserPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttachedUserPoliciesRequest::ListAttachedUserPoliciesRequest(const ListAttachedUserPoliciesRequest &other)
    : IAMRequest(new ListAttachedUserPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttachedUserPoliciesRequest object.
 */
ListAttachedUserPoliciesRequest::ListAttachedUserPoliciesRequest()
    : IAMRequest(new ListAttachedUserPoliciesRequestPrivate(IAMRequest::ListAttachedUserPoliciesAction, this))
{

}

bool ListAttachedUserPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttachedUserPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttachedUserPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListAttachedUserPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedUserPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttachedUserPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListAttachedUserPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedUserPoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListAttachedUserPoliciesRequest instance.
 */
ListAttachedUserPoliciesRequestPrivate::ListAttachedUserPoliciesRequestPrivate(
    const IAMRequest::Action action, ListAttachedUserPoliciesRequest * const q)
    : ListAttachedUserPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedUserPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedUserPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttachedUserPoliciesRequest instance.
 */
ListAttachedUserPoliciesRequestPrivate::ListAttachedUserPoliciesRequestPrivate(
    const ListAttachedUserPoliciesRequestPrivate &other, ListAttachedUserPoliciesRequest * const q)
    : ListAttachedUserPoliciesPrivate(other, q)
{

}
