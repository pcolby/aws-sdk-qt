// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourceserverrequest.h"
#include "deleteresourceserverrequest_p.h"
#include "deleteresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteResourceServerRequest
 * \brief The DeleteResourceServerRequest class provides an interface for CognitoIdentityProvider DeleteResourceServer requests.
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
 * \sa CognitoIdentityProviderClient::deleteResourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceServerRequest::DeleteResourceServerRequest(const DeleteResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new DeleteResourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceServerRequest object.
 */
DeleteResourceServerRequest::DeleteResourceServerRequest()
    : CognitoIdentityProviderRequest(new DeleteResourceServerRequestPrivate(CognitoIdentityProviderRequest::DeleteResourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteResourceServerRequestPrivate
 * \brief The DeleteResourceServerRequestPrivate class provides private implementation for DeleteResourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteResourceServerRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteResourceServerRequestPrivate::DeleteResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceServerRequest
 * class' copy constructor.
 */
DeleteResourceServerRequestPrivate::DeleteResourceServerRequestPrivate(
    const DeleteResourceServerRequestPrivate &other, DeleteResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
