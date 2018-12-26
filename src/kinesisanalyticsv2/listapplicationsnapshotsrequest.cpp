/*
    Copyright 2013-2018 Paul Colby

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

#include "listapplicationsnapshotsrequest.h"
#include "listapplicationsnapshotsrequest_p.h"
#include "listapplicationsnapshotsresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationSnapshotsRequest
 * \brief The ListApplicationSnapshotsRequest class provides an interface for KinesisAnalyticsV2 ListApplicationSnapshots requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Documentation for Kinesis Data Analytics API
 *
 * \sa KinesisAnalyticsV2Client::listApplicationSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationSnapshotsRequest::ListApplicationSnapshotsRequest(const ListApplicationSnapshotsRequest &other)
    : KinesisAnalyticsV2Request(new ListApplicationSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationSnapshotsRequest object.
 */
ListApplicationSnapshotsRequest::ListApplicationSnapshotsRequest()
    : KinesisAnalyticsV2Request(new ListApplicationSnapshotsRequestPrivate(KinesisAnalyticsV2Request::ListApplicationSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationSnapshotsRequestPrivate
 * \brief The ListApplicationSnapshotsRequestPrivate class provides private implementation for ListApplicationSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a ListApplicationSnapshotsRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
ListApplicationSnapshotsRequestPrivate::ListApplicationSnapshotsRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, ListApplicationSnapshotsRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationSnapshotsRequest
 * class' copy constructor.
 */
ListApplicationSnapshotsRequestPrivate::ListApplicationSnapshotsRequestPrivate(
    const ListApplicationSnapshotsRequestPrivate &other, ListApplicationSnapshotsRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
