/*
    Copyright 2013-2021 Paul Colby

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

#include "createtokenrequest.h"
#include "createtokenrequest_p.h"
#include "createtokenresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateTokenRequest
 * \brief The CreateTokenRequest class provides an interface for AmplifyBackend CreateToken requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createToken
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTokenRequest::CreateTokenRequest(const CreateTokenRequest &other)
    : AmplifyBackendRequest(new CreateTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTokenRequest object.
 */
CreateTokenRequest::CreateTokenRequest()
    : AmplifyBackendRequest(new CreateTokenRequestPrivate(AmplifyBackendRequest::CreateTokenAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTokenRequest::response(QNetworkReply * const reply) const
{
    return new CreateTokenResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateTokenRequestPrivate
 * \brief The CreateTokenRequestPrivate class provides private implementation for CreateTokenRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateTokenRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateTokenRequestPrivate::CreateTokenRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateTokenRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTokenRequest
 * class' copy constructor.
 */
CreateTokenRequestPrivate::CreateTokenRequestPrivate(
    const CreateTokenRequestPrivate &other, CreateTokenRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
