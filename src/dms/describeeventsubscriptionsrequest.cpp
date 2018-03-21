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
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeEventSubscriptionsRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeEventSubscriptions requests.
 *
 * @see    DatabaseMigrationServiceClient::describeEventSubscriptions
 */

/**
 * @brief  Constructs a new DescribeEventSubscriptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest(const DescribeEventSubscriptionsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeEventSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventSubscriptionsRequest object.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest()
    : DatabaseMigrationServiceRequest(new DescribeEventSubscriptionsRequestPrivate(DatabaseMigrationServiceRequest::DescribeEventSubscriptionsAction, this))
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
 * @see  DatabaseMigrationServiceClient::send
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
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeEventSubscriptionsRequest instance.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeEventSubscriptionsRequest * const q)
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

} // namespace DatabaseMigrationService
} // namespace AWS
