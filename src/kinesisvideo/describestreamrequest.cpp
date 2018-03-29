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

#include "describestreamrequest.h"
#include "describestreamrequest_p.h"
#include "describestreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/**
 * @class  DescribeStreamRequest
 *
 * @brief  Implements KinesisVideo DescribeStream requests.
 *
 * @see    KinesisVideoClient::describeStream
 */

/**
 * @brief  Constructs a new DescribeStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStreamRequest::DescribeStreamRequest(const DescribeStreamRequest &other)
    : KinesisVideoRequest(new DescribeStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStreamRequest object.
 */
DescribeStreamRequest::DescribeStreamRequest()
    : KinesisVideoRequest(new DescribeStreamRequestPrivate(KinesisVideoRequest::DescribeStreamAction, this))
{

}

bool DescribeStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStreamRequestPrivate
 *
 * @brief  Private implementation for DescribeStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public DescribeStreamRequest instance.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const KinesisVideoRequest::Action action, DescribeStreamRequest * const q)
    : DescribeStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStreamRequest instance.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DescribeStreamRequestPrivate &other, DescribeStreamRequest * const q)
    : DescribeStreamPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
