// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpoolrequest.h"
#include "deleteuserpoolrequest_p.h"
#include "deleteuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolRequest
 * \brief The DeleteUserPoolRequest class provides an interface for CognitoIdentityProvider DeleteUserPool requests.
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
 * \sa CognitoIdentityProviderClient::deleteUserPool
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserPoolRequest::DeleteUserPoolRequest(const DeleteUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserPoolRequest object.
 */
DeleteUserPoolRequest::DeleteUserPoolRequest()
    : CognitoIdentityProviderRequest(new DeleteUserPoolRequestPrivate(CognitoIdentityProviderRequest::DeleteUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolRequestPrivate
 * \brief The DeleteUserPoolRequestPrivate class provides private implementation for DeleteUserPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteUserPoolRequestPrivate::DeleteUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPoolRequest
 * class' copy constructor.
 */
DeleteUserPoolRequestPrivate::DeleteUserPoolRequestPrivate(
    const DeleteUserPoolRequestPrivate &other, DeleteUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
