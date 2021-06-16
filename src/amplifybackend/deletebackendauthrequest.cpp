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

#include "deletebackendauthrequest.h"
#include "deletebackendauthrequest_p.h"
#include "deletebackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAuthRequest
 * \brief The DeleteBackendAuthRequest class provides an interface for AmplifyBackend DeleteBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendAuthRequest::DeleteBackendAuthRequest(const DeleteBackendAuthRequest &other)
    : AmplifyBackendRequest(new DeleteBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendAuthRequest object.
 */
DeleteBackendAuthRequest::DeleteBackendAuthRequest()
    : AmplifyBackendRequest(new DeleteBackendAuthRequestPrivate(AmplifyBackendRequest::DeleteBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAuthRequestPrivate
 * \brief The DeleteBackendAuthRequestPrivate class provides private implementation for DeleteBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendAuthRequestPrivate::DeleteBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendAuthRequest
 * class' copy constructor.
 */
DeleteBackendAuthRequestPrivate::DeleteBackendAuthRequestPrivate(
    const DeleteBackendAuthRequestPrivate &other, DeleteBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
