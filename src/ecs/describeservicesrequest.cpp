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

#include "describeservicesrequest.h"
#include "describeservicesrequest_p.h"
#include "describeservicesresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  DescribeServicesRequest
 *
 * @brief  Implements ECS DescribeServices requests.
 *
 * @see    ECSClient::describeServices
 */

/**
 * @brief  Constructs a new DescribeServicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeServicesRequest::DescribeServicesRequest(const DescribeServicesRequest &other)
    : ECSRequest(new DescribeServicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeServicesRequest object.
 */
DescribeServicesRequest::DescribeServicesRequest()
    : ECSRequest(new DescribeServicesRequestPrivate(ECSRequest::DescribeServicesAction, this))
{

}

bool DescribeServicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeServicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeServicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * DescribeServicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeServicesRequestPrivate
 *
 * @brief  Private implementation for DescribeServicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServicesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DescribeServicesRequest instance.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const ECSRequest::Action action, DescribeServicesRequest * const q)
    : DescribeServicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeServicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeServicesRequest instance.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const DescribeServicesRequestPrivate &other, DescribeServicesRequest * const q)
    : DescribeServicesPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
