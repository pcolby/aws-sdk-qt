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

#include "describeeventdetailsrequest.h"
#include "describeeventdetailsrequest_p.h"
#include "describeeventdetailsresponse.h"
#include "healthrequest_p.h"

namespace AWS {
namespace Health {

/**
 * @class  DescribeEventDetailsRequest
 *
 * @brief  Implements Health DescribeEventDetails requests.
 *
 * @see    HealthClient::describeEventDetails
 */

/**
 * @brief  Constructs a new DescribeEventDetailsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventDetailsResponse::DescribeEventDetailsResponse(

/**
 * @brief  Constructs a new DescribeEventDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventDetailsRequest::DescribeEventDetailsRequest(const DescribeEventDetailsRequest &other)
    : HealthRequest(new DescribeEventDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventDetailsRequest object.
 */
DescribeEventDetailsRequest::DescribeEventDetailsRequest()
    : HealthRequest(new DescribeEventDetailsRequestPrivate(HealthRequest::DescribeEventDetailsAction, this))
{

}

bool DescribeEventDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventDetailsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  HealthClient::send
 */
AwsAbstractResponse * DescribeEventDetailsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventDetailsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventDetailsRequestPrivate object.
 *
 * @param  action  Health action being performed.
 * @param  q       Pointer to this object's public DescribeEventDetailsRequest instance.
 */
DescribeEventDetailsRequestPrivate::DescribeEventDetailsRequestPrivate(
    const HealthRequest::Action action, DescribeEventDetailsRequest * const q)
    : DescribeEventDetailsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventDetailsRequest instance.
 */
DescribeEventDetailsRequestPrivate::DescribeEventDetailsRequestPrivate(
    const DescribeEventDetailsRequestPrivate &other, DescribeEventDetailsRequest * const q)
    : DescribeEventDetailsPrivate(other, q)
{

}

} // namespace Health
} // namespace AWS
