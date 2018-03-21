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

#include "deleteprotectionrequest.h"
#include "deleteprotectionrequest_p.h"
#include "deleteprotectionresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  DeleteProtectionRequest
 *
 * @brief  Implements Shield DeleteProtection requests.
 *
 * @see    ShieldClient::deleteProtection
 */

/**
 * @brief  Constructs a new DeleteProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProtectionResponse::DeleteProtectionResponse(

/**
 * @brief  Constructs a new DeleteProtectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProtectionRequest::DeleteProtectionRequest(const DeleteProtectionRequest &other)
    : ShieldRequest(new DeleteProtectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteProtectionRequest object.
 */
DeleteProtectionRequest::DeleteProtectionRequest()
    : ShieldRequest(new DeleteProtectionRequestPrivate(ShieldRequest::DeleteProtectionAction, this))
{

}

bool DeleteProtectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteProtectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProtectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * DeleteProtectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProtectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteProtectionRequestPrivate
 *
 * @brief  Private implementation for DeleteProtectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProtectionRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public DeleteProtectionRequest instance.
 */
DeleteProtectionRequestPrivate::DeleteProtectionRequestPrivate(
    const ShieldRequest::Action action, DeleteProtectionRequest * const q)
    : DeleteProtectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProtectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProtectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProtectionRequest instance.
 */
DeleteProtectionRequestPrivate::DeleteProtectionRequestPrivate(
    const DeleteProtectionRequestPrivate &other, DeleteProtectionRequest * const q)
    : DeleteProtectionPrivate(other, q)
{

}

} // namespace Shield
} // namespace AWS
