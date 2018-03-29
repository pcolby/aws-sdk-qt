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

#include "modifydbsnapshotrequest.h"
#include "modifydbsnapshotrequest_p.h"
#include "modifydbsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyDBSnapshotRequest
 *
 * @brief  Implements RDS ModifyDBSnapshot requests.
 *
 * @see    RDSClient::modifyDBSnapshot
 */

/**
 * @brief  Constructs a new ModifyDBSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBSnapshotRequest::ModifyDBSnapshotRequest(const ModifyDBSnapshotRequest &other)
    : RDSRequest(new ModifyDBSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBSnapshotRequest object.
 */
ModifyDBSnapshotRequest::ModifyDBSnapshotRequest()
    : RDSRequest(new ModifyDBSnapshotRequestPrivate(RDSRequest::ModifyDBSnapshotAction, this))
{

}

bool ModifyDBSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBSnapshotRequestPrivate
 *
 * @brief  Private implementation for ModifyDBSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBSnapshotRequest instance.
 */
ModifyDBSnapshotRequestPrivate::ModifyDBSnapshotRequestPrivate(
    const RDSRequest::Action action, ModifyDBSnapshotRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBSnapshotRequest instance.
 */
ModifyDBSnapshotRequestPrivate::ModifyDBSnapshotRequestPrivate(
    const ModifyDBSnapshotRequestPrivate &other, ModifyDBSnapshotRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
