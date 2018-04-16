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

#include "getcsvheaderrequest.h"
#include "getcsvheaderrequest_p.h"
#include "getcsvheaderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetCSVHeaderRequest
 *
 * \brief The GetCSVHeaderRequest class provides an interface for CognitoIdentityProvider GetCSVHeader requests.
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
 * \sa CognitoIdentityProviderClient::getCSVHeader
 */

/*!
 * @brief  Constructs a new GetCSVHeaderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCSVHeaderRequest::GetCSVHeaderRequest(const GetCSVHeaderRequest &other)
    : CognitoIdentityProviderRequest(new GetCSVHeaderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCSVHeaderRequest object.
 */
GetCSVHeaderRequest::GetCSVHeaderRequest()
    : CognitoIdentityProviderRequest(new GetCSVHeaderRequestPrivate(CognitoIdentityProviderRequest::GetCSVHeaderAction, this))
{

}

/*!
 * \reimp
 */
bool GetCSVHeaderRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCSVHeaderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCSVHeaderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCSVHeaderRequest::response(QNetworkReply * const reply) const
{
    return new GetCSVHeaderResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCSVHeaderRequestPrivate
 *
 * @brief  Private implementation for GetCSVHeaderRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCSVHeaderRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetCSVHeaderRequest instance.
 */
GetCSVHeaderRequestPrivate::GetCSVHeaderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetCSVHeaderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCSVHeaderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCSVHeaderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCSVHeaderRequest instance.
 */
GetCSVHeaderRequestPrivate::GetCSVHeaderRequestPrivate(
    const GetCSVHeaderRequestPrivate &other, GetCSVHeaderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
