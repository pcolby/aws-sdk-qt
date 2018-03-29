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

#include "describeeventtypesrequest.h"
#include "describeeventtypesrequest_p.h"
#include "describeeventtypesresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/**
 * @class  DescribeEventTypesRequest
 *
 * @brief  Implements Health DescribeEventTypes requests.
 *
 * @see    HealthClient::describeEventTypes
 */

/**
 * @brief  Constructs a new DescribeEventTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventTypesRequest::DescribeEventTypesRequest(const DescribeEventTypesRequest &other)
    : HealthRequest(new DescribeEventTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventTypesRequest object.
 */
DescribeEventTypesRequest::DescribeEventTypesRequest()
    : HealthRequest(new DescribeEventTypesRequestPrivate(HealthRequest::DescribeEventTypesAction, this))
{

}

bool DescribeEventTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventTypesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  HealthClient::send
 */
AwsAbstractResponse * DescribeEventTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventTypesRequestPrivate
 *
 * @brief  Private implementation for DescribeEventTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventTypesRequestPrivate object.
 *
 * @param  action  Health action being performed.
 * @param  q       Pointer to this object's public DescribeEventTypesRequest instance.
 */
DescribeEventTypesRequestPrivate::DescribeEventTypesRequestPrivate(
    const HealthRequest::Action action, DescribeEventTypesRequest * const q)
    : DescribeEventTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventTypesRequest instance.
 */
DescribeEventTypesRequestPrivate::DescribeEventTypesRequestPrivate(
    const DescribeEventTypesRequestPrivate &other, DescribeEventTypesRequest * const q)
    : DescribeEventTypesPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws
