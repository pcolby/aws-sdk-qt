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

#include "describerefreshschemasstatusrequest.h"
#include "describerefreshschemasstatusrequest_p.h"
#include "describerefreshschemasstatusresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeRefreshSchemasStatusRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeRefreshSchemasStatus requests.
 *
 * @see    DatabaseMigrationServiceClient::describeRefreshSchemasStatus
 */

/**
 * @brief  Constructs a new DescribeRefreshSchemasStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRefreshSchemasStatusResponse::DescribeRefreshSchemasStatusResponse(

/**
 * @brief  Constructs a new DescribeRefreshSchemasStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRefreshSchemasStatusRequest::DescribeRefreshSchemasStatusRequest(const DescribeRefreshSchemasStatusRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeRefreshSchemasStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRefreshSchemasStatusRequest object.
 */
DescribeRefreshSchemasStatusRequest::DescribeRefreshSchemasStatusRequest()
    : DatabaseMigrationServiceRequest(new DescribeRefreshSchemasStatusRequestPrivate(DatabaseMigrationServiceRequest::DescribeRefreshSchemasStatusAction, this))
{

}

bool DescribeRefreshSchemasStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRefreshSchemasStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRefreshSchemasStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeRefreshSchemasStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRefreshSchemasStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRefreshSchemasStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeRefreshSchemasStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRefreshSchemasStatusRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeRefreshSchemasStatusRequest instance.
 */
DescribeRefreshSchemasStatusRequestPrivate::DescribeRefreshSchemasStatusRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeRefreshSchemasStatusRequest * const q)
    : DescribeRefreshSchemasStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRefreshSchemasStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRefreshSchemasStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRefreshSchemasStatusRequest instance.
 */
DescribeRefreshSchemasStatusRequestPrivate::DescribeRefreshSchemasStatusRequestPrivate(
    const DescribeRefreshSchemasStatusRequestPrivate &other, DescribeRefreshSchemasStatusRequest * const q)
    : DescribeRefreshSchemasStatusPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
