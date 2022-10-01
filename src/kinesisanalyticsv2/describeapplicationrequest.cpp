// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationrequest.h"
#include "describeapplicationrequest_p.h"
#include "describeapplicationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationRequest
 * \brief The DescribeApplicationRequest class provides an interface for KinesisAnalyticsV2 DescribeApplication requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::describeApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationRequest::DescribeApplicationRequest(const DescribeApplicationRequest &other)
    : KinesisAnalyticsV2Request(new DescribeApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationRequest object.
 */
DescribeApplicationRequest::DescribeApplicationRequest()
    : KinesisAnalyticsV2Request(new DescribeApplicationRequestPrivate(KinesisAnalyticsV2Request::DescribeApplicationAction, this))
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
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationRequestPrivate
 * \brief The DescribeApplicationRequestPrivate class provides private implementation for DescribeApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DescribeApplicationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DescribeApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
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
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
