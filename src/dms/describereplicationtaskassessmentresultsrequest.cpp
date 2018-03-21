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

#include "describereplicationtaskassessmentresultsrequest.h"
#include "describereplicationtaskassessmentresultsrequest_p.h"
#include "describereplicationtaskassessmentresultsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationTaskAssessmentResultsRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeReplicationTaskAssessmentResults requests.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationTaskAssessmentResults
 */

/**
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReplicationTaskAssessmentResultsRequest::DescribeReplicationTaskAssessmentResultsRequest(const DescribeReplicationTaskAssessmentResultsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeReplicationTaskAssessmentResultsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsRequest object.
 */
DescribeReplicationTaskAssessmentResultsRequest::DescribeReplicationTaskAssessmentResultsRequest()
    : DatabaseMigrationServiceRequest(new DescribeReplicationTaskAssessmentResultsRequestPrivate(DatabaseMigrationServiceRequest::DescribeReplicationTaskAssessmentResultsAction, this))
{

}

bool DescribeReplicationTaskAssessmentResultsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReplicationTaskAssessmentResultsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReplicationTaskAssessmentResultsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeReplicationTaskAssessmentResultsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationTaskAssessmentResultsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReplicationTaskAssessmentResultsRequestPrivate
 *
 * @brief  Private implementation for DescribeReplicationTaskAssessmentResultsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeReplicationTaskAssessmentResultsRequest instance.
 */
DescribeReplicationTaskAssessmentResultsRequestPrivate::DescribeReplicationTaskAssessmentResultsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeReplicationTaskAssessmentResultsRequest * const q)
    : DescribeReplicationTaskAssessmentResultsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationTaskAssessmentResultsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReplicationTaskAssessmentResultsRequest instance.
 */
DescribeReplicationTaskAssessmentResultsRequestPrivate::DescribeReplicationTaskAssessmentResultsRequestPrivate(
    const DescribeReplicationTaskAssessmentResultsRequestPrivate &other, DescribeReplicationTaskAssessmentResultsRequest * const q)
    : DescribeReplicationTaskAssessmentResultsPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
