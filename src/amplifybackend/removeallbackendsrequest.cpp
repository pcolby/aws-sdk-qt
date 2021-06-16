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

#include "removeallbackendsrequest.h"
#include "removeallbackendsrequest_p.h"
#include "removeallbackendsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsRequest
 * \brief The RemoveAllBackendsRequest class provides an interface for AmplifyBackend RemoveAllBackends requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeAllBackends
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAllBackendsRequest::RemoveAllBackendsRequest(const RemoveAllBackendsRequest &other)
    : AmplifyBackendRequest(new RemoveAllBackendsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAllBackendsRequest object.
 */
RemoveAllBackendsRequest::RemoveAllBackendsRequest()
    : AmplifyBackendRequest(new RemoveAllBackendsRequestPrivate(AmplifyBackendRequest::RemoveAllBackendsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAllBackendsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAllBackendsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAllBackendsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAllBackendsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsRequestPrivate
 * \brief The RemoveAllBackendsRequestPrivate class provides private implementation for RemoveAllBackendsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveAllBackendsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
RemoveAllBackendsRequestPrivate::RemoveAllBackendsRequestPrivate(
    const AmplifyBackendRequest::Action action, RemoveAllBackendsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAllBackendsRequest
 * class' copy constructor.
 */
RemoveAllBackendsRequestPrivate::RemoveAllBackendsRequestPrivate(
    const RemoveAllBackendsRequestPrivate &other, RemoveAllBackendsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
