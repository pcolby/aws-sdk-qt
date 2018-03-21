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

#include "deleteimportedkeymaterialrequest.h"
#include "deleteimportedkeymaterialrequest_p.h"
#include "deleteimportedkeymaterialresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  DeleteImportedKeyMaterialRequest
 *
 * @brief  Implements KMS DeleteImportedKeyMaterial requests.
 *
 * @see    KMSClient::deleteImportedKeyMaterial
 */

/**
 * @brief  Constructs a new DeleteImportedKeyMaterialRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteImportedKeyMaterialRequest::DeleteImportedKeyMaterialRequest(const DeleteImportedKeyMaterialRequest &other)
    : KMSRequest(new DeleteImportedKeyMaterialRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteImportedKeyMaterialRequest object.
 */
DeleteImportedKeyMaterialRequest::DeleteImportedKeyMaterialRequest()
    : KMSRequest(new DeleteImportedKeyMaterialRequestPrivate(KMSRequest::DeleteImportedKeyMaterialAction, this))
{

}

bool DeleteImportedKeyMaterialRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteImportedKeyMaterialResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteImportedKeyMaterialResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * DeleteImportedKeyMaterialRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImportedKeyMaterialResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteImportedKeyMaterialRequestPrivate
 *
 * @brief  Private implementation for DeleteImportedKeyMaterialRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImportedKeyMaterialRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public DeleteImportedKeyMaterialRequest instance.
 */
DeleteImportedKeyMaterialRequestPrivate::DeleteImportedKeyMaterialRequestPrivate(
    const KMSRequest::Action action, DeleteImportedKeyMaterialRequest * const q)
    : DeleteImportedKeyMaterialPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImportedKeyMaterialRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteImportedKeyMaterialRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteImportedKeyMaterialRequest instance.
 */
DeleteImportedKeyMaterialRequestPrivate::DeleteImportedKeyMaterialRequestPrivate(
    const DeleteImportedKeyMaterialRequestPrivate &other, DeleteImportedKeyMaterialRequest * const q)
    : DeleteImportedKeyMaterialPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
