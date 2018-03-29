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

#include "createcachediscsivolumerequest.h"
#include "createcachediscsivolumerequest_p.h"
#include "createcachediscsivolumeresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateCachediSCSIVolumeRequest
 *
 * @brief  Implements StorageGateway CreateCachediSCSIVolume requests.
 *
 * @see    StorageGatewayClient::createCachediSCSIVolume
 */

/**
 * @brief  Constructs a new CreateCachediSCSIVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCachediSCSIVolumeRequest::CreateCachediSCSIVolumeRequest(const CreateCachediSCSIVolumeRequest &other)
    : StorageGatewayRequest(new CreateCachediSCSIVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCachediSCSIVolumeRequest object.
 */
CreateCachediSCSIVolumeRequest::CreateCachediSCSIVolumeRequest()
    : StorageGatewayRequest(new CreateCachediSCSIVolumeRequestPrivate(StorageGatewayRequest::CreateCachediSCSIVolumeAction, this))
{

}

bool CreateCachediSCSIVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCachediSCSIVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCachediSCSIVolumeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCachediSCSIVolumeRequest::response(QNetworkReply * const reply) const
{
    return new CreateCachediSCSIVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCachediSCSIVolumeRequestPrivate
 *
 * @brief  Private implementation for CreateCachediSCSIVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCachediSCSIVolumeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CreateCachediSCSIVolumeRequest instance.
 */
CreateCachediSCSIVolumeRequestPrivate::CreateCachediSCSIVolumeRequestPrivate(
    const StorageGatewayRequest::Action action, CreateCachediSCSIVolumeRequest * const q)
    : CreateCachediSCSIVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCachediSCSIVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCachediSCSIVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCachediSCSIVolumeRequest instance.
 */
CreateCachediSCSIVolumeRequestPrivate::CreateCachediSCSIVolumeRequestPrivate(
    const CreateCachediSCSIVolumeRequestPrivate &other, CreateCachediSCSIVolumeRequest * const q)
    : CreateCachediSCSIVolumePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
