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

#include "describeentityaggregatesrequest.h"
#include "describeentityaggregatesrequest_p.h"
#include "describeentityaggregatesresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/**
 * @class  DescribeEntityAggregatesRequest
 *
 * @brief  Implements Health DescribeEntityAggregates requests.
 *
 * @see    HealthClient::describeEntityAggregates
 */

/**
 * @brief  Constructs a new DescribeEntityAggregatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEntityAggregatesRequest::DescribeEntityAggregatesRequest(const DescribeEntityAggregatesRequest &other)
    : HealthRequest(new DescribeEntityAggregatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEntityAggregatesRequest object.
 */
DescribeEntityAggregatesRequest::DescribeEntityAggregatesRequest()
    : HealthRequest(new DescribeEntityAggregatesRequestPrivate(HealthRequest::DescribeEntityAggregatesAction, this))
{

}

bool DescribeEntityAggregatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEntityAggregatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEntityAggregatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  HealthClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEntityAggregatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEntityAggregatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEntityAggregatesRequestPrivate
 *
 * @brief  Private implementation for DescribeEntityAggregatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEntityAggregatesRequestPrivate object.
 *
 * @param  action  Health action being performed.
 * @param  q       Pointer to this object's public DescribeEntityAggregatesRequest instance.
 */
DescribeEntityAggregatesRequestPrivate::DescribeEntityAggregatesRequestPrivate(
    const HealthRequest::Action action, DescribeEntityAggregatesRequest * const q)
    : HealthRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEntityAggregatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEntityAggregatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEntityAggregatesRequest instance.
 */
DescribeEntityAggregatesRequestPrivate::DescribeEntityAggregatesRequestPrivate(
    const DescribeEntityAggregatesRequestPrivate &other, DescribeEntityAggregatesRequest * const q)
    : HealthRequestPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws
