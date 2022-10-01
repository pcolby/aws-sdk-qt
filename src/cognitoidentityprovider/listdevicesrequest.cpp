// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesrequest.h"
#include "listdevicesrequest_p.h"
#include "listdevicesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListDevicesRequest
 * \brief The ListDevicesRequest class provides an interface for CognitoIdentityProvider ListDevices requests.
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
 * \sa CognitoIdentityProviderClient::listDevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicesRequest::ListDevicesRequest(const ListDevicesRequest &other)
    : CognitoIdentityProviderRequest(new ListDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicesRequest object.
 */
ListDevicesRequest::ListDevicesRequest()
    : CognitoIdentityProviderRequest(new ListDevicesRequestPrivate(CognitoIdentityProviderRequest::ListDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListDevicesRequestPrivate
 * \brief The ListDevicesRequestPrivate class provides private implementation for ListDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListDevicesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListDevicesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesRequest
 * class' copy constructor.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const ListDevicesRequestPrivate &other, ListDevicesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
