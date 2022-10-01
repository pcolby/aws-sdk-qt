// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourceserversrequest.h"
#include "listresourceserversrequest_p.h"
#include "listresourceserversresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersRequest
 * \brief The ListResourceServersRequest class provides an interface for CognitoIdentityProvider ListResourceServers requests.
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
 * \sa CognitoIdentityProviderClient::listResourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceServersRequest::ListResourceServersRequest(const ListResourceServersRequest &other)
    : CognitoIdentityProviderRequest(new ListResourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceServersRequest object.
 */
ListResourceServersRequest::ListResourceServersRequest()
    : CognitoIdentityProviderRequest(new ListResourceServersRequestPrivate(CognitoIdentityProviderRequest::ListResourceServersAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceServersRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceServersResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersRequestPrivate
 * \brief The ListResourceServersRequestPrivate class provides private implementation for ListResourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListResourceServersRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListResourceServersRequestPrivate::ListResourceServersRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListResourceServersRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceServersRequest
 * class' copy constructor.
 */
ListResourceServersRequestPrivate::ListResourceServersRequestPrivate(
    const ListResourceServersRequestPrivate &other, ListResourceServersRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
