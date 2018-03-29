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

#include "createsnapshotfromvolumerecoverypointrequest.h"
#include "createsnapshotfromvolumerecoverypointrequest_p.h"
#include "createsnapshotfromvolumerecoverypointresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateSnapshotFromVolumeRecoveryPointRequest
 *
 * @brief  Implements StorageGateway CreateSnapshotFromVolumeRecoveryPoint requests.
 *
 * @see    StorageGatewayClient::createSnapshotFromVolumeRecoveryPoint
 */

/**
 * @brief  Constructs a new CreateSnapshotFromVolumeRecoveryPointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSnapshotFromVolumeRecoveryPointRequest::CreateSnapshotFromVolumeRecoveryPointRequest(const CreateSnapshotFromVolumeRecoveryPointRequest &other)
    : StorageGatewayRequest(new CreateSnapshotFromVolumeRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSnapshotFromVolumeRecoveryPointRequest object.
 */
CreateSnapshotFromVolumeRecoveryPointRequest::CreateSnapshotFromVolumeRecoveryPointRequest()
    : StorageGatewayRequest(new CreateSnapshotFromVolumeRecoveryPointRequestPrivate(StorageGatewayRequest::CreateSnapshotFromVolumeRecoveryPointAction, this))
{

}

bool CreateSnapshotFromVolumeRecoveryPointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSnapshotFromVolumeRecoveryPointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSnapshotFromVolumeRecoveryPointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * CreateSnapshotFromVolumeRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotFromVolumeRecoveryPointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSnapshotFromVolumeRecoveryPointRequestPrivate
 *
 * @brief  Private implementation for CreateSnapshotFromVolumeRecoveryPointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotFromVolumeRecoveryPointRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CreateSnapshotFromVolumeRecoveryPointRequest instance.
 */
CreateSnapshotFromVolumeRecoveryPointRequestPrivate::CreateSnapshotFromVolumeRecoveryPointRequestPrivate(
    const StorageGatewayRequest::Action action, CreateSnapshotFromVolumeRecoveryPointRequest * const q)
    : CreateSnapshotFromVolumeRecoveryPointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotFromVolumeRecoveryPointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotFromVolumeRecoveryPointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSnapshotFromVolumeRecoveryPointRequest instance.
 */
CreateSnapshotFromVolumeRecoveryPointRequestPrivate::CreateSnapshotFromVolumeRecoveryPointRequestPrivate(
    const CreateSnapshotFromVolumeRecoveryPointRequestPrivate &other, CreateSnapshotFromVolumeRecoveryPointRequest * const q)
    : CreateSnapshotFromVolumeRecoveryPointPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
