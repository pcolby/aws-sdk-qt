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

#include "updateaccesskeyrequest.h"
#include "updateaccesskeyrequest_p.h"
#include "updateaccesskeyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UpdateAccessKeyRequest
 *
 * @brief  Implements IAM UpdateAccessKey requests.
 *
 * @see    IAMClient::updateAccessKey
 */

/**
 * @brief  Constructs a new UpdateAccessKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccessKeyResponse::UpdateAccessKeyResponse(

/**
 * @brief  Constructs a new UpdateAccessKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAccessKeyRequest::UpdateAccessKeyRequest(const UpdateAccessKeyRequest &other)
    : IAMRequest(new UpdateAccessKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAccessKeyRequest object.
 */
UpdateAccessKeyRequest::UpdateAccessKeyRequest()
    : IAMRequest(new UpdateAccessKeyRequestPrivate(IAMRequest::UpdateAccessKeyAction, this))
{

}

bool UpdateAccessKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAccessKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAccessKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateAccessKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAccessKeyRequestPrivate
 *
 * @brief  Private implementation for UpdateAccessKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccessKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateAccessKeyRequest instance.
 */
UpdateAccessKeyRequestPrivate::UpdateAccessKeyRequestPrivate(
    const IAMRequest::Action action, UpdateAccessKeyRequest * const q)
    : UpdateAccessKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccessKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAccessKeyRequest instance.
 */
UpdateAccessKeyRequestPrivate::UpdateAccessKeyRequestPrivate(
    const UpdateAccessKeyRequestPrivate &other, UpdateAccessKeyRequest * const q)
    : UpdateAccessKeyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
