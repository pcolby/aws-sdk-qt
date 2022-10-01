// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentitypoolrequest.h"
#include "updateidentitypoolrequest_p.h"
#include "updateidentitypoolresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::UpdateIdentityPoolRequest
 * \brief The UpdateIdentityPoolRequest class provides an interface for CognitoIdentity UpdateIdentityPool requests.
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
 * \sa CognitoIdentityClient::updateIdentityPool
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIdentityPoolRequest::UpdateIdentityPoolRequest(const UpdateIdentityPoolRequest &other)
    : CognitoIdentityRequest(new UpdateIdentityPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIdentityPoolRequest object.
 */
UpdateIdentityPoolRequest::UpdateIdentityPoolRequest()
    : CognitoIdentityRequest(new UpdateIdentityPoolRequestPrivate(CognitoIdentityRequest::UpdateIdentityPoolAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIdentityPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIdentityPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIdentityPoolRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIdentityPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::UpdateIdentityPoolRequestPrivate
 * \brief The UpdateIdentityPoolRequestPrivate class provides private implementation for UpdateIdentityPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a UpdateIdentityPoolRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
UpdateIdentityPoolRequestPrivate::UpdateIdentityPoolRequestPrivate(
    const CognitoIdentityRequest::Action action, UpdateIdentityPoolRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIdentityPoolRequest
 * class' copy constructor.
 */
UpdateIdentityPoolRequestPrivate::UpdateIdentityPoolRequestPrivate(
    const UpdateIdentityPoolRequestPrivate &other, UpdateIdentityPoolRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
