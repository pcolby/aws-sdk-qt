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

#include "createbackendauthrequest.h"
#include "createbackendauthrequest_p.h"
#include "createbackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAuthRequest
 * \brief The CreateBackendAuthRequest class provides an interface for AmplifyBackend CreateBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendAuthRequest::CreateBackendAuthRequest(const CreateBackendAuthRequest &other)
    : AmplifyBackendRequest(new CreateBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendAuthRequest object.
 */
CreateBackendAuthRequest::CreateBackendAuthRequest()
    : AmplifyBackendRequest(new CreateBackendAuthRequestPrivate(AmplifyBackendRequest::CreateBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAuthRequestPrivate
 * \brief The CreateBackendAuthRequestPrivate class provides private implementation for CreateBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendAuthRequestPrivate::CreateBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendAuthRequest
 * class' copy constructor.
 */
CreateBackendAuthRequestPrivate::CreateBackendAuthRequestPrivate(
    const CreateBackendAuthRequestPrivate &other, CreateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
