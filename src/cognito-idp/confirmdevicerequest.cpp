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

#include "confirmdevicerequest.h"
#include "confirmdevicerequest_p.h"
#include "confirmdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceRequest
 *
 * \brief The ConfirmDeviceRequest class provides an interface for CognitoIdentityProvider ConfirmDevice requests.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::confirmDevice
 */

/*!
 * @brief  Constructs a new ConfirmDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmDeviceRequest::ConfirmDeviceRequest(const ConfirmDeviceRequest &other)
    : CognitoIdentityProviderRequest(new ConfirmDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ConfirmDeviceRequest object.
 */
ConfirmDeviceRequest::ConfirmDeviceRequest()
    : CognitoIdentityProviderRequest(new ConfirmDeviceRequestPrivate(CognitoIdentityProviderRequest::ConfirmDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmDeviceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ConfirmDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmDeviceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmDeviceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ConfirmDeviceRequestPrivate
 *
 * @brief  Private implementation for ConfirmDeviceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ConfirmDeviceRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ConfirmDeviceRequest instance.
 */
ConfirmDeviceRequestPrivate::ConfirmDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ConfirmDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ConfirmDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmDeviceRequest instance.
 */
ConfirmDeviceRequestPrivate::ConfirmDeviceRequestPrivate(
    const ConfirmDeviceRequestPrivate &other, ConfirmDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
