// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserpoolclientrequest.h"
#include "updateuserpoolclientrequest_p.h"
#include "updateuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolClientRequest
 * \brief The UpdateUserPoolClientRequest class provides an interface for CognitoIdentityProvider UpdateUserPoolClient requests.
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
 * \sa CognitoIdentityProviderClient::updateUserPoolClient
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserPoolClientRequest::UpdateUserPoolClientRequest(const UpdateUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new UpdateUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserPoolClientRequest object.
 */
UpdateUserPoolClientRequest::UpdateUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new UpdateUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::UpdateUserPoolClientAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserPoolClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserPoolClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserPoolClientResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolClientRequestPrivate
 * \brief The UpdateUserPoolClientRequestPrivate class provides private implementation for UpdateUserPoolClientRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserPoolClientRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateUserPoolClientRequestPrivate::UpdateUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserPoolClientRequest
 * class' copy constructor.
 */
UpdateUserPoolClientRequestPrivate::UpdateUserPoolClientRequestPrivate(
    const UpdateUserPoolClientRequestPrivate &other, UpdateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
