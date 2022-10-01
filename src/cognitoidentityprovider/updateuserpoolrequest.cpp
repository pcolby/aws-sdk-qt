// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserpoolrequest.h"
#include "updateuserpoolrequest_p.h"
#include "updateuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolRequest
 * \brief The UpdateUserPoolRequest class provides an interface for CognitoIdentityProvider UpdateUserPool requests.
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
 * \sa CognitoIdentityProviderClient::updateUserPool
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserPoolRequest::UpdateUserPoolRequest(const UpdateUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new UpdateUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserPoolRequest object.
 */
UpdateUserPoolRequest::UpdateUserPoolRequest()
    : CognitoIdentityProviderRequest(new UpdateUserPoolRequestPrivate(CognitoIdentityProviderRequest::UpdateUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolRequestPrivate
 * \brief The UpdateUserPoolRequestPrivate class provides private implementation for UpdateUserPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserPoolRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateUserPoolRequestPrivate::UpdateUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserPoolRequest
 * class' copy constructor.
 */
UpdateUserPoolRequestPrivate::UpdateUserPoolRequestPrivate(
    const UpdateUserPoolRequestPrivate &other, UpdateUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
