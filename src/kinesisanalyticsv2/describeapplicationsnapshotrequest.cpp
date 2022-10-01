// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationsnapshotrequest.h"
#include "describeapplicationsnapshotrequest_p.h"
#include "describeapplicationsnapshotresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationSnapshotRequest
 * \brief The DescribeApplicationSnapshotRequest class provides an interface for KinesisAnalyticsV2 DescribeApplicationSnapshot requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::describeApplicationSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationSnapshotRequest::DescribeApplicationSnapshotRequest(const DescribeApplicationSnapshotRequest &other)
    : KinesisAnalyticsV2Request(new DescribeApplicationSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationSnapshotRequest object.
 */
DescribeApplicationSnapshotRequest::DescribeApplicationSnapshotRequest()
    : KinesisAnalyticsV2Request(new DescribeApplicationSnapshotRequestPrivate(KinesisAnalyticsV2Request::DescribeApplicationSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationSnapshotRequestPrivate
 * \brief The DescribeApplicationSnapshotRequestPrivate class provides private implementation for DescribeApplicationSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DescribeApplicationSnapshotRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DescribeApplicationSnapshotRequestPrivate::DescribeApplicationSnapshotRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DescribeApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationSnapshotRequest
 * class' copy constructor.
 */
DescribeApplicationSnapshotRequestPrivate::DescribeApplicationSnapshotRequestPrivate(
    const DescribeApplicationSnapshotRequestPrivate &other, DescribeApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
