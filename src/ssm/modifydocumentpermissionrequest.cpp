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

#include "modifydocumentpermissionrequest.h"
#include "modifydocumentpermissionrequest_p.h"
#include "modifydocumentpermissionresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ModifyDocumentPermissionRequest
 *
 * @brief  Implements SSM ModifyDocumentPermission requests.
 *
 * @see    SSMClient::modifyDocumentPermission
 */

/**
 * @brief  Constructs a new ModifyDocumentPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDocumentPermissionRequest::ModifyDocumentPermissionRequest(const ModifyDocumentPermissionRequest &other)
    : SSMRequest(new ModifyDocumentPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDocumentPermissionRequest object.
 */
ModifyDocumentPermissionRequest::ModifyDocumentPermissionRequest()
    : SSMRequest(new ModifyDocumentPermissionRequestPrivate(SSMRequest::ModifyDocumentPermissionAction, this))
{

}

bool ModifyDocumentPermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDocumentPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDocumentPermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ModifyDocumentPermissionRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDocumentPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDocumentPermissionRequestPrivate
 *
 * @brief  Private implementation for ModifyDocumentPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDocumentPermissionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ModifyDocumentPermissionRequest instance.
 */
ModifyDocumentPermissionRequestPrivate::ModifyDocumentPermissionRequestPrivate(
    const SSMRequest::Action action, ModifyDocumentPermissionRequest * const q)
    : ModifyDocumentPermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDocumentPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDocumentPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDocumentPermissionRequest instance.
 */
ModifyDocumentPermissionRequestPrivate::ModifyDocumentPermissionRequestPrivate(
    const ModifyDocumentPermissionRequestPrivate &other, ModifyDocumentPermissionRequest * const q)
    : ModifyDocumentPermissionPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
