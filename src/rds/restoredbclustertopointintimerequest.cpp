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

#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimerequest_p.h"
#include "restoredbclustertopointintimeresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBClusterToPointInTimeRequest
 *
 * @brief  Implements RDS RestoreDBClusterToPointInTime requests.
 *
 * @see    RDSClient::restoreDBClusterToPointInTime
 */

/**
 * @brief  Constructs a new RestoreDBClusterToPointInTimeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest(const RestoreDBClusterToPointInTimeRequest &other)
    : RDSRequest(new RestoreDBClusterToPointInTimeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBClusterToPointInTimeRequest object.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest()
    : RDSRequest(new RestoreDBClusterToPointInTimeRequestPrivate(RDSRequest::RestoreDBClusterToPointInTimeAction, this))
{

}

bool RestoreDBClusterToPointInTimeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBClusterToPointInTimeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBClusterToPointInTimeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RestoreDBClusterToPointInTimeRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterToPointInTimeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBClusterToPointInTimeRequestPrivate
 *
 * @brief  Private implementation for RestoreDBClusterToPointInTimeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterToPointInTimeRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBClusterToPointInTimeRequest instance.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const RDSRequest::Action action, RestoreDBClusterToPointInTimeRequest * const q)
    : RestoreDBClusterToPointInTimePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterToPointInTimeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterToPointInTimeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBClusterToPointInTimeRequest instance.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const RestoreDBClusterToPointInTimeRequestPrivate &other, RestoreDBClusterToPointInTimeRequest * const q)
    : RestoreDBClusterToPointInTimePrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
