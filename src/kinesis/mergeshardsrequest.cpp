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

#include "mergeshardsrequest.h"
#include "mergeshardsrequest_p.h"
#include "mergeshardsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/**
 * @class  MergeShardsRequest
 *
 * @brief  Implements Kinesis MergeShards requests.
 *
 * @see    KinesisClient::mergeShards
 */

/**
 * @brief  Constructs a new MergeShardsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MergeShardsRequest::MergeShardsRequest(const MergeShardsRequest &other)
    : KinesisRequest(new MergeShardsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MergeShardsRequest object.
 */
MergeShardsRequest::MergeShardsRequest()
    : KinesisRequest(new MergeShardsRequestPrivate(KinesisRequest::MergeShardsAction, this))
{

}

bool MergeShardsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MergeShardsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MergeShardsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * MergeShardsRequest::response(QNetworkReply * const reply) const
{
    return new MergeShardsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MergeShardsRequestPrivate
 *
 * @brief  Private implementation for MergeShardsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MergeShardsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public MergeShardsRequest instance.
 */
MergeShardsRequestPrivate::MergeShardsRequestPrivate(
    const KinesisRequest::Action action, MergeShardsRequest * const q)
    : MergeShardsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MergeShardsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MergeShardsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MergeShardsRequest instance.
 */
MergeShardsRequestPrivate::MergeShardsRequestPrivate(
    const MergeShardsRequestPrivate &other, MergeShardsRequest * const q)
    : MergeShardsPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
