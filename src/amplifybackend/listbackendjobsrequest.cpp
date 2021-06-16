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

#include "listbackendjobsrequest.h"
#include "listbackendjobsrequest_p.h"
#include "listbackendjobsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsRequest
 * \brief The ListBackendJobsRequest class provides an interface for AmplifyBackend ListBackendJobs requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::listBackendJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackendJobsRequest::ListBackendJobsRequest(const ListBackendJobsRequest &other)
    : AmplifyBackendRequest(new ListBackendJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackendJobsRequest object.
 */
ListBackendJobsRequest::ListBackendJobsRequest()
    : AmplifyBackendRequest(new ListBackendJobsRequestPrivate(AmplifyBackendRequest::ListBackendJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackendJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackendJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackendJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackendJobsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsRequestPrivate
 * \brief The ListBackendJobsRequestPrivate class provides private implementation for ListBackendJobsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ListBackendJobsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
ListBackendJobsRequestPrivate::ListBackendJobsRequestPrivate(
    const AmplifyBackendRequest::Action action, ListBackendJobsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackendJobsRequest
 * class' copy constructor.
 */
ListBackendJobsRequestPrivate::ListBackendJobsRequestPrivate(
    const ListBackendJobsRequestPrivate &other, ListBackendJobsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
