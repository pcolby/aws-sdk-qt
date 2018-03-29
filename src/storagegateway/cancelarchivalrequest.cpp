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

#include "cancelarchivalrequest.h"
#include "cancelarchivalrequest_p.h"
#include "cancelarchivalresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CancelArchivalRequest
 *
 * @brief  Implements StorageGateway CancelArchival requests.
 *
 * @see    StorageGatewayClient::cancelArchival
 */

/**
 * @brief  Constructs a new CancelArchivalRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelArchivalRequest::CancelArchivalRequest(const CancelArchivalRequest &other)
    : StorageGatewayRequest(new CancelArchivalRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelArchivalRequest object.
 */
CancelArchivalRequest::CancelArchivalRequest()
    : StorageGatewayRequest(new CancelArchivalRequestPrivate(StorageGatewayRequest::CancelArchivalAction, this))
{

}

bool CancelArchivalRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelArchivalResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelArchivalResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelArchivalRequest::response(QNetworkReply * const reply) const
{
    return new CancelArchivalResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelArchivalRequestPrivate
 *
 * @brief  Private implementation for CancelArchivalRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelArchivalRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CancelArchivalRequest instance.
 */
CancelArchivalRequestPrivate::CancelArchivalRequestPrivate(
    const StorageGatewayRequest::Action action, CancelArchivalRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelArchivalRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelArchivalRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelArchivalRequest instance.
 */
CancelArchivalRequestPrivate::CancelArchivalRequestPrivate(
    const CancelArchivalRequestPrivate &other, CancelArchivalRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
