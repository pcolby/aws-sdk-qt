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

#include "clonebackendrequest.h"
#include "clonebackendrequest_p.h"
#include "clonebackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CloneBackendRequest
 * \brief The CloneBackendRequest class provides an interface for AmplifyBackend CloneBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::cloneBackend
 */

/*!
 * Constructs a copy of \a other.
 */
CloneBackendRequest::CloneBackendRequest(const CloneBackendRequest &other)
    : AmplifyBackendRequest(new CloneBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CloneBackendRequest object.
 */
CloneBackendRequest::CloneBackendRequest()
    : AmplifyBackendRequest(new CloneBackendRequestPrivate(AmplifyBackendRequest::CloneBackendAction, this))
{

}

/*!
 * \reimp
 */
bool CloneBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CloneBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CloneBackendRequest::response(QNetworkReply * const reply) const
{
    return new CloneBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CloneBackendRequestPrivate
 * \brief The CloneBackendRequestPrivate class provides private implementation for CloneBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CloneBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CloneBackendRequestPrivate::CloneBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, CloneBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CloneBackendRequest
 * class' copy constructor.
 */
CloneBackendRequestPrivate::CloneBackendRequestPrivate(
    const CloneBackendRequestPrivate &other, CloneBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
