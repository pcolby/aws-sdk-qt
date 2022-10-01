// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentityproviderrequest.h"
#include "deleteidentityproviderrequest_p.h"
#include "deleteidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderRequest
 * \brief The DeleteIdentityProviderRequest class provides an interface for CognitoIdentityProvider DeleteIdentityProvider requests.
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
 * \sa CognitoIdentityProviderClient::deleteIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIdentityProviderRequest::DeleteIdentityProviderRequest(const DeleteIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new DeleteIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIdentityProviderRequest object.
 */
DeleteIdentityProviderRequest::DeleteIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new DeleteIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::DeleteIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderRequestPrivate
 * \brief The DeleteIdentityProviderRequestPrivate class provides private implementation for DeleteIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteIdentityProviderRequestPrivate::DeleteIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityProviderRequest
 * class' copy constructor.
 */
DeleteIdentityProviderRequestPrivate::DeleteIdentityProviderRequestPrivate(
    const DeleteIdentityProviderRequestPrivate &other, DeleteIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
