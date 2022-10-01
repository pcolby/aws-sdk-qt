// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationcloudwatchloggingoptionrequest.h"
#include "addapplicationcloudwatchloggingoptionrequest_p.h"
#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationCloudWatchLoggingOptionRequest
 * \brief The AddApplicationCloudWatchLoggingOptionRequest class provides an interface for KinesisAnalytics AddApplicationCloudWatchLoggingOption requests.
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
 * \sa KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationCloudWatchLoggingOptionRequest::AddApplicationCloudWatchLoggingOptionRequest(const AddApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionRequest object.
 */
AddApplicationCloudWatchLoggingOptionRequest::AddApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsRequest(new AddApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsRequest::AddApplicationCloudWatchLoggingOptionAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationCloudWatchLoggingOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationCloudWatchLoggingOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationCloudWatchLoggingOptionRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationCloudWatchLoggingOptionResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationCloudWatchLoggingOptionRequestPrivate
 * \brief The AddApplicationCloudWatchLoggingOptionRequestPrivate class provides private implementation for AddApplicationCloudWatchLoggingOptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
AddApplicationCloudWatchLoggingOptionRequestPrivate::AddApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationCloudWatchLoggingOptionRequest
 * class' copy constructor.
 */
AddApplicationCloudWatchLoggingOptionRequestPrivate::AddApplicationCloudWatchLoggingOptionRequestPrivate(
    const AddApplicationCloudWatchLoggingOptionRequestPrivate &other, AddApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
