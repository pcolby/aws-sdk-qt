// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationrequest.h"
#include "deleteapplicationrequest_p.h"
#include "deleteapplicationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationRequest
 * \brief The DeleteApplicationRequest class provides an interface for KinesisAnalyticsV2 DeleteApplication requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationRequest::DeleteApplicationRequest(const DeleteApplicationRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationRequest object.
 */
DeleteApplicationRequest::DeleteApplicationRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationRequestPrivate
 * \brief The DeleteApplicationRequestPrivate class provides private implementation for DeleteApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationRequest
 * class' copy constructor.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const DeleteApplicationRequestPrivate &other, DeleteApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
