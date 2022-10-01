// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserrequest.h"
#include "getuserrequest_p.h"
#include "getuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserRequest
 * \brief The GetUserRequest class provides an interface for CognitoIdentityProvider GetUser requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::getUser
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserRequest::GetUserRequest(const GetUserRequest &other)
    : CognitoIdentityProviderRequest(new GetUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserRequest object.
 */
GetUserRequest::GetUserRequest()
    : CognitoIdentityProviderRequest(new GetUserRequestPrivate(CognitoIdentityProviderRequest::GetUserAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserRequest::response(QNetworkReply * const reply) const
{
    return new GetUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserRequestPrivate
 * \brief The GetUserRequestPrivate class provides private implementation for GetUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserRequest
 * class' copy constructor.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const GetUserRequestPrivate &other, GetUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
