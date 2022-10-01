// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationoutputrequest.h"
#include "deleteapplicationoutputrequest_p.h"
#include "deleteapplicationoutputresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationOutputRequest
 * \brief The DeleteApplicationOutputRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationOutput requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest(const DeleteApplicationOutputRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationOutputRequest object.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationOutputRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationOutputRequestPrivate
 * \brief The DeleteApplicationOutputRequestPrivate class provides private implementation for DeleteApplicationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationOutputRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationOutputRequest
 * class' copy constructor.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const DeleteApplicationOutputRequestPrivate &other, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
