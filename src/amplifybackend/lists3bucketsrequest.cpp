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

#include "lists3bucketsrequest.h"
#include "lists3bucketsrequest_p.h"
#include "lists3bucketsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ListS3BucketsRequest
 * \brief The ListS3BucketsRequest class provides an interface for AmplifyBackend ListS3Buckets requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::listS3Buckets
 */

/*!
 * Constructs a copy of \a other.
 */
ListS3BucketsRequest::ListS3BucketsRequest(const ListS3BucketsRequest &other)
    : AmplifyBackendRequest(new ListS3BucketsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListS3BucketsRequest object.
 */
ListS3BucketsRequest::ListS3BucketsRequest()
    : AmplifyBackendRequest(new ListS3BucketsRequestPrivate(AmplifyBackendRequest::ListS3BucketsAction, this))
{

}

/*!
 * \reimp
 */
bool ListS3BucketsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListS3BucketsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListS3BucketsRequest::response(QNetworkReply * const reply) const
{
    return new ListS3BucketsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::ListS3BucketsRequestPrivate
 * \brief The ListS3BucketsRequestPrivate class provides private implementation for ListS3BucketsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ListS3BucketsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
ListS3BucketsRequestPrivate::ListS3BucketsRequestPrivate(
    const AmplifyBackendRequest::Action action, ListS3BucketsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListS3BucketsRequest
 * class' copy constructor.
 */
ListS3BucketsRequestPrivate::ListS3BucketsRequestPrivate(
    const ListS3BucketsRequestPrivate &other, ListS3BucketsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
