// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationcloudwatchloggingoptionrequest.h"
#include "deleteapplicationcloudwatchloggingoptionrequest_p.h"
#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationCloudWatchLoggingOptionRequest
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequest class provides an interface for KinesisAnalytics DeleteApplicationCloudWatchLoggingOption requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest(const DeleteApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequest object.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationCloudWatchLoggingOptionAction, this))
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
 * \class QtAws::KinesisAnalytics::DeleteApplicationCloudWatchLoggingOptionRequestPrivate
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequestPrivate class provides private implementation for DeleteApplicationCloudWatchLoggingOptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
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
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
