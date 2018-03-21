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

#include "listinvitationsrequest.h"
#include "listinvitationsrequest_p.h"
#include "listinvitationsresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  ListInvitationsRequest
 *
 * @brief  Implements GuardDuty ListInvitations requests.
 *
 * @see    GuardDutyClient::listInvitations
 */

/**
 * @brief  Constructs a new ListInvitationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInvitationsResponse::ListInvitationsResponse(

/**
 * @brief  Constructs a new ListInvitationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInvitationsRequest::ListInvitationsRequest(const ListInvitationsRequest &other)
    : GuardDutyRequest(new ListInvitationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInvitationsRequest object.
 */
ListInvitationsRequest::ListInvitationsRequest()
    : GuardDutyRequest(new ListInvitationsRequestPrivate(GuardDutyRequest::ListInvitationsAction, this))
{

}

bool ListInvitationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInvitationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInvitationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * ListInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new ListInvitationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInvitationsRequestPrivate
 *
 * @brief  Private implementation for ListInvitationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInvitationsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public ListInvitationsRequest instance.
 */
ListInvitationsRequestPrivate::ListInvitationsRequestPrivate(
    const GuardDutyRequest::Action action, ListInvitationsRequest * const q)
    : ListInvitationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInvitationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInvitationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInvitationsRequest instance.
 */
ListInvitationsRequestPrivate::ListInvitationsRequestPrivate(
    const ListInvitationsRequestPrivate &other, ListInvitationsRequest * const q)
    : ListInvitationsPrivate(other, q)
{

}
