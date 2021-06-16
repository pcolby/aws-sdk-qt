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
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
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
