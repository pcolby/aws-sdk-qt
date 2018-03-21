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

#include "startdbinstancerequest.h"
#include "startdbinstancerequest_p.h"
#include "startdbinstanceresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  StartDBInstanceRequest
 *
 * @brief  Implements RDS StartDBInstance requests.
 *
 * @see    RDSClient::startDBInstance
 */

/**
 * @brief  Constructs a new StartDBInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartDBInstanceRequest::StartDBInstanceRequest(const StartDBInstanceRequest &other)
    : RDSRequest(new StartDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartDBInstanceRequest object.
 */
StartDBInstanceRequest::StartDBInstanceRequest()
    : RDSRequest(new StartDBInstanceRequestPrivate(RDSRequest::StartDBInstanceAction, this))
{

}

bool StartDBInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartDBInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartDBInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * StartDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartDBInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartDBInstanceRequestPrivate
 *
 * @brief  Private implementation for StartDBInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartDBInstanceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public StartDBInstanceRequest instance.
 */
StartDBInstanceRequestPrivate::StartDBInstanceRequestPrivate(
    const RDSRequest::Action action, StartDBInstanceRequest * const q)
    : StartDBInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartDBInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartDBInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartDBInstanceRequest instance.
 */
StartDBInstanceRequestPrivate::StartDBInstanceRequestPrivate(
    const StartDBInstanceRequestPrivate &other, StartDBInstanceRequest * const q)
    : StartDBInstancePrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
