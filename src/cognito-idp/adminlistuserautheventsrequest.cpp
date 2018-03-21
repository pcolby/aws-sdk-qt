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

#include "adminlistuserautheventsrequest.h"
#include "adminlistuserautheventsrequest_p.h"
#include "adminlistuserautheventsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminListUserAuthEventsRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminListUserAuthEvents requests.
 *
 * @see    CognitoIdentityProviderClient::adminListUserAuthEvents
 */

/**
 * @brief  Constructs a new AdminListUserAuthEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminListUserAuthEventsResponse::AdminListUserAuthEventsResponse(

/**
 * @brief  Constructs a new AdminListUserAuthEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminListUserAuthEventsRequest::AdminListUserAuthEventsRequest(const AdminListUserAuthEventsRequest &other)
    : CognitoIdentityProviderRequest(new AdminListUserAuthEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminListUserAuthEventsRequest object.
 */
AdminListUserAuthEventsRequest::AdminListUserAuthEventsRequest()
    : CognitoIdentityProviderRequest(new AdminListUserAuthEventsRequestPrivate(CognitoIdentityProviderRequest::AdminListUserAuthEventsAction, this))
{

}

bool AdminListUserAuthEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminListUserAuthEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminListUserAuthEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminListUserAuthEventsRequest::response(QNetworkReply * const reply) const
{
    return new AdminListUserAuthEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminListUserAuthEventsRequestPrivate
 *
 * @brief  Private implementation for AdminListUserAuthEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminListUserAuthEventsRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminListUserAuthEventsRequest instance.
 */
AdminListUserAuthEventsRequestPrivate::AdminListUserAuthEventsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListUserAuthEventsRequest * const q)
    : AdminListUserAuthEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminListUserAuthEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminListUserAuthEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminListUserAuthEventsRequest instance.
 */
AdminListUserAuthEventsRequestPrivate::AdminListUserAuthEventsRequestPrivate(
    const AdminListUserAuthEventsRequestPrivate &other, AdminListUserAuthEventsRequest * const q)
    : AdminListUserAuthEventsPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
