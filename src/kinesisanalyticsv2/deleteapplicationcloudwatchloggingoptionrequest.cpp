// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationcloudwatchloggingoptionrequest.h"
#include "deleteapplicationcloudwatchloggingoptionrequest_p.h"
#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationCloudWatchLoggingOptionRequest
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationCloudWatchLoggingOption requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest(const DeleteApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequest object.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationCloudWatchLoggingOptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationCloudWatchLoggingOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationCloudWatchLoggingOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationCloudWatchLoggingOptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationCloudWatchLoggingOptionResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationCloudWatchLoggingOptionRequestPrivate
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequestPrivate class provides private implementation for DeleteApplicationCloudWatchLoggingOptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationCloudWatchLoggingOptionRequest
 * class' copy constructor.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const DeleteApplicationCloudWatchLoggingOptionRequestPrivate &other, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
