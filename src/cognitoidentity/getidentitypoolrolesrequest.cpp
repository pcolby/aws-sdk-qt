// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitypoolrolesrequest.h"
#include "getidentitypoolrolesrequest_p.h"
#include "getidentitypoolrolesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::GetIdentityPoolRolesRequest
 * \brief The GetIdentityPoolRolesRequest class provides an interface for CognitoIdentity GetIdentityPoolRoles requests.
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
 * \sa CognitoIdentityClient::getIdentityPoolRoles
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityPoolRolesRequest::GetIdentityPoolRolesRequest(const GetIdentityPoolRolesRequest &other)
    : CognitoIdentityRequest(new GetIdentityPoolRolesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityPoolRolesRequest object.
 */
GetIdentityPoolRolesRequest::GetIdentityPoolRolesRequest()
    : CognitoIdentityRequest(new GetIdentityPoolRolesRequestPrivate(CognitoIdentityRequest::GetIdentityPoolRolesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityPoolRolesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityPoolRolesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityPoolRolesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityPoolRolesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::GetIdentityPoolRolesRequestPrivate
 * \brief The GetIdentityPoolRolesRequestPrivate class provides private implementation for GetIdentityPoolRolesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a GetIdentityPoolRolesRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
GetIdentityPoolRolesRequestPrivate::GetIdentityPoolRolesRequestPrivate(
    const CognitoIdentityRequest::Action action, GetIdentityPoolRolesRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityPoolRolesRequest
 * class' copy constructor.
 */
GetIdentityPoolRolesRequestPrivate::GetIdentityPoolRolesRequestPrivate(
    const GetIdentityPoolRolesRequestPrivate &other, GetIdentityPoolRolesRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
