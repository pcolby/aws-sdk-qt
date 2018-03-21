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

#include "acceptinvitationrequest.h"
#include "acceptinvitationrequest_p.h"
#include "acceptinvitationresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  AcceptInvitationRequest
 *
 * @brief  Implements GuardDuty AcceptInvitation requests.
 *
 * @see    GuardDutyClient::acceptInvitation
 */

/**
 * @brief  Constructs a new AcceptInvitationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptInvitationResponse::AcceptInvitationResponse(

/**
 * @brief  Constructs a new AcceptInvitationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptInvitationRequest::AcceptInvitationRequest(const AcceptInvitationRequest &other)
    : GuardDutyRequest(new AcceptInvitationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptInvitationRequest object.
 */
AcceptInvitationRequest::AcceptInvitationRequest()
    : GuardDutyRequest(new AcceptInvitationRequestPrivate(GuardDutyRequest::AcceptInvitationAction, this))
{

}

bool AcceptInvitationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptInvitationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptInvitationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * AcceptInvitationRequest::response(QNetworkReply * const reply) const
{
    return new AcceptInvitationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptInvitationRequestPrivate
 *
 * @brief  Private implementation for AcceptInvitationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptInvitationRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public AcceptInvitationRequest instance.
 */
AcceptInvitationRequestPrivate::AcceptInvitationRequestPrivate(
    const GuardDutyRequest::Action action, AcceptInvitationRequest * const q)
    : AcceptInvitationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptInvitationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptInvitationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptInvitationRequest instance.
 */
AcceptInvitationRequestPrivate::AcceptInvitationRequestPrivate(
    const AcceptInvitationRequestPrivate &other, AcceptInvitationRequest * const q)
    : AcceptInvitationPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
