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

#include "adminupdateautheventfeedbackrequest.h"
#include "adminupdateautheventfeedbackrequest_p.h"
#include "adminupdateautheventfeedbackresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUpdateAuthEventFeedbackRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminUpdateAuthEventFeedback requests.
 *
 * @see    CognitoIdentityProviderClient::adminUpdateAuthEventFeedback
 */

/**
 * @brief  Constructs a new AdminUpdateAuthEventFeedbackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminUpdateAuthEventFeedbackResponse::AdminUpdateAuthEventFeedbackResponse(

/**
 * @brief  Constructs a new AdminUpdateAuthEventFeedbackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminUpdateAuthEventFeedbackRequest::AdminUpdateAuthEventFeedbackRequest(const AdminUpdateAuthEventFeedbackRequest &other)
    : CognitoIdentityProviderRequest(new AdminUpdateAuthEventFeedbackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminUpdateAuthEventFeedbackRequest object.
 */
AdminUpdateAuthEventFeedbackRequest::AdminUpdateAuthEventFeedbackRequest()
    : CognitoIdentityProviderRequest(new AdminUpdateAuthEventFeedbackRequestPrivate(CognitoIdentityProviderRequest::AdminUpdateAuthEventFeedbackAction, this))
{

}

bool AdminUpdateAuthEventFeedbackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminUpdateAuthEventFeedbackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminUpdateAuthEventFeedbackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminUpdateAuthEventFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new AdminUpdateAuthEventFeedbackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminUpdateAuthEventFeedbackRequestPrivate
 *
 * @brief  Private implementation for AdminUpdateAuthEventFeedbackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateAuthEventFeedbackRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminUpdateAuthEventFeedbackRequest instance.
 */
AdminUpdateAuthEventFeedbackRequestPrivate::AdminUpdateAuthEventFeedbackRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUpdateAuthEventFeedbackRequest * const q)
    : AdminUpdateAuthEventFeedbackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateAuthEventFeedbackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminUpdateAuthEventFeedbackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminUpdateAuthEventFeedbackRequest instance.
 */
AdminUpdateAuthEventFeedbackRequestPrivate::AdminUpdateAuthEventFeedbackRequestPrivate(
    const AdminUpdateAuthEventFeedbackRequestPrivate &other, AdminUpdateAuthEventFeedbackRequest * const q)
    : AdminUpdateAuthEventFeedbackPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
