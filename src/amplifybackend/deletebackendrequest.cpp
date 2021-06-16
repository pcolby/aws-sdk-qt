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

#include "deletebackendrequest.h"
#include "deletebackendrequest_p.h"
#include "deletebackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendRequest
 * \brief The DeleteBackendRequest class provides an interface for AmplifyBackend DeleteBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackend
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendRequest::DeleteBackendRequest(const DeleteBackendRequest &other)
    : AmplifyBackendRequest(new DeleteBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendRequest object.
 */
DeleteBackendRequest::DeleteBackendRequest()
    : AmplifyBackendRequest(new DeleteBackendRequestPrivate(AmplifyBackendRequest::DeleteBackendAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendRequestPrivate
 * \brief The DeleteBackendRequestPrivate class provides private implementation for DeleteBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
DeleteBackendRequestPrivate::DeleteBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, DeleteBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendRequest
 * class' copy constructor.
 */
DeleteBackendRequestPrivate::DeleteBackendRequestPrivate(
    const DeleteBackendRequestPrivate &other, DeleteBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
