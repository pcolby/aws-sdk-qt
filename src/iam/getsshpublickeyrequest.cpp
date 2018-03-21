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

#include "getsshpublickeyrequest.h"
#include "getsshpublickeyrequest_p.h"
#include "getsshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetSSHPublicKeyRequest
 *
 * @brief  Implements IAM GetSSHPublicKey requests.
 *
 * @see    IAMClient::getSSHPublicKey
 */

/**
 * @brief  Constructs a new GetSSHPublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSSHPublicKeyRequest::GetSSHPublicKeyRequest(const GetSSHPublicKeyRequest &other)
    : IAMRequest(new GetSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSSHPublicKeyRequest object.
 */
GetSSHPublicKeyRequest::GetSSHPublicKeyRequest()
    : IAMRequest(new GetSSHPublicKeyRequestPrivate(IAMRequest::GetSSHPublicKeyAction, this))
{

}

bool GetSSHPublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSSHPublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSSHPublicKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetSSHPublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSSHPublicKeyRequestPrivate
 *
 * @brief  Private implementation for GetSSHPublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSSHPublicKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetSSHPublicKeyRequest instance.
 */
GetSSHPublicKeyRequestPrivate::GetSSHPublicKeyRequestPrivate(
    const IAMRequest::Action action, GetSSHPublicKeyRequest * const q)
    : GetSSHPublicKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSSHPublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSSHPublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSSHPublicKeyRequest instance.
 */
GetSSHPublicKeyRequestPrivate::GetSSHPublicKeyRequestPrivate(
    const GetSSHPublicKeyRequestPrivate &other, GetSSHPublicKeyRequest * const q)
    : GetSSHPublicKeyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
