/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
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
