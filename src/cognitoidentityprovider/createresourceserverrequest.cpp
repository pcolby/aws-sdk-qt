// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourceserverrequest.h"
#include "createresourceserverrequest_p.h"
#include "createresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateResourceServerRequest
 * \brief The CreateResourceServerRequest class provides an interface for CognitoIdentityProvider CreateResourceServer requests.
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
 * \sa CognitoIdentityProviderClient::createResourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceServerRequest::CreateResourceServerRequest(const CreateResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new CreateResourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceServerRequest object.
 */
CreateResourceServerRequest::CreateResourceServerRequest()
    : CognitoIdentityProviderRequest(new CreateResourceServerRequestPrivate(CognitoIdentityProviderRequest::CreateResourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateResourceServerRequestPrivate
 * \brief The CreateResourceServerRequestPrivate class provides private implementation for CreateResourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateResourceServerRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateResourceServerRequestPrivate::CreateResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceServerRequest
 * class' copy constructor.
 */
CreateResourceServerRequestPrivate::CreateResourceServerRequestPrivate(
    const CreateResourceServerRequestPrivate &other, CreateResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
