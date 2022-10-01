// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
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
