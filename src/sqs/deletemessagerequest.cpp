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

#include "deletemessagerequest.h"
#include "deletemessagerequest_p.h"
#include "deletemessageresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  DeleteMessageRequest
 *
 * @brief  Implements SQS DeleteMessage requests.
 *
 * @see    SQSClient::deleteMessage
 */

/**
 * @brief  Constructs a new DeleteMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMessageRequest::DeleteMessageRequest(const DeleteMessageRequest &other)
    : SQSRequest(new DeleteMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMessageRequest object.
 */
DeleteMessageRequest::DeleteMessageRequest()
    : SQSRequest(new DeleteMessageRequestPrivate(SQSRequest::DeleteMessageAction, this))
{

}

bool DeleteMessageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * DeleteMessageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMessageRequestPrivate
 *
 * @brief  Private implementation for DeleteMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public DeleteMessageRequest instance.
 */
DeleteMessageRequestPrivate::DeleteMessageRequestPrivate(
    const SQSRequest::Action action, DeleteMessageRequest * const q)
    : DeleteMessagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMessageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMessageRequest instance.
 */
DeleteMessageRequestPrivate::DeleteMessageRequestPrivate(
    const DeleteMessageRequestPrivate &other, DeleteMessageRequest * const q)
    : DeleteMessagePrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
