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

#include "deletesshpublickeyrequest.h"
#include "deletesshpublickeyrequest_p.h"
#include "deletesshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteSSHPublicKeyRequest
 *
 * @brief  Implements IAM DeleteSSHPublicKey requests.
 *
 * @see    IAMClient::deleteSSHPublicKey
 */

/**
 * @brief  Constructs a new DeleteSSHPublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSSHPublicKeyResponse::DeleteSSHPublicKeyResponse(

/**
 * @brief  Constructs a new DeleteSSHPublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSSHPublicKeyRequest::DeleteSSHPublicKeyRequest(const DeleteSSHPublicKeyRequest &other)
    : IAMRequest(new DeleteSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSSHPublicKeyRequest object.
 */
DeleteSSHPublicKeyRequest::DeleteSSHPublicKeyRequest()
    : IAMRequest(new DeleteSSHPublicKeyRequestPrivate(IAMRequest::DeleteSSHPublicKeyAction, this))
{

}

bool DeleteSSHPublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSSHPublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSSHPublicKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSSHPublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSSHPublicKeyRequestPrivate
 *
 * @brief  Private implementation for DeleteSSHPublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSSHPublicKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteSSHPublicKeyRequest instance.
 */
DeleteSSHPublicKeyRequestPrivate::DeleteSSHPublicKeyRequestPrivate(
    const IAMRequest::Action action, DeleteSSHPublicKeyRequest * const q)
    : DeleteSSHPublicKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSSHPublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSSHPublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSSHPublicKeyRequest instance.
 */
DeleteSSHPublicKeyRequestPrivate::DeleteSSHPublicKeyRequestPrivate(
    const DeleteSSHPublicKeyRequestPrivate &other, DeleteSSHPublicKeyRequest * const q)
    : DeleteSSHPublicKeyPrivate(other, q)
{

}
