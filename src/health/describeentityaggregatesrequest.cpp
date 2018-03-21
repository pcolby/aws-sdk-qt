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

#include "describeentityaggregatesrequest.h"
#include "describeentityaggregatesrequest_p.h"
#include "describeentityaggregatesresponse.h"
#include "healthrequest_p.h"

namespace AWS {
namespace Health {

/**
 * @class  DescribeEntityAggregatesRequest
 *
 * @brief  Implements Health DescribeEntityAggregates requests.
 *
 * @see    HealthClient::describeEntityAggregates
 */

/**
 * @brief  Constructs a new DescribeEntityAggregatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEntityAggregatesResponse::DescribeEntityAggregatesResponse(

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
 * @see  AwsAbstractClient::send
 * @see  HealthClient::send
 */
AwsAbstractResponse * DescribeEntityAggregatesRequest::response(QNetworkReply * const reply) const
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
    : DescribeEntityAggregatesPrivate(action, q)
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
    : DescribeEntityAggregatesPrivate(other, q)
{

}
