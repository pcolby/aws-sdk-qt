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

#include "deletedbinstancerequest.h"
#include "deletedbinstancerequest_p.h"
#include "deletedbinstanceresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBInstanceRequest
 *
 * @brief  Implements RDS DeleteDBInstance requests.
 *
 * @see    RDSClient::deleteDBInstance
 */

/**
 * @brief  Constructs a new DeleteDBInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBInstanceRequest::DeleteDBInstanceRequest(const DeleteDBInstanceRequest &other)
    : RDSRequest(new DeleteDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBInstanceRequest object.
 */
DeleteDBInstanceRequest::DeleteDBInstanceRequest()
    : RDSRequest(new DeleteDBInstanceRequestPrivate(RDSRequest::DeleteDBInstanceAction, this))
{

}

bool DeleteDBInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DeleteDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBInstanceRequestPrivate
 *
 * @brief  Private implementation for DeleteDBInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBInstanceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBInstanceRequest instance.
 */
DeleteDBInstanceRequestPrivate::DeleteDBInstanceRequestPrivate(
    const RDSRequest::Action action, DeleteDBInstanceRequest * const q)
    : DeleteDBInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBInstanceRequest instance.
 */
DeleteDBInstanceRequestPrivate::DeleteDBInstanceRequestPrivate(
    const DeleteDBInstanceRequestPrivate &other, DeleteDBInstanceRequest * const q)
    : DeleteDBInstancePrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
