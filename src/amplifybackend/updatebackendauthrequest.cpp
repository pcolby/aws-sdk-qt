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

#include "updatebackendauthrequest.h"
#include "updatebackendauthrequest_p.h"
#include "updatebackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthRequest
 * \brief The UpdateBackendAuthRequest class provides an interface for AmplifyBackend UpdateBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendAuthRequest::UpdateBackendAuthRequest(const UpdateBackendAuthRequest &other)
    : AmplifyBackendRequest(new UpdateBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendAuthRequest object.
 */
UpdateBackendAuthRequest::UpdateBackendAuthRequest()
    : AmplifyBackendRequest(new UpdateBackendAuthRequestPrivate(AmplifyBackendRequest::UpdateBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthRequestPrivate
 * \brief The UpdateBackendAuthRequestPrivate class provides private implementation for UpdateBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendAuthRequestPrivate::UpdateBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendAuthRequest
 * class' copy constructor.
 */
UpdateBackendAuthRequestPrivate::UpdateBackendAuthRequestPrivate(
    const UpdateBackendAuthRequestPrivate &other, UpdateBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
