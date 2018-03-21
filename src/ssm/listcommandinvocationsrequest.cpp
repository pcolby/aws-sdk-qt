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

#include "listcommandinvocationsrequest.h"
#include "listcommandinvocationsrequest_p.h"
#include "listcommandinvocationsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ListCommandInvocationsRequest
 *
 * @brief  Implements SSM ListCommandInvocations requests.
 *
 * @see    SSMClient::listCommandInvocations
 */

/**
 * @brief  Constructs a new ListCommandInvocationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCommandInvocationsResponse::ListCommandInvocationsResponse(

/**
 * @brief  Constructs a new ListCommandInvocationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCommandInvocationsRequest::ListCommandInvocationsRequest(const ListCommandInvocationsRequest &other)
    : SSMRequest(new ListCommandInvocationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCommandInvocationsRequest object.
 */
ListCommandInvocationsRequest::ListCommandInvocationsRequest()
    : SSMRequest(new ListCommandInvocationsRequestPrivate(SSMRequest::ListCommandInvocationsAction, this))
{

}

bool ListCommandInvocationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCommandInvocationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCommandInvocationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ListCommandInvocationsRequest::response(QNetworkReply * const reply) const
{
    return new ListCommandInvocationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCommandInvocationsRequestPrivate
 *
 * @brief  Private implementation for ListCommandInvocationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCommandInvocationsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListCommandInvocationsRequest instance.
 */
ListCommandInvocationsRequestPrivate::ListCommandInvocationsRequestPrivate(
    const SSMRequest::Action action, ListCommandInvocationsRequest * const q)
    : ListCommandInvocationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCommandInvocationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCommandInvocationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCommandInvocationsRequest instance.
 */
ListCommandInvocationsRequestPrivate::ListCommandInvocationsRequestPrivate(
    const ListCommandInvocationsRequestPrivate &other, ListCommandInvocationsRequest * const q)
    : ListCommandInvocationsPrivate(other, q)
{

}
