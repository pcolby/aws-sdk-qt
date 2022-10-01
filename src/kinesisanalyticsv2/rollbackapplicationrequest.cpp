// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rollbackapplicationrequest.h"
#include "rollbackapplicationrequest_p.h"
#include "rollbackapplicationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::RollbackApplicationRequest
 * \brief The RollbackApplicationRequest class provides an interface for KinesisAnalyticsV2 RollbackApplication requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::rollbackApplication
 */

/*!
 * Constructs a copy of \a other.
 */
RollbackApplicationRequest::RollbackApplicationRequest(const RollbackApplicationRequest &other)
    : KinesisAnalyticsV2Request(new RollbackApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RollbackApplicationRequest object.
 */
RollbackApplicationRequest::RollbackApplicationRequest()
    : KinesisAnalyticsV2Request(new RollbackApplicationRequestPrivate(KinesisAnalyticsV2Request::RollbackApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool RollbackApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RollbackApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RollbackApplicationRequest::response(QNetworkReply * const reply) const
{
    return new RollbackApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::RollbackApplicationRequestPrivate
 * \brief The RollbackApplicationRequestPrivate class provides private implementation for RollbackApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a RollbackApplicationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
RollbackApplicationRequestPrivate::RollbackApplicationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, RollbackApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RollbackApplicationRequest
 * class' copy constructor.
 */
RollbackApplicationRequestPrivate::RollbackApplicationRequestPrivate(
    const RollbackApplicationRequestPrivate &other, RollbackApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
