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

#include "updatebackendjobrequest.h"
#include "updatebackendjobrequest_p.h"
#include "updatebackendjobresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobRequest
 * \brief The UpdateBackendJobRequest class provides an interface for AmplifyBackend UpdateBackendJob requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackendJobRequest::UpdateBackendJobRequest(const UpdateBackendJobRequest &other)
    : AmplifyBackendRequest(new UpdateBackendJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackendJobRequest object.
 */
UpdateBackendJobRequest::UpdateBackendJobRequest()
    : AmplifyBackendRequest(new UpdateBackendJobRequestPrivate(AmplifyBackendRequest::UpdateBackendJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackendJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackendJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackendJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackendJobResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobRequestPrivate
 * \brief The UpdateBackendJobRequestPrivate class provides private implementation for UpdateBackendJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendJobRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
UpdateBackendJobRequestPrivate::UpdateBackendJobRequestPrivate(
    const AmplifyBackendRequest::Action action, UpdateBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackendJobRequest
 * class' copy constructor.
 */
UpdateBackendJobRequestPrivate::UpdateBackendJobRequestPrivate(
    const UpdateBackendJobRequestPrivate &other, UpdateBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
