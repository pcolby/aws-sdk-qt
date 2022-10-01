// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startapplicationrequest.h"
#include "startapplicationrequest_p.h"
#include "startapplicationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::StartApplicationRequest
 * \brief The StartApplicationRequest class provides an interface for KinesisAnalyticsV2 StartApplication requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::startApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartApplicationRequest::StartApplicationRequest(const StartApplicationRequest &other)
    : KinesisAnalyticsV2Request(new StartApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartApplicationRequest object.
 */
StartApplicationRequest::StartApplicationRequest()
    : KinesisAnalyticsV2Request(new StartApplicationRequestPrivate(KinesisAnalyticsV2Request::StartApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::StartApplicationRequestPrivate
 * \brief The StartApplicationRequestPrivate class provides private implementation for StartApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a StartApplicationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, StartApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartApplicationRequest
 * class' copy constructor.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const StartApplicationRequestPrivate &other, StartApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
