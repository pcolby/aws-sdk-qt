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

#include "createaccountaliasrequest.h"
#include "createaccountaliasrequest_p.h"
#include "createaccountaliasresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  CreateAccountAliasRequest
 *
 * @brief  Implements IAM CreateAccountAlias requests.
 *
 * @see    IAMClient::createAccountAlias
 */

/**
 * @brief  Constructs a new CreateAccountAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAccountAliasRequest::CreateAccountAliasRequest(const CreateAccountAliasRequest &other)
    : IAMRequest(new CreateAccountAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAccountAliasRequest object.
 */
CreateAccountAliasRequest::CreateAccountAliasRequest()
    : IAMRequest(new CreateAccountAliasRequestPrivate(IAMRequest::CreateAccountAliasAction, this))
{

}

bool CreateAccountAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAccountAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAccountAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateAccountAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccountAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAccountAliasRequestPrivate
 *
 * @brief  Private implementation for CreateAccountAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccountAliasRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateAccountAliasRequest instance.
 */
CreateAccountAliasRequestPrivate::CreateAccountAliasRequestPrivate(
    const IAMRequest::Action action, CreateAccountAliasRequest * const q)
    : CreateAccountAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccountAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAccountAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAccountAliasRequest instance.
 */
CreateAccountAliasRequestPrivate::CreateAccountAliasRequestPrivate(
    const CreateAccountAliasRequestPrivate &other, CreateAccountAliasRequest * const q)
    : CreateAccountAliasPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
