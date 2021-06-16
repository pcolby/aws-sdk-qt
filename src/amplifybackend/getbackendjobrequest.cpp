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

#include "getbackendjobrequest.h"
#include "getbackendjobrequest_p.h"
#include "getbackendjobresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendJobRequest
 * \brief The GetBackendJobRequest class provides an interface for AmplifyBackend GetBackendJob requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendJobRequest::GetBackendJobRequest(const GetBackendJobRequest &other)
    : AmplifyBackendRequest(new GetBackendJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendJobRequest object.
 */
GetBackendJobRequest::GetBackendJobRequest()
    : AmplifyBackendRequest(new GetBackendJobRequestPrivate(AmplifyBackendRequest::GetBackendJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendJobRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendJobResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendJobRequestPrivate
 * \brief The GetBackendJobRequestPrivate class provides private implementation for GetBackendJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendJobRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendJobRequestPrivate::GetBackendJobRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendJobRequest
 * class' copy constructor.
 */
GetBackendJobRequestPrivate::GetBackendJobRequestPrivate(
    const GetBackendJobRequestPrivate &other, GetBackendJobRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
