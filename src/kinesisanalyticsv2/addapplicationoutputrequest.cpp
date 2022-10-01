// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationoutputrequest.h"
#include "addapplicationoutputrequest_p.h"
#include "addapplicationoutputresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationOutputRequest
 * \brief The AddApplicationOutputRequest class provides an interface for KinesisAnalyticsV2 AddApplicationOutput requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest(const AddApplicationOutputRequest &other)
    : KinesisAnalyticsV2Request(new AddApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationOutputRequest object.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest()
    : KinesisAnalyticsV2Request(new AddApplicationOutputRequestPrivate(KinesisAnalyticsV2Request::AddApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationOutputRequestPrivate
 * \brief The AddApplicationOutputRequestPrivate class provides private implementation for AddApplicationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationOutputRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, AddApplicationOutputRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationOutputRequest
 * class' copy constructor.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const AddApplicationOutputRequestPrivate &other, AddApplicationOutputRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
