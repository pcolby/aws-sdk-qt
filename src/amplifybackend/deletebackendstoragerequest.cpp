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

#include "deletebackendstoragerequest.h"
#include "deletebackendstoragerequest_p.h"
#include "deletebackendstorageresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendStorageRequest
 * \brief The DeleteBackendStorageRequest class provides an interface for AmplifyBackend DeleteBackendStorage requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendStorage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendStorageRequest::DeleteBackendStorageRequest(const DeleteBackendStorageRequest &other)
    : AmplifyBackendRequest(new DeleteBackendStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendStorageRequest object.
 */
DeleteBackendStorageRequest::DeleteBackendStorageRequest()
    : AmplifyBackendRequest(new DeleteBackendStorageRequestPrivate(AmplifyBackendRequest::DeleteBackendStorageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendStorageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendStorageResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendStorageRequestPrivate
 * \brief The DeleteBackendStorageRequestPrivate class provides private implementation for DeleteBackendStorageRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendStorageRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendStorageRequestPrivate::DeleteBackendStorageRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendStorageRequest
 * class' copy constructor.
 */
DeleteBackendStorageRequestPrivate::DeleteBackendStorageRequestPrivate(
    const DeleteBackendStorageRequestPrivate &other, DeleteBackendStorageRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
