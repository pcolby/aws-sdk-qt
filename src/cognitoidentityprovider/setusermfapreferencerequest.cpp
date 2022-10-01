// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setusermfapreferencerequest.h"
#include "setusermfapreferencerequest_p.h"
#include "setusermfapreferenceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserMFAPreferenceRequest
 * \brief The SetUserMFAPreferenceRequest class provides an interface for CognitoIdentityProvider SetUserMFAPreference requests.
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
 * \sa CognitoIdentityProviderClient::setUserMFAPreference
 */

/*!
 * Constructs a copy of \a other.
 */
SetUserMFAPreferenceRequest::SetUserMFAPreferenceRequest(const SetUserMFAPreferenceRequest &other)
    : CognitoIdentityProviderRequest(new SetUserMFAPreferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetUserMFAPreferenceRequest object.
 */
SetUserMFAPreferenceRequest::SetUserMFAPreferenceRequest()
    : CognitoIdentityProviderRequest(new SetUserMFAPreferenceRequestPrivate(CognitoIdentityProviderRequest::SetUserMFAPreferenceAction, this))
{

}

/*!
 * \reimp
 */
bool SetUserMFAPreferenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetUserMFAPreferenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetUserMFAPreferenceRequest::response(QNetworkReply * const reply) const
{
    return new SetUserMFAPreferenceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserMFAPreferenceRequestPrivate
 * \brief The SetUserMFAPreferenceRequestPrivate class provides private implementation for SetUserMFAPreferenceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUserMFAPreferenceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
SetUserMFAPreferenceRequestPrivate::SetUserMFAPreferenceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetUserMFAPreferenceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetUserMFAPreferenceRequest
 * class' copy constructor.
 */
SetUserMFAPreferenceRequestPrivate::SetUserMFAPreferenceRequestPrivate(
    const SetUserMFAPreferenceRequestPrivate &other, SetUserMFAPreferenceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
