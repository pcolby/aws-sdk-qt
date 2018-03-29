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

#include "deleteotaupdaterequest.h"
#include "deleteotaupdaterequest_p.h"
#include "deleteotaupdateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteOTAUpdateRequest
 *
 * @brief  Implements IoT DeleteOTAUpdate requests.
 *
 * @see    IoTClient::deleteOTAUpdate
 */

/**
 * @brief  Constructs a new DeleteOTAUpdateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteOTAUpdateRequest::DeleteOTAUpdateRequest(const DeleteOTAUpdateRequest &other)
    : IoTRequest(new DeleteOTAUpdateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteOTAUpdateRequest object.
 */
DeleteOTAUpdateRequest::DeleteOTAUpdateRequest()
    : IoTRequest(new DeleteOTAUpdateRequestPrivate(IoTRequest::DeleteOTAUpdateAction, this))
{

}

bool DeleteOTAUpdateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteOTAUpdateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteOTAUpdateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteOTAUpdateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOTAUpdateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteOTAUpdateRequestPrivate
 *
 * @brief  Private implementation for DeleteOTAUpdateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOTAUpdateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteOTAUpdateRequest instance.
 */
DeleteOTAUpdateRequestPrivate::DeleteOTAUpdateRequestPrivate(
    const IoTRequest::Action action, DeleteOTAUpdateRequest * const q)
    : DeleteOTAUpdatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOTAUpdateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteOTAUpdateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteOTAUpdateRequest instance.
 */
DeleteOTAUpdateRequestPrivate::DeleteOTAUpdateRequestPrivate(
    const DeleteOTAUpdateRequestPrivate &other, DeleteOTAUpdateRequest * const q)
    : DeleteOTAUpdatePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
