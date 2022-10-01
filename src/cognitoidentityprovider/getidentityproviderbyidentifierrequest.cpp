// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentityproviderbyidentifierrequest.h"
#include "getidentityproviderbyidentifierrequest_p.h"
#include "getidentityproviderbyidentifierresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetIdentityProviderByIdentifierRequest
 * \brief The GetIdentityProviderByIdentifierRequest class provides an interface for CognitoIdentityProvider GetIdentityProviderByIdentifier requests.
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
 * \sa CognitoIdentityProviderClient::getIdentityProviderByIdentifier
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityProviderByIdentifierRequest::GetIdentityProviderByIdentifierRequest(const GetIdentityProviderByIdentifierRequest &other)
    : CognitoIdentityProviderRequest(new GetIdentityProviderByIdentifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityProviderByIdentifierRequest object.
 */
GetIdentityProviderByIdentifierRequest::GetIdentityProviderByIdentifierRequest()
    : CognitoIdentityProviderRequest(new GetIdentityProviderByIdentifierRequestPrivate(CognitoIdentityProviderRequest::GetIdentityProviderByIdentifierAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityProviderByIdentifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityProviderByIdentifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityProviderByIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityProviderByIdentifierResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetIdentityProviderByIdentifierRequestPrivate
 * \brief The GetIdentityProviderByIdentifierRequestPrivate class provides private implementation for GetIdentityProviderByIdentifierRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetIdentityProviderByIdentifierRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GetIdentityProviderByIdentifierRequestPrivate::GetIdentityProviderByIdentifierRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetIdentityProviderByIdentifierRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityProviderByIdentifierRequest
 * class' copy constructor.
 */
GetIdentityProviderByIdentifierRequestPrivate::GetIdentityProviderByIdentifierRequestPrivate(
    const GetIdentityProviderByIdentifierRequestPrivate &other, GetIdentityProviderByIdentifierRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
