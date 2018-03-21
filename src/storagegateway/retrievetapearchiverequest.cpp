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

#include "retrievetapearchiverequest.h"
#include "retrievetapearchiverequest_p.h"
#include "retrievetapearchiveresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  RetrieveTapeArchiveRequest
 *
 * @brief  Implements StorageGateway RetrieveTapeArchive requests.
 *
 * @see    StorageGatewayClient::retrieveTapeArchive
 */

/**
 * @brief  Constructs a new RetrieveTapeArchiveRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RetrieveTapeArchiveRequest::RetrieveTapeArchiveRequest(const RetrieveTapeArchiveRequest &other)
    : StorageGatewayRequest(new RetrieveTapeArchiveRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RetrieveTapeArchiveRequest object.
 */
RetrieveTapeArchiveRequest::RetrieveTapeArchiveRequest()
    : StorageGatewayRequest(new RetrieveTapeArchiveRequestPrivate(StorageGatewayRequest::RetrieveTapeArchiveAction, this))
{

}

bool RetrieveTapeArchiveRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RetrieveTapeArchiveResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RetrieveTapeArchiveResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * RetrieveTapeArchiveRequest::response(QNetworkReply * const reply) const
{
    return new RetrieveTapeArchiveResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RetrieveTapeArchiveRequestPrivate
 *
 * @brief  Private implementation for RetrieveTapeArchiveRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveTapeArchiveRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public RetrieveTapeArchiveRequest instance.
 */
RetrieveTapeArchiveRequestPrivate::RetrieveTapeArchiveRequestPrivate(
    const StorageGatewayRequest::Action action, RetrieveTapeArchiveRequest * const q)
    : RetrieveTapeArchivePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveTapeArchiveRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RetrieveTapeArchiveRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RetrieveTapeArchiveRequest instance.
 */
RetrieveTapeArchiveRequestPrivate::RetrieveTapeArchiveRequestPrivate(
    const RetrieveTapeArchiveRequestPrivate &other, RetrieveTapeArchiveRequest * const q)
    : RetrieveTapeArchivePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
