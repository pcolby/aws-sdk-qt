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

#include "updatebackendstoragerequest.h"
#include "updatebackendstoragerequest_p.h"
#include "updatebackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageRequest
 * \brief The UpdateBackendStorageRequest class provides an interface for AmplifyBackend UpdateBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendStorageRequest::UpdateBackendStorageRequest(const UpdateBackendStorageRequest &other)
    : AmplifyBackendRequest(new UpdateBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendStorageRequest object.
 */
UpdateBackendStorageRequest::UpdateBackendStorageRequest()
    : AmplifyBackendRequest(new UpdateBackendStorageRequestPrivate(AmplifyBackendRequest::UpdateBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageRequestPrivate
 * \brief The UpdateBackendStorageRequestPrivate class provides private implementation for UpdateBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendStorageRequestPrivate::UpdateBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendStorageRequest
 * class' copy constructor.
 */
UpdateBackendStorageRequestPrivate::UpdateBackendStorageRequestPrivate(
    const UpdateBackendStorageRequestPrivate &other, UpdateBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
