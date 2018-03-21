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

#include "deleteinvitationsrequest.h"
#include "deleteinvitationsrequest_p.h"
#include "deleteinvitationsresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  DeleteInvitationsRequest
 *
 * @brief  Implements GuardDuty DeleteInvitations requests.
 *
 * @see    GuardDutyClient::deleteInvitations
 */

/**
 * @brief  Constructs a new DeleteInvitationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInvitationsRequest::DeleteInvitationsRequest(const DeleteInvitationsRequest &other)
    : GuardDutyRequest(new DeleteInvitationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInvitationsRequest object.
 */
DeleteInvitationsRequest::DeleteInvitationsRequest()
    : GuardDutyRequest(new DeleteInvitationsRequestPrivate(GuardDutyRequest::DeleteInvitationsAction, this))
{

}

bool DeleteInvitationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInvitationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInvitationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * DeleteInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInvitationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInvitationsRequestPrivate
 *
 * @brief  Private implementation for DeleteInvitationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInvitationsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DeleteInvitationsRequest instance.
 */
DeleteInvitationsRequestPrivate::DeleteInvitationsRequestPrivate(
    const GuardDutyRequest::Action action, DeleteInvitationsRequest * const q)
    : DeleteInvitationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInvitationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInvitationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInvitationsRequest instance.
 */
DeleteInvitationsRequestPrivate::DeleteInvitationsRequestPrivate(
    const DeleteInvitationsRequestPrivate &other, DeleteInvitationsRequest * const q)
    : DeleteInvitationsPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
