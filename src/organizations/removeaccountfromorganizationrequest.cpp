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

#include "removeaccountfromorganizationrequest.h"
#include "removeaccountfromorganizationrequest_p.h"
#include "removeaccountfromorganizationresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  RemoveAccountFromOrganizationRequest
 *
 * @brief  Implements Organizations RemoveAccountFromOrganization requests.
 *
 * @see    OrganizationsClient::removeAccountFromOrganization
 */

/**
 * @brief  Constructs a new RemoveAccountFromOrganizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveAccountFromOrganizationRequest::RemoveAccountFromOrganizationRequest(const RemoveAccountFromOrganizationRequest &other)
    : OrganizationsRequest(new RemoveAccountFromOrganizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveAccountFromOrganizationRequest object.
 */
RemoveAccountFromOrganizationRequest::RemoveAccountFromOrganizationRequest()
    : OrganizationsRequest(new RemoveAccountFromOrganizationRequestPrivate(OrganizationsRequest::RemoveAccountFromOrganizationAction, this))
{

}

bool RemoveAccountFromOrganizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveAccountFromOrganizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveAccountFromOrganizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAccountFromOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAccountFromOrganizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveAccountFromOrganizationRequestPrivate
 *
 * @brief  Private implementation for RemoveAccountFromOrganizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAccountFromOrganizationRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public RemoveAccountFromOrganizationRequest instance.
 */
RemoveAccountFromOrganizationRequestPrivate::RemoveAccountFromOrganizationRequestPrivate(
    const OrganizationsRequest::Action action, RemoveAccountFromOrganizationRequest * const q)
    : RemoveAccountFromOrganizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAccountFromOrganizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveAccountFromOrganizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveAccountFromOrganizationRequest instance.
 */
RemoveAccountFromOrganizationRequestPrivate::RemoveAccountFromOrganizationRequestPrivate(
    const RemoveAccountFromOrganizationRequestPrivate &other, RemoveAccountFromOrganizationRequest * const q)
    : RemoveAccountFromOrganizationPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
