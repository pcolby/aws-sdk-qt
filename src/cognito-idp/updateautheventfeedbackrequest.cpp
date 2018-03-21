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

#include "updateautheventfeedbackrequest.h"
#include "updateautheventfeedbackrequest_p.h"
#include "updateautheventfeedbackresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateAuthEventFeedbackRequest
 *
 * @brief  Implements CognitoIdentityProvider UpdateAuthEventFeedback requests.
 *
 * @see    CognitoIdentityProviderClient::updateAuthEventFeedback
 */

/**
 * @brief  Constructs a new UpdateAuthEventFeedbackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAuthEventFeedbackResponse::UpdateAuthEventFeedbackResponse(

/**
 * @brief  Constructs a new UpdateAuthEventFeedbackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAuthEventFeedbackRequest::UpdateAuthEventFeedbackRequest(const UpdateAuthEventFeedbackRequest &other)
    : CognitoIdentityProviderRequest(new UpdateAuthEventFeedbackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAuthEventFeedbackRequest object.
 */
UpdateAuthEventFeedbackRequest::UpdateAuthEventFeedbackRequest()
    : CognitoIdentityProviderRequest(new UpdateAuthEventFeedbackRequestPrivate(CognitoIdentityProviderRequest::UpdateAuthEventFeedbackAction, this))
{

}

bool UpdateAuthEventFeedbackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAuthEventFeedbackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAuthEventFeedbackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * UpdateAuthEventFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAuthEventFeedbackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAuthEventFeedbackRequestPrivate
 *
 * @brief  Private implementation for UpdateAuthEventFeedbackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAuthEventFeedbackRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public UpdateAuthEventFeedbackRequest instance.
 */
UpdateAuthEventFeedbackRequestPrivate::UpdateAuthEventFeedbackRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateAuthEventFeedbackRequest * const q)
    : UpdateAuthEventFeedbackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAuthEventFeedbackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAuthEventFeedbackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAuthEventFeedbackRequest instance.
 */
UpdateAuthEventFeedbackRequestPrivate::UpdateAuthEventFeedbackRequestPrivate(
    const UpdateAuthEventFeedbackRequestPrivate &other, UpdateAuthEventFeedbackRequest * const q)
    : UpdateAuthEventFeedbackPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
