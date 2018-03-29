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

#include "deletetapearchiverequest.h"
#include "deletetapearchiverequest_p.h"
#include "deletetapearchiveresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteTapeArchiveRequest
 *
 * @brief  Implements StorageGateway DeleteTapeArchive requests.
 *
 * @see    StorageGatewayClient::deleteTapeArchive
 */

/**
 * @brief  Constructs a new DeleteTapeArchiveRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTapeArchiveRequest::DeleteTapeArchiveRequest(const DeleteTapeArchiveRequest &other)
    : StorageGatewayRequest(new DeleteTapeArchiveRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTapeArchiveRequest object.
 */
DeleteTapeArchiveRequest::DeleteTapeArchiveRequest()
    : StorageGatewayRequest(new DeleteTapeArchiveRequestPrivate(StorageGatewayRequest::DeleteTapeArchiveAction, this))
{

}

bool DeleteTapeArchiveRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTapeArchiveResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTapeArchiveResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DeleteTapeArchiveRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTapeArchiveResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTapeArchiveRequestPrivate
 *
 * @brief  Private implementation for DeleteTapeArchiveRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTapeArchiveRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteTapeArchiveRequest instance.
 */
DeleteTapeArchiveRequestPrivate::DeleteTapeArchiveRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteTapeArchiveRequest * const q)
    : DeleteTapeArchivePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTapeArchiveRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTapeArchiveRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTapeArchiveRequest instance.
 */
DeleteTapeArchiveRequestPrivate::DeleteTapeArchiveRequestPrivate(
    const DeleteTapeArchiveRequestPrivate &other, DeleteTapeArchiveRequest * const q)
    : DeleteTapeArchivePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
