// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopapplicationrequest.h"
#include "stopapplicationrequest_p.h"
#include "stopapplicationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::StopApplicationRequest
 * \brief The StopApplicationRequest class provides an interface for KinesisAnalyticsV2 StopApplication requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::stopApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StopApplicationRequest::StopApplicationRequest(const StopApplicationRequest &other)
    : KinesisAnalyticsV2Request(new StopApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopApplicationRequest object.
 */
StopApplicationRequest::StopApplicationRequest()
    : KinesisAnalyticsV2Request(new StopApplicationRequestPrivate(KinesisAnalyticsV2Request::StopApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StopApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StopApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::StopApplicationRequestPrivate
 * \brief The StopApplicationRequestPrivate class provides private implementation for StopApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a StopApplicationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, StopApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopApplicationRequest
 * class' copy constructor.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const StopApplicationRequestPrivate &other, StopApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
