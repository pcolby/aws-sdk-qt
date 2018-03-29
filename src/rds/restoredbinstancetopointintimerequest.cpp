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

#include "restoredbinstancetopointintimerequest.h"
#include "restoredbinstancetopointintimerequest_p.h"
#include "restoredbinstancetopointintimeresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  RestoreDBInstanceToPointInTimeRequest
 *
 * @brief  Implements RDS RestoreDBInstanceToPointInTime requests.
 *
 * @see    RDSClient::restoreDBInstanceToPointInTime
 */

/**
 * @brief  Constructs a new RestoreDBInstanceToPointInTimeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBInstanceToPointInTimeRequest::RestoreDBInstanceToPointInTimeRequest(const RestoreDBInstanceToPointInTimeRequest &other)
    : RDSRequest(new RestoreDBInstanceToPointInTimeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBInstanceToPointInTimeRequest object.
 */
RestoreDBInstanceToPointInTimeRequest::RestoreDBInstanceToPointInTimeRequest()
    : RDSRequest(new RestoreDBInstanceToPointInTimeRequestPrivate(RDSRequest::RestoreDBInstanceToPointInTimeAction, this))
{

}

bool RestoreDBInstanceToPointInTimeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBInstanceToPointInTimeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBInstanceToPointInTimeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDBInstanceToPointInTimeRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBInstanceToPointInTimeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBInstanceToPointInTimeRequestPrivate
 *
 * @brief  Private implementation for RestoreDBInstanceToPointInTimeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceToPointInTimeRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBInstanceToPointInTimeRequest instance.
 */
RestoreDBInstanceToPointInTimeRequestPrivate::RestoreDBInstanceToPointInTimeRequestPrivate(
    const RDSRequest::Action action, RestoreDBInstanceToPointInTimeRequest * const q)
    : RestoreDBInstanceToPointInTimePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceToPointInTimeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBInstanceToPointInTimeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBInstanceToPointInTimeRequest instance.
 */
RestoreDBInstanceToPointInTimeRequestPrivate::RestoreDBInstanceToPointInTimeRequestPrivate(
    const RestoreDBInstanceToPointInTimeRequestPrivate &other, RestoreDBInstanceToPointInTimeRequest * const q)
    : RestoreDBInstanceToPointInTimePrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
