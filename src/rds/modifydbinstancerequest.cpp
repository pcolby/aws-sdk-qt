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

#include "modifydbinstancerequest.h"
#include "modifydbinstancerequest_p.h"
#include "modifydbinstanceresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyDBInstanceRequest
 *
 * @brief  Implements RDS ModifyDBInstance requests.
 *
 * @see    RDSClient::modifyDBInstance
 */

/**
 * @brief  Constructs a new ModifyDBInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest(const ModifyDBInstanceRequest &other)
    : RDSRequest(new ModifyDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBInstanceRequest object.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest()
    : RDSRequest(new ModifyDBInstanceRequestPrivate(RDSRequest::ModifyDBInstanceAction, this))
{

}

bool ModifyDBInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBInstanceRequestPrivate
 *
 * @brief  Private implementation for ModifyDBInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBInstanceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBInstanceRequest instance.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const RDSRequest::Action action, ModifyDBInstanceRequest * const q)
    : ModifyDBInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBInstanceRequest instance.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const ModifyDBInstanceRequestPrivate &other, ModifyDBInstanceRequest * const q)
    : ModifyDBInstancePrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
