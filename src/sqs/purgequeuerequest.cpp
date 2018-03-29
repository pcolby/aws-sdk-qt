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

#include "purgequeuerequest.h"
#include "purgequeuerequest_p.h"
#include "purgequeueresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  PurgeQueueRequest
 *
 * @brief  Implements SQS PurgeQueue requests.
 *
 * @see    SQSClient::purgeQueue
 */

/**
 * @brief  Constructs a new PurgeQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurgeQueueRequest::PurgeQueueRequest(const PurgeQueueRequest &other)
    : SQSRequest(new PurgeQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurgeQueueRequest object.
 */
PurgeQueueRequest::PurgeQueueRequest()
    : SQSRequest(new PurgeQueueRequestPrivate(SQSRequest::PurgeQueueAction, this))
{

}

bool PurgeQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurgeQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurgeQueueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * PurgeQueueRequest::response(QNetworkReply * const reply) const
{
    return new PurgeQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurgeQueueRequestPrivate
 *
 * @brief  Private implementation for PurgeQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurgeQueueRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public PurgeQueueRequest instance.
 */
PurgeQueueRequestPrivate::PurgeQueueRequestPrivate(
    const SQSRequest::Action action, PurgeQueueRequest * const q)
    : PurgeQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurgeQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurgeQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurgeQueueRequest instance.
 */
PurgeQueueRequestPrivate::PurgeQueueRequestPrivate(
    const PurgeQueueRequestPrivate &other, PurgeQueueRequest * const q)
    : PurgeQueuePrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
