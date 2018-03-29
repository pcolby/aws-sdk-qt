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

#include "modifydbclustersnapshotattributerequest.h"
#include "modifydbclustersnapshotattributerequest_p.h"
#include "modifydbclustersnapshotattributeresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyDBClusterSnapshotAttributeRequest
 *
 * @brief  Implements RDS ModifyDBClusterSnapshotAttribute requests.
 *
 * @see    RDSClient::modifyDBClusterSnapshotAttribute
 */

/**
 * @brief  Constructs a new ModifyDBClusterSnapshotAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest(const ModifyDBClusterSnapshotAttributeRequest &other)
    : RDSRequest(new ModifyDBClusterSnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBClusterSnapshotAttributeRequest object.
 */
ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest()
    : RDSRequest(new ModifyDBClusterSnapshotAttributeRequestPrivate(RDSRequest::ModifyDBClusterSnapshotAttributeAction, this))
{

}

bool ModifyDBClusterSnapshotAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBClusterSnapshotAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBClusterSnapshotAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyDBClusterSnapshotAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterSnapshotAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBClusterSnapshotAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyDBClusterSnapshotAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterSnapshotAttributeRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBClusterSnapshotAttributeRequest instance.
 */
ModifyDBClusterSnapshotAttributeRequestPrivate::ModifyDBClusterSnapshotAttributeRequestPrivate(
    const RDSRequest::Action action, ModifyDBClusterSnapshotAttributeRequest * const q)
    : ModifyDBClusterSnapshotAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterSnapshotAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterSnapshotAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBClusterSnapshotAttributeRequest instance.
 */
ModifyDBClusterSnapshotAttributeRequestPrivate::ModifyDBClusterSnapshotAttributeRequestPrivate(
    const ModifyDBClusterSnapshotAttributeRequestPrivate &other, ModifyDBClusterSnapshotAttributeRequest * const q)
    : ModifyDBClusterSnapshotAttributePrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
