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

#include "deleteaccesskeyrequest.h"
#include "deleteaccesskeyrequest_p.h"
#include "deleteaccesskeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteAccessKeyRequest
 *
 * @brief  Implements IAM DeleteAccessKey requests.
 *
 * @see    IAMClient::deleteAccessKey
 */

/**
 * @brief  Constructs a new DeleteAccessKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAccessKeyRequest::DeleteAccessKeyRequest(const DeleteAccessKeyRequest &other)
    : IAMRequest(new DeleteAccessKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAccessKeyRequest object.
 */
DeleteAccessKeyRequest::DeleteAccessKeyRequest()
    : IAMRequest(new DeleteAccessKeyRequestPrivate(IAMRequest::DeleteAccessKeyAction, this))
{

}

bool DeleteAccessKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAccessKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAccessKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAccessKeyRequestPrivate
 *
 * @brief  Private implementation for DeleteAccessKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccessKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteAccessKeyRequest instance.
 */
DeleteAccessKeyRequestPrivate::DeleteAccessKeyRequestPrivate(
    const IAMRequest::Action action, DeleteAccessKeyRequest * const q)
    : DeleteAccessKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccessKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAccessKeyRequest instance.
 */
DeleteAccessKeyRequestPrivate::DeleteAccessKeyRequestPrivate(
    const DeleteAccessKeyRequestPrivate &other, DeleteAccessKeyRequest * const q)
    : DeleteAccessKeyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
