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

#include "describeactivitytyperequest.h"
#include "describeactivitytyperequest_p.h"
#include "describeactivitytyperesponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  DescribeActivityTypeRequest
 *
 * @brief  Implements SWF DescribeActivityType requests.
 *
 * @see    SWFClient::describeActivityType
 */

/**
 * @brief  Constructs a new DescribeActivityTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeActivityTypeRequest::DescribeActivityTypeRequest(const DescribeActivityTypeRequest &other)
    : SWFRequest(new DescribeActivityTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeActivityTypeRequest object.
 */
DescribeActivityTypeRequest::DescribeActivityTypeRequest()
    : SWFRequest(new DescribeActivityTypeRequestPrivate(SWFRequest::DescribeActivityTypeAction, this))
{

}

bool DescribeActivityTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeActivityTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeActivityTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * DescribeActivityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActivityTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeActivityTypeRequestPrivate
 *
 * @brief  Private implementation for DescribeActivityTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivityTypeRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public DescribeActivityTypeRequest instance.
 */
DescribeActivityTypeRequestPrivate::DescribeActivityTypeRequestPrivate(
    const SWFRequest::Action action, DescribeActivityTypeRequest * const q)
    : DescribeActivityTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivityTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeActivityTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeActivityTypeRequest instance.
 */
DescribeActivityTypeRequestPrivate::DescribeActivityTypeRequestPrivate(
    const DescribeActivityTypeRequestPrivate &other, DescribeActivityTypeRequest * const q)
    : DescribeActivityTypePrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
