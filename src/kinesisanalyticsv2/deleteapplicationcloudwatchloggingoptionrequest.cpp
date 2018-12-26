/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteapplicationcloudwatchloggingoptionrequest.h"
#include "deleteapplicationcloudwatchloggingoptionrequest_p.h"
#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationCloudWatchLoggingOptionRequest
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationCloudWatchLoggingOption requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Documentation for Kinesis Data Analytics API
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest(const DeleteApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequest object.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationCloudWatchLoggingOptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationCloudWatchLoggingOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationCloudWatchLoggingOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationCloudWatchLoggingOptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationCloudWatchLoggingOptionResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationCloudWatchLoggingOptionRequestPrivate
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequestPrivate class provides private implementation for DeleteApplicationCloudWatchLoggingOptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationCloudWatchLoggingOptionRequest
 * class' copy constructor.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const DeleteApplicationCloudWatchLoggingOptionRequestPrivate &other, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
