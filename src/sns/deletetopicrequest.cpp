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

#include "deletetopicrequest.h"
#include "deletetopicrequest_p.h"
#include "deletetopicresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  DeleteTopicRequest
 *
 * @brief  Implements SNS DeleteTopic requests.
 *
 * @see    SNSClient::deleteTopic
 */

/**
 * @brief  Constructs a new DeleteTopicRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTopicRequest::DeleteTopicRequest(const DeleteTopicRequest &other)
    : SNSRequest(new DeleteTopicRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTopicRequest object.
 */
DeleteTopicRequest::DeleteTopicRequest()
    : SNSRequest(new DeleteTopicRequestPrivate(SNSRequest::DeleteTopicAction, this))
{

}

bool DeleteTopicRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTopicResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTopicResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * DeleteTopicRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTopicResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTopicRequestPrivate
 *
 * @brief  Private implementation for DeleteTopicRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTopicRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public DeleteTopicRequest instance.
 */
DeleteTopicRequestPrivate::DeleteTopicRequestPrivate(
    const SNSRequest::Action action, DeleteTopicRequest * const q)
    : DeleteTopicPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTopicRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTopicRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTopicRequest instance.
 */
DeleteTopicRequestPrivate::DeleteTopicRequestPrivate(
    const DeleteTopicRequestPrivate &other, DeleteTopicRequest * const q)
    : DeleteTopicPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
