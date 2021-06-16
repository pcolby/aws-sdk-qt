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

#include "getbackendauthrequest.h"
#include "getbackendauthrequest_p.h"
#include "getbackendauthresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthRequest
 * \brief The GetBackendAuthRequest class provides an interface for AmplifyBackend GetBackendAuth requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAuth
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendAuthRequest::GetBackendAuthRequest(const GetBackendAuthRequest &other)
    : AmplifyBackendRequest(new GetBackendAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendAuthRequest object.
 */
GetBackendAuthRequest::GetBackendAuthRequest()
    : AmplifyBackendRequest(new GetBackendAuthRequestPrivate(AmplifyBackendRequest::GetBackendAuthAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendAuthRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendAuthResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthRequestPrivate
 * \brief The GetBackendAuthRequestPrivate class provides private implementation for GetBackendAuthRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAuthRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendAuthRequestPrivate::GetBackendAuthRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendAuthRequest
 * class' copy constructor.
 */
GetBackendAuthRequestPrivate::GetBackendAuthRequestPrivate(
    const GetBackendAuthRequestPrivate &other, GetBackendAuthRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
