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

#include "deleteservicespecificcredentialrequest.h"
#include "deleteservicespecificcredentialrequest_p.h"
#include "deleteservicespecificcredentialresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteServiceSpecificCredentialRequest
 *
 * @brief  Implements IAM DeleteServiceSpecificCredential requests.
 *
 * @see    IAMClient::deleteServiceSpecificCredential
 */

/**
 * @brief  Constructs a new DeleteServiceSpecificCredentialRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServiceSpecificCredentialRequest::DeleteServiceSpecificCredentialRequest(const DeleteServiceSpecificCredentialRequest &other)
    : IAMRequest(new DeleteServiceSpecificCredentialRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServiceSpecificCredentialRequest object.
 */
DeleteServiceSpecificCredentialRequest::DeleteServiceSpecificCredentialRequest()
    : IAMRequest(new DeleteServiceSpecificCredentialRequestPrivate(IAMRequest::DeleteServiceSpecificCredentialAction, this))
{

}

bool DeleteServiceSpecificCredentialRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServiceSpecificCredentialResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServiceSpecificCredentialResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteServiceSpecificCredentialRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceSpecificCredentialResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServiceSpecificCredentialRequestPrivate
 *
 * @brief  Private implementation for DeleteServiceSpecificCredentialRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceSpecificCredentialRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteServiceSpecificCredentialRequest instance.
 */
DeleteServiceSpecificCredentialRequestPrivate::DeleteServiceSpecificCredentialRequestPrivate(
    const IAMRequest::Action action, DeleteServiceSpecificCredentialRequest * const q)
    : DeleteServiceSpecificCredentialPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceSpecificCredentialRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceSpecificCredentialRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServiceSpecificCredentialRequest instance.
 */
DeleteServiceSpecificCredentialRequestPrivate::DeleteServiceSpecificCredentialRequestPrivate(
    const DeleteServiceSpecificCredentialRequestPrivate &other, DeleteServiceSpecificCredentialRequest * const q)
    : DeleteServiceSpecificCredentialPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
