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

#include "modifydbsnapshotattributerequest.h"
#include "modifydbsnapshotattributerequest_p.h"
#include "modifydbsnapshotattributeresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBSnapshotAttributeRequest
 *
 * @brief  Implements RDS ModifyDBSnapshotAttribute requests.
 *
 * @see    RDSClient::modifyDBSnapshotAttribute
 */

/**
 * @brief  Constructs a new ModifyDBSnapshotAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBSnapshotAttributeResponse::ModifyDBSnapshotAttributeResponse(

/**
 * @brief  Constructs a new ModifyDBSnapshotAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBSnapshotAttributeRequest::ModifyDBSnapshotAttributeRequest(const ModifyDBSnapshotAttributeRequest &other)
    : RDSRequest(new ModifyDBSnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBSnapshotAttributeRequest object.
 */
ModifyDBSnapshotAttributeRequest::ModifyDBSnapshotAttributeRequest()
    : RDSRequest(new ModifyDBSnapshotAttributeRequestPrivate(RDSRequest::ModifyDBSnapshotAttributeAction, this))
{

}

bool ModifyDBSnapshotAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBSnapshotAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBSnapshotAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyDBSnapshotAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBSnapshotAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBSnapshotAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyDBSnapshotAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSnapshotAttributeRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBSnapshotAttributeRequest instance.
 */
ModifyDBSnapshotAttributeRequestPrivate::ModifyDBSnapshotAttributeRequestPrivate(
    const RDSRequest::Action action, ModifyDBSnapshotAttributeRequest * const q)
    : ModifyDBSnapshotAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSnapshotAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBSnapshotAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBSnapshotAttributeRequest instance.
 */
ModifyDBSnapshotAttributeRequestPrivate::ModifyDBSnapshotAttributeRequestPrivate(
    const ModifyDBSnapshotAttributeRequestPrivate &other, ModifyDBSnapshotAttributeRequest * const q)
    : ModifyDBSnapshotAttributePrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
