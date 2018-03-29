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

#include "describetablestatisticsrequest.h"
#include "describetablestatisticsrequest_p.h"
#include "describetablestatisticsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeTableStatisticsRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeTableStatistics requests.
 *
 * @see    DatabaseMigrationServiceClient::describeTableStatistics
 */

/**
 * @brief  Constructs a new DescribeTableStatisticsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTableStatisticsRequest::DescribeTableStatisticsRequest(const DescribeTableStatisticsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeTableStatisticsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTableStatisticsRequest object.
 */
DescribeTableStatisticsRequest::DescribeTableStatisticsRequest()
    : DatabaseMigrationServiceRequest(new DescribeTableStatisticsRequestPrivate(DatabaseMigrationServiceRequest::DescribeTableStatisticsAction, this))
{

}

bool DescribeTableStatisticsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTableStatisticsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTableStatisticsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTableStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableStatisticsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTableStatisticsRequestPrivate
 *
 * @brief  Private implementation for DescribeTableStatisticsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableStatisticsRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeTableStatisticsRequest instance.
 */
DescribeTableStatisticsRequestPrivate::DescribeTableStatisticsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeTableStatisticsRequest * const q)
    : DescribeTableStatisticsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableStatisticsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableStatisticsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTableStatisticsRequest instance.
 */
DescribeTableStatisticsRequestPrivate::DescribeTableStatisticsRequestPrivate(
    const DescribeTableStatisticsRequestPrivate &other, DescribeTableStatisticsRequest * const q)
    : DescribeTableStatisticsPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
