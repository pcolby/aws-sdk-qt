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

#include "getrecordsrequest.h"
#include "getrecordsrequest_p.h"
#include "getrecordsresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace AWS {
namespace DynamoDBStreams {

/**
 * @class  GetRecordsRequest
 *
 * @brief  Implements DynamoDBStreams GetRecords requests.
 *
 * @see    DynamoDBStreamsClient::getRecords
 */

/**
 * @brief  Constructs a new GetRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRecordsRequest::GetRecordsRequest(const GetRecordsRequest &other)
    : DynamoDBStreamsRequest(new GetRecordsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRecordsRequest object.
 */
GetRecordsRequest::GetRecordsRequest()
    : DynamoDBStreamsRequest(new GetRecordsRequestPrivate(DynamoDBStreamsRequest::GetRecordsAction, this))
{

}

bool GetRecordsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRecordsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBStreamsClient::send
 */
AwsAbstractResponse * GetRecordsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecordsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRecordsRequestPrivate
 *
 * @brief  Private implementation for GetRecordsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRecordsRequestPrivate object.
 *
 * @param  action  DynamoDBStreams action being performed.
 * @param  q       Pointer to this object's public GetRecordsRequest instance.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const DynamoDBStreamsRequest::Action action, GetRecordsRequest * const q)
    : GetRecordsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRecordsRequest instance.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const GetRecordsRequestPrivate &other, GetRecordsRequest * const q)
    : GetRecordsPrivate(other, q)
{

}

} // namespace DynamoDBStreams
} // namespace AWS
