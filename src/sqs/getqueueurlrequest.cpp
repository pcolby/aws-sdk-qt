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

#include "getqueueurlrequest.h"
#include "getqueueurlrequest_p.h"
#include "getqueueurlresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  GetQueueUrlRequest
 *
 * @brief  Implements SQS GetQueueUrl requests.
 *
 * @see    SQSClient::getQueueUrl
 */

/**
 * @brief  Constructs a new GetQueueUrlRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQueueUrlRequest::GetQueueUrlRequest(const GetQueueUrlRequest &other)
    : SQSRequest(new GetQueueUrlRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQueueUrlRequest object.
 */
GetQueueUrlRequest::GetQueueUrlRequest()
    : SQSRequest(new GetQueueUrlRequestPrivate(SQSRequest::GetQueueUrlAction, this))
{

}

bool GetQueueUrlRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQueueUrlResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQueueUrlResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * GetQueueUrlRequest::response(QNetworkReply * const reply) const
{
    return new GetQueueUrlResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQueueUrlRequestPrivate
 *
 * @brief  Private implementation for GetQueueUrlRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueUrlRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public GetQueueUrlRequest instance.
 */
GetQueueUrlRequestPrivate::GetQueueUrlRequestPrivate(
    const SQSRequest::Action action, GetQueueUrlRequest * const q)
    : GetQueueUrlPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueUrlRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQueueUrlRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQueueUrlRequest instance.
 */
GetQueueUrlRequestPrivate::GetQueueUrlRequestPrivate(
    const GetQueueUrlRequestPrivate &other, GetQueueUrlRequest * const q)
    : GetQueueUrlPrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
