// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserattributesrequest.h"
#include "deleteuserattributesrequest_p.h"
#include "deleteuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserAttributesRequest
 * \brief The DeleteUserAttributesRequest class provides an interface for CognitoIdentityProvider DeleteUserAttributes requests.
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
 * \sa CognitoIdentityProviderClient::deleteUserAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserAttributesRequest::DeleteUserAttributesRequest(const DeleteUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserAttributesRequest object.
 */
DeleteUserAttributesRequest::DeleteUserAttributesRequest()
    : CognitoIdentityProviderRequest(new DeleteUserAttributesRequestPrivate(CognitoIdentityProviderRequest::DeleteUserAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserAttributesRequestPrivate
 * \brief The DeleteUserAttributesRequestPrivate class provides private implementation for DeleteUserAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserAttributesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteUserAttributesRequestPrivate::DeleteUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserAttributesRequest
 * class' copy constructor.
 */
DeleteUserAttributesRequestPrivate::DeleteUserAttributesRequestPrivate(
    const DeleteUserAttributesRequestPrivate &other, DeleteUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
