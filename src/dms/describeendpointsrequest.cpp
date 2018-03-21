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

#include "describeendpointsrequest.h"
#include "describeendpointsrequest_p.h"
#include "describeendpointsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeEndpointsRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeEndpoints requests.
 *
 * @see    DatabaseMigrationServiceClient::describeEndpoints
 */

/**
 * @brief  Constructs a new DescribeEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEndpointsResponse::DescribeEndpointsResponse(

/**
 * @brief  Constructs a new DescribeEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest(const DescribeEndpointsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeEndpointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEndpointsRequest object.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest()
    : DatabaseMigrationServiceRequest(new DescribeEndpointsRequestPrivate(DatabaseMigrationServiceRequest::DescribeEndpointsAction, this))
{

}

bool DescribeEndpointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEndpointsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEndpointsRequestPrivate
 *
 * @brief  Private implementation for DescribeEndpointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointsRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeEndpointsRequest instance.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeEndpointsRequest * const q)
    : DescribeEndpointsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEndpointsRequest instance.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const DescribeEndpointsRequestPrivate &other, DescribeEndpointsRequest * const q)
    : DescribeEndpointsPrivate(other, q)
{

}
