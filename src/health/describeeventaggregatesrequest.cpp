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

#include "describeeventaggregatesrequest.h"
#include "describeeventaggregatesrequest_p.h"
#include "describeeventaggregatesresponse.h"
#include "healthrequest_p.h"

namespace AWS {
namespace Health {

/**
 * @class  DescribeEventAggregatesRequest
 *
 * @brief  Implements Health DescribeEventAggregates requests.
 *
 * @see    HealthClient::describeEventAggregates
 */

/**
 * @brief  Constructs a new DescribeEventAggregatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventAggregatesRequest::DescribeEventAggregatesRequest(const DescribeEventAggregatesRequest &other)
    : HealthRequest(new DescribeEventAggregatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventAggregatesRequest object.
 */
DescribeEventAggregatesRequest::DescribeEventAggregatesRequest()
    : HealthRequest(new DescribeEventAggregatesRequestPrivate(HealthRequest::DescribeEventAggregatesAction, this))
{

}

bool DescribeEventAggregatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventAggregatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventAggregatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  HealthClient::send
 */
AwsAbstractResponse * DescribeEventAggregatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventAggregatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventAggregatesRequestPrivate
 *
 * @brief  Private implementation for DescribeEventAggregatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventAggregatesRequestPrivate object.
 *
 * @param  action  Health action being performed.
 * @param  q       Pointer to this object's public DescribeEventAggregatesRequest instance.
 */
DescribeEventAggregatesRequestPrivate::DescribeEventAggregatesRequestPrivate(
    const HealthRequest::Action action, DescribeEventAggregatesRequest * const q)
    : DescribeEventAggregatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventAggregatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventAggregatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventAggregatesRequest instance.
 */
DescribeEventAggregatesRequestPrivate::DescribeEventAggregatesRequestPrivate(
    const DescribeEventAggregatesRequestPrivate &other, DescribeEventAggregatesRequest * const q)
    : DescribeEventAggregatesPrivate(other, q)
{

}

} // namespace Health
} // namespace AWS
