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

#include "describedeliverystreamrequest.h"
#include "describedeliverystreamrequest_p.h"
#include "describedeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/**
 * @class  DescribeDeliveryStreamRequest
 *
 * @brief  Implements Firehose DescribeDeliveryStream requests.
 *
 * @see    FirehoseClient::describeDeliveryStream
 */

/**
 * @brief  Constructs a new DescribeDeliveryStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDeliveryStreamRequest::DescribeDeliveryStreamRequest(const DescribeDeliveryStreamRequest &other)
    : FirehoseRequest(new DescribeDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDeliveryStreamRequest object.
 */
DescribeDeliveryStreamRequest::DescribeDeliveryStreamRequest()
    : FirehoseRequest(new DescribeDeliveryStreamRequestPrivate(FirehoseRequest::DescribeDeliveryStreamAction, this))
{

}

bool DescribeDeliveryStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDeliveryStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDeliveryStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeliveryStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDeliveryStreamRequestPrivate
 *
 * @brief  Private implementation for DescribeDeliveryStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryStreamRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public DescribeDeliveryStreamRequest instance.
 */
DescribeDeliveryStreamRequestPrivate::DescribeDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, DescribeDeliveryStreamRequest * const q)
    : DescribeDeliveryStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeliveryStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDeliveryStreamRequest instance.
 */
DescribeDeliveryStreamRequestPrivate::DescribeDeliveryStreamRequestPrivate(
    const DescribeDeliveryStreamRequestPrivate &other, DescribeDeliveryStreamRequest * const q)
    : DescribeDeliveryStreamPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
