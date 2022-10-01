// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationrequest.h"
#include "describeapplicationrequest_p.h"
#include "describeapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationRequest
 * \brief The DescribeApplicationRequest class provides an interface for KinesisAnalytics DescribeApplication requests.
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
 * \sa KinesisAnalyticsClient::describeApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationRequest::DescribeApplicationRequest(const DescribeApplicationRequest &other)
    : KinesisAnalyticsRequest(new DescribeApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationRequest object.
 */
DescribeApplicationRequest::DescribeApplicationRequest()
    : KinesisAnalyticsRequest(new DescribeApplicationRequestPrivate(KinesisAnalyticsRequest::DescribeApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationRequestPrivate
 * \brief The DescribeApplicationRequestPrivate class provides private implementation for DescribeApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DescribeApplicationRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DescribeApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationRequest
 * class' copy constructor.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const DescribeApplicationRequestPrivate &other, DescribeApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
