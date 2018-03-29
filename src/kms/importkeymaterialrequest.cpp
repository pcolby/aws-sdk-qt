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

#include "importkeymaterialrequest.h"
#include "importkeymaterialrequest_p.h"
#include "importkeymaterialresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  ImportKeyMaterialRequest
 *
 * @brief  Implements KMS ImportKeyMaterial requests.
 *
 * @see    KMSClient::importKeyMaterial
 */

/**
 * @brief  Constructs a new ImportKeyMaterialRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportKeyMaterialRequest::ImportKeyMaterialRequest(const ImportKeyMaterialRequest &other)
    : KMSRequest(new ImportKeyMaterialRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportKeyMaterialRequest object.
 */
ImportKeyMaterialRequest::ImportKeyMaterialRequest()
    : KMSRequest(new ImportKeyMaterialRequestPrivate(KMSRequest::ImportKeyMaterialAction, this))
{

}

bool ImportKeyMaterialRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportKeyMaterialResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportKeyMaterialResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportKeyMaterialRequest::response(QNetworkReply * const reply) const
{
    return new ImportKeyMaterialResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportKeyMaterialRequestPrivate
 *
 * @brief  Private implementation for ImportKeyMaterialRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportKeyMaterialRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ImportKeyMaterialRequest instance.
 */
ImportKeyMaterialRequestPrivate::ImportKeyMaterialRequestPrivate(
    const KMSRequest::Action action, ImportKeyMaterialRequest * const q)
    : KMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportKeyMaterialRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportKeyMaterialRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportKeyMaterialRequest instance.
 */
ImportKeyMaterialRequestPrivate::ImportKeyMaterialRequestPrivate(
    const ImportKeyMaterialRequestPrivate &other, ImportKeyMaterialRequest * const q)
    : KMSRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
