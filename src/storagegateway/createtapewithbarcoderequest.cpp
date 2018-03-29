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

#include "createtapewithbarcoderequest.h"
#include "createtapewithbarcoderequest_p.h"
#include "createtapewithbarcoderesponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  CreateTapeWithBarcodeRequest
 *
 * @brief  Implements StorageGateway CreateTapeWithBarcode requests.
 *
 * @see    StorageGatewayClient::createTapeWithBarcode
 */

/**
 * @brief  Constructs a new CreateTapeWithBarcodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTapeWithBarcodeRequest::CreateTapeWithBarcodeRequest(const CreateTapeWithBarcodeRequest &other)
    : StorageGatewayRequest(new CreateTapeWithBarcodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTapeWithBarcodeRequest object.
 */
CreateTapeWithBarcodeRequest::CreateTapeWithBarcodeRequest()
    : StorageGatewayRequest(new CreateTapeWithBarcodeRequestPrivate(StorageGatewayRequest::CreateTapeWithBarcodeAction, this))
{

}

bool CreateTapeWithBarcodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTapeWithBarcodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTapeWithBarcodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * CreateTapeWithBarcodeRequest::response(QNetworkReply * const reply) const
{
    return new CreateTapeWithBarcodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTapeWithBarcodeRequestPrivate
 *
 * @brief  Private implementation for CreateTapeWithBarcodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTapeWithBarcodeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CreateTapeWithBarcodeRequest instance.
 */
CreateTapeWithBarcodeRequestPrivate::CreateTapeWithBarcodeRequestPrivate(
    const StorageGatewayRequest::Action action, CreateTapeWithBarcodeRequest * const q)
    : CreateTapeWithBarcodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTapeWithBarcodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTapeWithBarcodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTapeWithBarcodeRequest instance.
 */
CreateTapeWithBarcodeRequestPrivate::CreateTapeWithBarcodeRequestPrivate(
    const CreateTapeWithBarcodeRequestPrivate &other, CreateTapeWithBarcodeRequest * const q)
    : CreateTapeWithBarcodePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
