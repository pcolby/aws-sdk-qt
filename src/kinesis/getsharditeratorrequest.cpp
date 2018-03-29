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

#include "getsharditeratorrequest.h"
#include "getsharditeratorrequest_p.h"
#include "getsharditeratorresponse.h"
#include "kinesisrequest_p.h"

namespace AWS {
namespace Kinesis {

/**
 * @class  GetShardIteratorRequest
 *
 * @brief  Implements Kinesis GetShardIterator requests.
 *
 * @see    KinesisClient::getShardIterator
 */

/**
 * @brief  Constructs a new GetShardIteratorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetShardIteratorRequest::GetShardIteratorRequest(const GetShardIteratorRequest &other)
    : KinesisRequest(new GetShardIteratorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetShardIteratorRequest object.
 */
GetShardIteratorRequest::GetShardIteratorRequest()
    : KinesisRequest(new GetShardIteratorRequestPrivate(KinesisRequest::GetShardIteratorAction, this))
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
 * @see  KinesisClient::send
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
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public GetShardIteratorRequest instance.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const KinesisRequest::Action action, GetShardIteratorRequest * const q)
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

} // namespace Kinesis
} // namespace AWS
