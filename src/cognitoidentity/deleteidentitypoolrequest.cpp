/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteidentitypoolrequest.h"
#include "deleteidentitypoolrequest_p.h"
#include "deleteidentitypoolresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::DeleteIdentityPoolRequest
 * \brief The DeleteIdentityPoolRequest class provides an interface for CognitoIdentity DeleteIdentityPool requests.
 *
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito Federated Identities</fullname>
 * 
 *  Amazon Cognito Federated Identities is a web service that delivers scoped temporary credentials to mobile devices and
 *  other untrusted environments. It uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito Federated Identities, you can enable authentication with one or more third-party identity providers
 *  (Facebook, Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also choose to support
 *  unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token
 *  provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  For a description of the authentication flow from the Amazon Cognito Developer Guide see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
 * 
 *  Flow</a>>
 * 
 *  For more information see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon Cognito Federated
 *
 * \sa CognitoIdentityClient::deleteIdentityPool
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIdentityPoolRequest::DeleteIdentityPoolRequest(const DeleteIdentityPoolRequest &other)
    : CognitoIdentityRequest(new DeleteIdentityPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIdentityPoolRequest object.
 */
DeleteIdentityPoolRequest::DeleteIdentityPoolRequest()
    : CognitoIdentityRequest(new DeleteIdentityPoolRequestPrivate(CognitoIdentityRequest::DeleteIdentityPoolAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentityPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIdentityPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityPoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::DeleteIdentityPoolRequestPrivate
 * \brief The DeleteIdentityPoolRequestPrivate class provides private implementation for DeleteIdentityPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a DeleteIdentityPoolRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
DeleteIdentityPoolRequestPrivate::DeleteIdentityPoolRequestPrivate(
    const CognitoIdentityRequest::Action action, DeleteIdentityPoolRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityPoolRequest
 * class' copy constructor.
 */
DeleteIdentityPoolRequestPrivate::DeleteIdentityPoolRequestPrivate(
    const DeleteIdentityPoolRequestPrivate &other, DeleteIdentityPoolRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
