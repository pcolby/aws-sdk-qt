// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationinputrequest.h"
#include "addapplicationinputrequest_p.h"
#include "addapplicationinputresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationInputRequest
 * \brief The AddApplicationInputRequest class provides an interface for KinesisAnalyticsV2 AddApplicationInput requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationInput
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationInputRequest::AddApplicationInputRequest(const AddApplicationInputRequest &other)
    : KinesisAnalyticsV2Request(new AddApplicationInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationInputRequest object.
 */
AddApplicationInputRequest::AddApplicationInputRequest()
    : KinesisAnalyticsV2Request(new AddApplicationInputRequestPrivate(KinesisAnalyticsV2Request::AddApplicationInputAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationInputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationInputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationInputRequestPrivate
 * \brief The AddApplicationInputRequestPrivate class provides private implementation for AddApplicationInputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationInputRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, AddApplicationInputRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationInputRequest
 * class' copy constructor.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const AddApplicationInputRequestPrivate &other, AddApplicationInputRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
