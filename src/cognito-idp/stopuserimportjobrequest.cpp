/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stopuserimportjobrequest.h"
#include "stopuserimportjobrequest_p.h"
#include "stopuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::StopUserImportJobRequest
 * \brief The StopUserImportJobRequest class provides an interface for CognitoIdentityProvider StopUserImportJob requests.
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
 * \sa CognitoIdentityProviderClient::stopUserImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopUserImportJobRequest::StopUserImportJobRequest(const StopUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new StopUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopUserImportJobRequest object.
 */
StopUserImportJobRequest::StopUserImportJobRequest()
    : CognitoIdentityProviderRequest(new StopUserImportJobRequestPrivate(CognitoIdentityProviderRequest::StopUserImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopUserImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopUserImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StopUserImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::StopUserImportJobRequestPrivate
 * \brief The StopUserImportJobRequestPrivate class provides private implementation for StopUserImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a StopUserImportJobRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
StopUserImportJobRequestPrivate::StopUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, StopUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopUserImportJobRequest
 * class' copy constructor.
 */
StopUserImportJobRequestPrivate::StopUserImportJobRequestPrivate(
    const StopUserImportJobRequestPrivate &other, StopUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
