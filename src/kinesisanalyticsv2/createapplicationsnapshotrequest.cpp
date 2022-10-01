// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationsnapshotrequest.h"
#include "createapplicationsnapshotrequest_p.h"
#include "createapplicationsnapshotresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationSnapshotRequest
 * \brief The CreateApplicationSnapshotRequest class provides an interface for KinesisAnalyticsV2 CreateApplicationSnapshot requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::createApplicationSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationSnapshotRequest::CreateApplicationSnapshotRequest(const CreateApplicationSnapshotRequest &other)
    : KinesisAnalyticsV2Request(new CreateApplicationSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationSnapshotRequest object.
 */
CreateApplicationSnapshotRequest::CreateApplicationSnapshotRequest()
    : KinesisAnalyticsV2Request(new CreateApplicationSnapshotRequestPrivate(KinesisAnalyticsV2Request::CreateApplicationSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationSnapshotRequestPrivate
 * \brief The CreateApplicationSnapshotRequestPrivate class provides private implementation for CreateApplicationSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationSnapshotRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
CreateApplicationSnapshotRequestPrivate::CreateApplicationSnapshotRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, CreateApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationSnapshotRequest
 * class' copy constructor.
 */
CreateApplicationSnapshotRequestPrivate::CreateApplicationSnapshotRequestPrivate(
    const CreateApplicationSnapshotRequestPrivate &other, CreateApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
