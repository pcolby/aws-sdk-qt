// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminsetusersettingsrequest.h"
#include "adminsetusersettingsrequest_p.h"
#include "adminsetusersettingsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsRequest
 * \brief The AdminSetUserSettingsRequest class provides an interface for CognitoIdentityProvider AdminSetUserSettings requests.
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
 * \sa CognitoIdentityProviderClient::adminSetUserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
AdminSetUserSettingsRequest::AdminSetUserSettingsRequest(const AdminSetUserSettingsRequest &other)
    : CognitoIdentityProviderRequest(new AdminSetUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminSetUserSettingsRequest object.
 */
AdminSetUserSettingsRequest::AdminSetUserSettingsRequest()
    : CognitoIdentityProviderRequest(new AdminSetUserSettingsRequestPrivate(CognitoIdentityProviderRequest::AdminSetUserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool AdminSetUserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminSetUserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminSetUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new AdminSetUserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsRequestPrivate
 * \brief The AdminSetUserSettingsRequestPrivate class provides private implementation for AdminSetUserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserSettingsRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminSetUserSettingsRequestPrivate::AdminSetUserSettingsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminSetUserSettingsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminSetUserSettingsRequest
 * class' copy constructor.
 */
AdminSetUserSettingsRequestPrivate::AdminSetUserSettingsRequestPrivate(
    const AdminSetUserSettingsRequestPrivate &other, AdminSetUserSettingsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
