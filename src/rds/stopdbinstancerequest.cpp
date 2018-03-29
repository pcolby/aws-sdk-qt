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

#include "stopdbinstancerequest.h"
#include "stopdbinstancerequest_p.h"
#include "stopdbinstanceresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  StopDBInstanceRequest
 *
 * @brief  Implements RDS StopDBInstance requests.
 *
 * @see    RDSClient::stopDBInstance
 */

/**
 * @brief  Constructs a new StopDBInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopDBInstanceRequest::StopDBInstanceRequest(const StopDBInstanceRequest &other)
    : RDSRequest(new StopDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopDBInstanceRequest object.
 */
StopDBInstanceRequest::StopDBInstanceRequest()
    : RDSRequest(new StopDBInstanceRequestPrivate(RDSRequest::StopDBInstanceAction, this))
{

}

bool StopDBInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopDBInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopDBInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * StopDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StopDBInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopDBInstanceRequestPrivate
 *
 * @brief  Private implementation for StopDBInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopDBInstanceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public StopDBInstanceRequest instance.
 */
StopDBInstanceRequestPrivate::StopDBInstanceRequestPrivate(
    const RDSRequest::Action action, StopDBInstanceRequest * const q)
    : StopDBInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopDBInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopDBInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopDBInstanceRequest instance.
 */
StopDBInstanceRequestPrivate::StopDBInstanceRequestPrivate(
    const StopDBInstanceRequestPrivate &other, StopDBInstanceRequest * const q)
    : StopDBInstancePrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
