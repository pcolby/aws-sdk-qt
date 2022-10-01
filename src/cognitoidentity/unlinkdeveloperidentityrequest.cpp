// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unlinkdeveloperidentityrequest.h"
#include "unlinkdeveloperidentityrequest_p.h"
#include "unlinkdeveloperidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::UnlinkDeveloperIdentityRequest
 * \brief The UnlinkDeveloperIdentityRequest class provides an interface for CognitoIdentity UnlinkDeveloperIdentity requests.
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
 * \sa CognitoIdentityClient::unlinkDeveloperIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
UnlinkDeveloperIdentityRequest::UnlinkDeveloperIdentityRequest(const UnlinkDeveloperIdentityRequest &other)
    : CognitoIdentityRequest(new UnlinkDeveloperIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnlinkDeveloperIdentityRequest object.
 */
UnlinkDeveloperIdentityRequest::UnlinkDeveloperIdentityRequest()
    : CognitoIdentityRequest(new UnlinkDeveloperIdentityRequestPrivate(CognitoIdentityRequest::UnlinkDeveloperIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool UnlinkDeveloperIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnlinkDeveloperIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnlinkDeveloperIdentityRequest::response(QNetworkReply * const reply) const
{
    return new UnlinkDeveloperIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::UnlinkDeveloperIdentityRequestPrivate
 * \brief The UnlinkDeveloperIdentityRequestPrivate class provides private implementation for UnlinkDeveloperIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a UnlinkDeveloperIdentityRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
UnlinkDeveloperIdentityRequestPrivate::UnlinkDeveloperIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, UnlinkDeveloperIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnlinkDeveloperIdentityRequest
 * class' copy constructor.
 */
UnlinkDeveloperIdentityRequestPrivate::UnlinkDeveloperIdentityRequestPrivate(
    const UnlinkDeveloperIdentityRequestPrivate &other, UnlinkDeveloperIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
