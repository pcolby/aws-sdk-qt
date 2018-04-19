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
 * \brief The GetCSVHeaderRequest class provides an interface for CognitoIdentityProvider GetCSVHeader requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
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
 * Constructs a copy of \a other.
 */
GetCSVHeaderRequest::GetCSVHeaderRequest(const GetCSVHeaderRequest &other)
    : CognitoIdentityProviderRequest(new GetCSVHeaderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCSVHeaderRequest object.
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
 * Returns a GetCSVHeaderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCSVHeaderRequest::response(QNetworkReply * const reply) const
{
    return new GetCSVHeaderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetCSVHeaderRequestPrivate
 * \brief The GetCSVHeaderRequestPrivate class provides private implementation for GetCSVHeaderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 *
 * Constructs a GetCSVHeaderRequestPrivate object for CognitoIdentityProvider \a action with,
 * public implementation \a q.
 */
GetCSVHeaderRequestPrivate::GetCSVHeaderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetCSVHeaderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCSVHeaderRequest
 * class' copy constructor.
 */
GetCSVHeaderRequestPrivate::GetCSVHeaderRequestPrivate(
    const GetCSVHeaderRequestPrivate &other, GetCSVHeaderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
