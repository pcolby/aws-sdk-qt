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

#include "getbackendrequest.h"
#include "getbackendrequest_p.h"
#include "getbackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendRequest
 * \brief The GetBackendRequest class provides an interface for AmplifyBackend GetBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackend
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendRequest::GetBackendRequest(const GetBackendRequest &other)
    : AmplifyBackendRequest(new GetBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendRequest object.
 */
GetBackendRequest::GetBackendRequest()
    : AmplifyBackendRequest(new GetBackendRequestPrivate(AmplifyBackendRequest::GetBackendAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendRequestPrivate
 * \brief The GetBackendRequestPrivate class provides private implementation for GetBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendRequestPrivate::GetBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendRequest
 * class' copy constructor.
 */
GetBackendRequestPrivate::GetBackendRequestPrivate(
    const GetBackendRequestPrivate &other, GetBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
