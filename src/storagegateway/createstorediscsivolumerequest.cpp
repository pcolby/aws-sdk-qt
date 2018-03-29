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

#include "createstorediscsivolumerequest.h"
#include "createstorediscsivolumerequest_p.h"
#include "createstorediscsivolumeresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateStorediSCSIVolumeRequest
 *
 * @brief  Implements StorageGateway CreateStorediSCSIVolume requests.
 *
 * @see    StorageGatewayClient::createStorediSCSIVolume
 */

/**
 * @brief  Constructs a new CreateStorediSCSIVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStorediSCSIVolumeRequest::CreateStorediSCSIVolumeRequest(const CreateStorediSCSIVolumeRequest &other)
    : StorageGatewayRequest(new CreateStorediSCSIVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStorediSCSIVolumeRequest object.
 */
CreateStorediSCSIVolumeRequest::CreateStorediSCSIVolumeRequest()
    : StorageGatewayRequest(new CreateStorediSCSIVolumeRequestPrivate(StorageGatewayRequest::CreateStorediSCSIVolumeAction, this))
{

}

bool CreateStorediSCSIVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStorediSCSIVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStorediSCSIVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * CreateStorediSCSIVolumeRequest::response(QNetworkReply * const reply) const
{
    return new CreateStorediSCSIVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStorediSCSIVolumeRequestPrivate
 *
 * @brief  Private implementation for CreateStorediSCSIVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStorediSCSIVolumeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CreateStorediSCSIVolumeRequest instance.
 */
CreateStorediSCSIVolumeRequestPrivate::CreateStorediSCSIVolumeRequestPrivate(
    const StorageGatewayRequest::Action action, CreateStorediSCSIVolumeRequest * const q)
    : CreateStorediSCSIVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStorediSCSIVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStorediSCSIVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStorediSCSIVolumeRequest instance.
 */
CreateStorediSCSIVolumeRequestPrivate::CreateStorediSCSIVolumeRequestPrivate(
    const CreateStorediSCSIVolumeRequestPrivate &other, CreateStorediSCSIVolumeRequest * const q)
    : CreateStorediSCSIVolumePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
