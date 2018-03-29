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

#include "deleteaccountaliasrequest.h"
#include "deleteaccountaliasrequest_p.h"
#include "deleteaccountaliasresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteAccountAliasRequest
 *
 * @brief  Implements IAM DeleteAccountAlias requests.
 *
 * @see    IAMClient::deleteAccountAlias
 */

/**
 * @brief  Constructs a new DeleteAccountAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAccountAliasRequest::DeleteAccountAliasRequest(const DeleteAccountAliasRequest &other)
    : IAMRequest(new DeleteAccountAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAccountAliasRequest object.
 */
DeleteAccountAliasRequest::DeleteAccountAliasRequest()
    : IAMRequest(new DeleteAccountAliasRequestPrivate(IAMRequest::DeleteAccountAliasAction, this))
{

}

bool DeleteAccountAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAccountAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAccountAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteAccountAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccountAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAccountAliasRequestPrivate
 *
 * @brief  Private implementation for DeleteAccountAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccountAliasRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteAccountAliasRequest instance.
 */
DeleteAccountAliasRequestPrivate::DeleteAccountAliasRequestPrivate(
    const IAMRequest::Action action, DeleteAccountAliasRequest * const q)
    : DeleteAccountAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccountAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccountAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAccountAliasRequest instance.
 */
DeleteAccountAliasRequestPrivate::DeleteAccountAliasRequestPrivate(
    const DeleteAccountAliasRequestPrivate &other, DeleteAccountAliasRequest * const q)
    : DeleteAccountAliasPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
