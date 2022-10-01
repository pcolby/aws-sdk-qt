// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserattributesrequest.h"
#include "updateuserattributesrequest_p.h"
#include "updateuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserAttributesRequest
 * \brief The UpdateUserAttributesRequest class provides an interface for CognitoIdentityProvider UpdateUserAttributes requests.
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
 * \sa CognitoIdentityProviderClient::updateUserAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserAttributesRequest::UpdateUserAttributesRequest(const UpdateUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new UpdateUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserAttributesRequest object.
 */
UpdateUserAttributesRequest::UpdateUserAttributesRequest()
    : CognitoIdentityProviderRequest(new UpdateUserAttributesRequestPrivate(CognitoIdentityProviderRequest::UpdateUserAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserAttributesRequestPrivate
 * \brief The UpdateUserAttributesRequestPrivate class provides private implementation for UpdateUserAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserAttributesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateUserAttributesRequestPrivate::UpdateUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserAttributesRequest
 * class' copy constructor.
 */
UpdateUserAttributesRequestPrivate::UpdateUserAttributesRequestPrivate(
    const UpdateUserAttributesRequestPrivate &other, UpdateUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
