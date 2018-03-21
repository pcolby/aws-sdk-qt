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

#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsrequest_p.h"
#include "describeeventsubscriptionsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeEventSubscriptionsRequest
 *
 * @brief  Implements RDS DescribeEventSubscriptions requests.
 *
 * @see    RDSClient::describeEventSubscriptions
 */

/**
 * @brief  Constructs a new DescribeEventSubscriptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventSubscriptionsResponse::DescribeEventSubscriptionsResponse(

/**
 * @brief  Constructs a new DescribeEventSubscriptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest(const DescribeEventSubscriptionsRequest &other)
    : RDSRequest(new DescribeEventSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventSubscriptionsRequest object.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest()
    : RDSRequest(new DescribeEventSubscriptionsRequestPrivate(RDSRequest::DescribeEventSubscriptionsAction, this))
{

}

bool DescribeEventSubscriptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventSubscriptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventSubscriptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeEventSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventSubscriptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventSubscriptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventSubscriptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventSubscriptionsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeEventSubscriptionsRequest instance.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const RDSRequest::Action action, DescribeEventSubscriptionsRequest * const q)
    : DescribeEventSubscriptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventSubscriptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventSubscriptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventSubscriptionsRequest instance.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const DescribeEventSubscriptionsRequestPrivate &other, DescribeEventSubscriptionsRequest * const q)
    : DescribeEventSubscriptionsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
