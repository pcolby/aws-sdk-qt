/*
    Copyright 2013-2021 Paul Colby

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

#include "describeapplicationversionrequest.h"
#include "describeapplicationversionrequest_p.h"
#include "describeapplicationversionresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationVersionRequest
 * \brief The DescribeApplicationVersionRequest class provides an interface for KinesisAnalyticsV2 DescribeApplicationVersion requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::describeApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationVersionRequest::DescribeApplicationVersionRequest(const DescribeApplicationVersionRequest &other)
    : KinesisAnalyticsV2Request(new DescribeApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationVersionRequest object.
 */
DescribeApplicationVersionRequest::DescribeApplicationVersionRequest()
    : KinesisAnalyticsV2Request(new DescribeApplicationVersionRequestPrivate(KinesisAnalyticsV2Request::DescribeApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationVersionRequestPrivate
 * \brief The DescribeApplicationVersionRequestPrivate class provides private implementation for DescribeApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DescribeApplicationVersionRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DescribeApplicationVersionRequestPrivate::DescribeApplicationVersionRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DescribeApplicationVersionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationVersionRequest
 * class' copy constructor.
 */
DescribeApplicationVersionRequestPrivate::DescribeApplicationVersionRequestPrivate(
    const DescribeApplicationVersionRequestPrivate &other, DescribeApplicationVersionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
