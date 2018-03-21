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

#include "inviteaccounttoorganizationrequest.h"
#include "inviteaccounttoorganizationrequest_p.h"
#include "inviteaccounttoorganizationresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  InviteAccountToOrganizationRequest
 *
 * @brief  Implements Organizations InviteAccountToOrganization requests.
 *
 * @see    OrganizationsClient::inviteAccountToOrganization
 */

/**
 * @brief  Constructs a new InviteAccountToOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InviteAccountToOrganizationResponse::InviteAccountToOrganizationResponse(

/**
 * @brief  Constructs a new InviteAccountToOrganizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InviteAccountToOrganizationRequest::InviteAccountToOrganizationRequest(const InviteAccountToOrganizationRequest &other)
    : OrganizationsRequest(new InviteAccountToOrganizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InviteAccountToOrganizationRequest object.
 */
InviteAccountToOrganizationRequest::InviteAccountToOrganizationRequest()
    : OrganizationsRequest(new InviteAccountToOrganizationRequestPrivate(OrganizationsRequest::InviteAccountToOrganizationAction, this))
{

}

bool InviteAccountToOrganizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InviteAccountToOrganizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InviteAccountToOrganizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * InviteAccountToOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new InviteAccountToOrganizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InviteAccountToOrganizationRequestPrivate
 *
 * @brief  Private implementation for InviteAccountToOrganizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InviteAccountToOrganizationRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public InviteAccountToOrganizationRequest instance.
 */
InviteAccountToOrganizationRequestPrivate::InviteAccountToOrganizationRequestPrivate(
    const OrganizationsRequest::Action action, InviteAccountToOrganizationRequest * const q)
    : InviteAccountToOrganizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InviteAccountToOrganizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InviteAccountToOrganizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InviteAccountToOrganizationRequest instance.
 */
InviteAccountToOrganizationRequestPrivate::InviteAccountToOrganizationRequestPrivate(
    const InviteAccountToOrganizationRequestPrivate &other, InviteAccountToOrganizationRequest * const q)
    : InviteAccountToOrganizationPrivate(other, q)
{

}
