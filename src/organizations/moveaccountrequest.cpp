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

#include "moveaccountrequest.h"
#include "moveaccountrequest_p.h"
#include "moveaccountresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  MoveAccountRequest
 *
 * @brief  Implements Organizations MoveAccount requests.
 *
 * @see    OrganizationsClient::moveAccount
 */

/**
 * @brief  Constructs a new MoveAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MoveAccountRequest::MoveAccountRequest(const MoveAccountRequest &other)
    : OrganizationsRequest(new MoveAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MoveAccountRequest object.
 */
MoveAccountRequest::MoveAccountRequest()
    : OrganizationsRequest(new MoveAccountRequestPrivate(OrganizationsRequest::MoveAccountAction, this))
{

}

bool MoveAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MoveAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MoveAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * MoveAccountRequest::response(QNetworkReply * const reply) const
{
    return new MoveAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MoveAccountRequestPrivate
 *
 * @brief  Private implementation for MoveAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MoveAccountRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public MoveAccountRequest instance.
 */
MoveAccountRequestPrivate::MoveAccountRequestPrivate(
    const OrganizationsRequest::Action action, MoveAccountRequest * const q)
    : MoveAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MoveAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MoveAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MoveAccountRequest instance.
 */
MoveAccountRequestPrivate::MoveAccountRequestPrivate(
    const MoveAccountRequestPrivate &other, MoveAccountRequest * const q)
    : MoveAccountPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
