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

#include "listtopicsrequest.h"
#include "listtopicsrequest_p.h"
#include "listtopicsresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  ListTopicsRequest
 *
 * @brief  Implements SNS ListTopics requests.
 *
 * @see    SNSClient::listTopics
 */

/**
 * @brief  Constructs a new ListTopicsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTopicsRequest::ListTopicsRequest(const ListTopicsRequest &other)
    : SNSRequest(new ListTopicsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTopicsRequest object.
 */
ListTopicsRequest::ListTopicsRequest()
    : SNSRequest(new ListTopicsRequestPrivate(SNSRequest::ListTopicsAction, this))
{

}

bool ListTopicsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTopicsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTopicsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * ListTopicsRequest::response(QNetworkReply * const reply) const
{
    return new ListTopicsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTopicsRequestPrivate
 *
 * @brief  Private implementation for ListTopicsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicsRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListTopicsRequest instance.
 */
ListTopicsRequestPrivate::ListTopicsRequestPrivate(
    const SNSRequest::Action action, ListTopicsRequest * const q)
    : ListTopicsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTopicsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTopicsRequest instance.
 */
ListTopicsRequestPrivate::ListTopicsRequestPrivate(
    const ListTopicsRequestPrivate &other, ListTopicsRequest * const q)
    : ListTopicsPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
