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

#include "gettokenrequest.h"
#include "gettokenrequest_p.h"
#include "gettokenresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetTokenRequest
 * \brief The GetTokenRequest class provides an interface for AmplifyBackend GetToken requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetTokenRequest::GetTokenRequest(const GetTokenRequest &other)
    : AmplifyBackendRequest(new GetTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTokenRequest object.
 */
GetTokenRequest::GetTokenRequest()
    : AmplifyBackendRequest(new GetTokenRequestPrivate(AmplifyBackendRequest::GetTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetTokenResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetTokenRequestPrivate
 * \brief The GetTokenRequestPrivate class provides private implementation for GetTokenRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetTokenRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetTokenRequestPrivate::GetTokenRequestPrivate(
    const AmplifyBackendRequest::Action action, GetTokenRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTokenRequest
 * class' copy constructor.
 */
GetTokenRequestPrivate::GetTokenRequestPrivate(
    const GetTokenRequestPrivate &other, GetTokenRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
