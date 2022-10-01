// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admindeleteuserattributesrequest.h"
#include "admindeleteuserattributesrequest_p.h"
#include "admindeleteuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserAttributesRequest
 * \brief The AdminDeleteUserAttributesRequest class provides an interface for CognitoIdentityProvider AdminDeleteUserAttributes requests.
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
 * \sa CognitoIdentityProviderClient::adminDeleteUserAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest(const AdminDeleteUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new AdminDeleteUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDeleteUserAttributesRequest object.
 */
AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest()
    : CognitoIdentityProviderRequest(new AdminDeleteUserAttributesRequestPrivate(CognitoIdentityProviderRequest::AdminDeleteUserAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDeleteUserAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDeleteUserAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDeleteUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new AdminDeleteUserAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserAttributesRequestPrivate
 * \brief The AdminDeleteUserAttributesRequestPrivate class provides private implementation for AdminDeleteUserAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDeleteUserAttributesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminDeleteUserAttributesRequestPrivate::AdminDeleteUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDeleteUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDeleteUserAttributesRequest
 * class' copy constructor.
 */
AdminDeleteUserAttributesRequestPrivate::AdminDeleteUserAttributesRequestPrivate(
    const AdminDeleteUserAttributesRequestPrivate &other, AdminDeleteUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
