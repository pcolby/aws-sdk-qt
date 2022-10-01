// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationsnapshotrequest.h"
#include "deleteapplicationsnapshotrequest_p.h"
#include "deleteapplicationsnapshotresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationSnapshotRequest
 * \brief The DeleteApplicationSnapshotRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationSnapshot requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationSnapshotRequest::DeleteApplicationSnapshotRequest(const DeleteApplicationSnapshotRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationSnapshotRequest object.
 */
DeleteApplicationSnapshotRequest::DeleteApplicationSnapshotRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationSnapshotRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationSnapshotRequestPrivate
 * \brief The DeleteApplicationSnapshotRequestPrivate class provides private implementation for DeleteApplicationSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationSnapshotRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationSnapshotRequestPrivate::DeleteApplicationSnapshotRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationSnapshotRequest
 * class' copy constructor.
 */
DeleteApplicationSnapshotRequestPrivate::DeleteApplicationSnapshotRequestPrivate(
    const DeleteApplicationSnapshotRequestPrivate &other, DeleteApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
