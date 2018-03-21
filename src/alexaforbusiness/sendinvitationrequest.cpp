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

#include "sendinvitationrequest.h"
#include "sendinvitationrequest_p.h"
#include "sendinvitationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SendInvitationRequest
 *
 * @brief  Implements AlexaForBusiness SendInvitation requests.
 *
 * @see    AlexaForBusinessClient::sendInvitation
 */

/**
 * @brief  Constructs a new SendInvitationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendInvitationResponse::SendInvitationResponse(

/**
 * @brief  Constructs a new SendInvitationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendInvitationRequest::SendInvitationRequest(const SendInvitationRequest &other)
    : AlexaForBusinessRequest(new SendInvitationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendInvitationRequest object.
 */
SendInvitationRequest::SendInvitationRequest()
    : AlexaForBusinessRequest(new SendInvitationRequestPrivate(AlexaForBusinessRequest::SendInvitationAction, this))
{

}

bool SendInvitationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendInvitationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendInvitationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * SendInvitationRequest::response(QNetworkReply * const reply) const
{
    return new SendInvitationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendInvitationRequestPrivate
 *
 * @brief  Private implementation for SendInvitationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendInvitationRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public SendInvitationRequest instance.
 */
SendInvitationRequestPrivate::SendInvitationRequestPrivate(
    const AlexaForBusinessRequest::Action action, SendInvitationRequest * const q)
    : SendInvitationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendInvitationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendInvitationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendInvitationRequest instance.
 */
SendInvitationRequestPrivate::SendInvitationRequestPrivate(
    const SendInvitationRequestPrivate &other, SendInvitationRequest * const q)
    : SendInvitationPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
