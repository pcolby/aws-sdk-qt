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

#include "getbackendstoragerequest.h"
#include "getbackendstoragerequest_p.h"
#include "getbackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendStorageRequest
 * \brief The GetBackendStorageRequest class provides an interface for AmplifyBackend GetBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendStorageRequest::GetBackendStorageRequest(const GetBackendStorageRequest &other)
    : AmplifyBackendRequest(new GetBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendStorageRequest object.
 */
GetBackendStorageRequest::GetBackendStorageRequest()
    : AmplifyBackendRequest(new GetBackendStorageRequestPrivate(AmplifyBackendRequest::GetBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendStorageRequestPrivate
 * \brief The GetBackendStorageRequestPrivate class provides private implementation for GetBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendStorageRequestPrivate::GetBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendStorageRequest
 * class' copy constructor.
 */
GetBackendStorageRequestPrivate::GetBackendStorageRequestPrivate(
    const GetBackendStorageRequestPrivate &other, GetBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
