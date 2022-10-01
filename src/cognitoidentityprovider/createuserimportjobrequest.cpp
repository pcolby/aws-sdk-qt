// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserimportjobrequest.h"
#include "createuserimportjobrequest_p.h"
#include "createuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserImportJobRequest
 * \brief The CreateUserImportJobRequest class provides an interface for CognitoIdentityProvider CreateUserImportJob requests.
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
 * \sa CognitoIdentityProviderClient::createUserImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserImportJobRequest::CreateUserImportJobRequest(const CreateUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserImportJobRequest object.
 */
CreateUserImportJobRequest::CreateUserImportJobRequest()
    : CognitoIdentityProviderRequest(new CreateUserImportJobRequestPrivate(CognitoIdentityProviderRequest::CreateUserImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserImportJobRequestPrivate
 * \brief The CreateUserImportJobRequestPrivate class provides private implementation for CreateUserImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserImportJobRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateUserImportJobRequestPrivate::CreateUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserImportJobRequest
 * class' copy constructor.
 */
CreateUserImportJobRequestPrivate::CreateUserImportJobRequestPrivate(
    const CreateUserImportJobRequestPrivate &other, CreateUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
