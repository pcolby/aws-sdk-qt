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

#include "liststacksetsrequest.h"
#include "liststacksetsrequest_p.h"
#include "liststacksetsresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  ListStackSetsRequest
 *
 * @brief  Implements CloudFormation ListStackSets requests.
 *
 * @see    CloudFormationClient::listStackSets
 */

/**
 * @brief  Constructs a new ListStackSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStackSetsResponse::ListStackSetsResponse(

/**
 * @brief  Constructs a new ListStackSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackSetsRequest::ListStackSetsRequest(const ListStackSetsRequest &other)
    : CloudFormationRequest(new ListStackSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStackSetsRequest object.
 */
ListStackSetsRequest::ListStackSetsRequest()
    : CloudFormationRequest(new ListStackSetsRequestPrivate(CloudFormationRequest::ListStackSetsAction, this))
{

}

bool ListStackSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStackSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ListStackSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListStackSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStackSetsRequestPrivate
 *
 * @brief  Private implementation for ListStackSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackSetsRequest instance.
 */
ListStackSetsRequestPrivate::ListStackSetsRequestPrivate(
    const CloudFormationRequest::Action action, ListStackSetsRequest * const q)
    : ListStackSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackSetsRequest instance.
 */
ListStackSetsRequestPrivate::ListStackSetsRequestPrivate(
    const ListStackSetsRequestPrivate &other, ListStackSetsRequest * const q)
    : ListStackSetsPrivate(other, q)
{

}
