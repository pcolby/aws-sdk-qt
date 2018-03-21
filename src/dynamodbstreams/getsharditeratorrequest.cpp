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

#include "getsharditeratorrequest.h"
#include "getsharditeratorrequest_p.h"
#include "getsharditeratorresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace AWS {
namespace DynamoDBStreams {

/**
 * @class  GetShardIteratorRequest
 *
 * @brief  Implements DynamoDBStreams GetShardIterator requests.
 *
 * @see    DynamoDBStreamsClient::getShardIterator
 */

/**
 * @brief  Constructs a new GetShardIteratorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetShardIteratorResponse::GetShardIteratorResponse(

/**
 * @brief  Constructs a new GetShardIteratorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetShardIteratorRequest::GetShardIteratorRequest(const GetShardIteratorRequest &other)
    : DynamoDBStreamsRequest(new GetShardIteratorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetShardIteratorRequest object.
 */
GetShardIteratorRequest::GetShardIteratorRequest()
    : DynamoDBStreamsRequest(new GetShardIteratorRequestPrivate(DynamoDBStreamsRequest::GetShardIteratorAction, this))
{

}

bool GetShardIteratorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetShardIteratorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetShardIteratorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBStreamsClient::send
 */
AwsAbstractResponse * GetShardIteratorRequest::response(QNetworkReply * const reply) const
{
    return new GetShardIteratorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetShardIteratorRequestPrivate
 *
 * @brief  Private implementation for GetShardIteratorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetShardIteratorRequestPrivate object.
 *
 * @param  action  DynamoDBStreams action being performed.
 * @param  q       Pointer to this object's public GetShardIteratorRequest instance.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const DynamoDBStreamsRequest::Action action, GetShardIteratorRequest * const q)
    : GetShardIteratorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetShardIteratorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetShardIteratorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetShardIteratorRequest instance.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const GetShardIteratorRequestPrivate &other, GetShardIteratorRequest * const q)
    : GetShardIteratorPrivate(other, q)
{

}

} // namespace DynamoDBStreams
} // namespace AWS
