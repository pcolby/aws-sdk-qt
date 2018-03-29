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

#include "describeaffectedentitiesrequest.h"
#include "describeaffectedentitiesrequest_p.h"
#include "describeaffectedentitiesresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/**
 * @class  DescribeAffectedEntitiesRequest
 *
 * @brief  Implements Health DescribeAffectedEntities requests.
 *
 * @see    HealthClient::describeAffectedEntities
 */

/**
 * @brief  Constructs a new DescribeAffectedEntitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAffectedEntitiesRequest::DescribeAffectedEntitiesRequest(const DescribeAffectedEntitiesRequest &other)
    : HealthRequest(new DescribeAffectedEntitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAffectedEntitiesRequest object.
 */
DescribeAffectedEntitiesRequest::DescribeAffectedEntitiesRequest()
    : HealthRequest(new DescribeAffectedEntitiesRequestPrivate(HealthRequest::DescribeAffectedEntitiesAction, this))
{

}

bool DescribeAffectedEntitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAffectedEntitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAffectedEntitiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  HealthClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAffectedEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAffectedEntitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAffectedEntitiesRequestPrivate
 *
 * @brief  Private implementation for DescribeAffectedEntitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAffectedEntitiesRequestPrivate object.
 *
 * @param  action  Health action being performed.
 * @param  q       Pointer to this object's public DescribeAffectedEntitiesRequest instance.
 */
DescribeAffectedEntitiesRequestPrivate::DescribeAffectedEntitiesRequestPrivate(
    const HealthRequest::Action action, DescribeAffectedEntitiesRequest * const q)
    : DescribeAffectedEntitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAffectedEntitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAffectedEntitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAffectedEntitiesRequest instance.
 */
DescribeAffectedEntitiesRequestPrivate::DescribeAffectedEntitiesRequestPrivate(
    const DescribeAffectedEntitiesRequestPrivate &other, DescribeAffectedEntitiesRequest * const q)
    : DescribeAffectedEntitiesPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws
