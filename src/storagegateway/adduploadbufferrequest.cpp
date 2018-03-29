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

#include "adduploadbufferrequest.h"
#include "adduploadbufferrequest_p.h"
#include "adduploadbufferresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  AddUploadBufferRequest
 *
 * @brief  Implements StorageGateway AddUploadBuffer requests.
 *
 * @see    StorageGatewayClient::addUploadBuffer
 */

/**
 * @brief  Constructs a new AddUploadBufferRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddUploadBufferRequest::AddUploadBufferRequest(const AddUploadBufferRequest &other)
    : StorageGatewayRequest(new AddUploadBufferRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddUploadBufferRequest object.
 */
AddUploadBufferRequest::AddUploadBufferRequest()
    : StorageGatewayRequest(new AddUploadBufferRequestPrivate(StorageGatewayRequest::AddUploadBufferAction, this))
{

}

bool AddUploadBufferRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddUploadBufferResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddUploadBufferResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * AddUploadBufferRequest::response(QNetworkReply * const reply) const
{
    return new AddUploadBufferResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddUploadBufferRequestPrivate
 *
 * @brief  Private implementation for AddUploadBufferRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddUploadBufferRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public AddUploadBufferRequest instance.
 */
AddUploadBufferRequestPrivate::AddUploadBufferRequestPrivate(
    const StorageGatewayRequest::Action action, AddUploadBufferRequest * const q)
    : AddUploadBufferPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddUploadBufferRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddUploadBufferRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddUploadBufferRequest instance.
 */
AddUploadBufferRequestPrivate::AddUploadBufferRequestPrivate(
    const AddUploadBufferRequestPrivate &other, AddUploadBufferRequest * const q)
    : AddUploadBufferPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
