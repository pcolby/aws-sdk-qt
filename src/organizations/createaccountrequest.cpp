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

#include "createaccountrequest.h"
#include "createaccountrequest_p.h"
#include "createaccountresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  CreateAccountRequest
 *
 * @brief  Implements Organizations CreateAccount requests.
 *
 * @see    OrganizationsClient::createAccount
 */

/**
 * @brief  Constructs a new CreateAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAccountRequest::CreateAccountRequest(const CreateAccountRequest &other)
    : OrganizationsRequest(new CreateAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAccountRequest object.
 */
CreateAccountRequest::CreateAccountRequest()
    : OrganizationsRequest(new CreateAccountRequestPrivate(OrganizationsRequest::CreateAccountAction, this))
{

}

bool CreateAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * CreateAccountRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAccountRequestPrivate
 *
 * @brief  Private implementation for CreateAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccountRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public CreateAccountRequest instance.
 */
CreateAccountRequestPrivate::CreateAccountRequestPrivate(
    const OrganizationsRequest::Action action, CreateAccountRequest * const q)
    : CreateAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAccountRequest instance.
 */
CreateAccountRequestPrivate::CreateAccountRequestPrivate(
    const CreateAccountRequestPrivate &other, CreateAccountRequest * const q)
    : CreateAccountPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
