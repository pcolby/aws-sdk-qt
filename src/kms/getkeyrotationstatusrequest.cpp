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

#include "getkeyrotationstatusrequest.h"
#include "getkeyrotationstatusrequest_p.h"
#include "getkeyrotationstatusresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  GetKeyRotationStatusRequest
 *
 * @brief  Implements KMS GetKeyRotationStatus requests.
 *
 * @see    KMSClient::getKeyRotationStatus
 */

/**
 * @brief  Constructs a new GetKeyRotationStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetKeyRotationStatusRequest::GetKeyRotationStatusRequest(const GetKeyRotationStatusRequest &other)
    : KMSRequest(new GetKeyRotationStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetKeyRotationStatusRequest object.
 */
GetKeyRotationStatusRequest::GetKeyRotationStatusRequest()
    : KMSRequest(new GetKeyRotationStatusRequestPrivate(KMSRequest::GetKeyRotationStatusAction, this))
{

}

bool GetKeyRotationStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetKeyRotationStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetKeyRotationStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * GetKeyRotationStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyRotationStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetKeyRotationStatusRequestPrivate
 *
 * @brief  Private implementation for GetKeyRotationStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyRotationStatusRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public GetKeyRotationStatusRequest instance.
 */
GetKeyRotationStatusRequestPrivate::GetKeyRotationStatusRequestPrivate(
    const KMSRequest::Action action, GetKeyRotationStatusRequest * const q)
    : GetKeyRotationStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyRotationStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetKeyRotationStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetKeyRotationStatusRequest instance.
 */
GetKeyRotationStatusRequestPrivate::GetKeyRotationStatusRequestPrivate(
    const GetKeyRotationStatusRequestPrivate &other, GetKeyRotationStatusRequest * const q)
    : GetKeyRotationStatusPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
