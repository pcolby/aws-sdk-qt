/*
    Copyright 2013-2019 Paul Colby

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

#include "addapplicationcloudwatchloggingoptionrequest.h"
#include "addapplicationcloudwatchloggingoptionrequest_p.h"
#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationCloudWatchLoggingOptionRequest
 * \brief The AddApplicationCloudWatchLoggingOptionRequest class provides an interface for KinesisAnalyticsV2 AddApplicationCloudWatchLoggingOption requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Documentation for Kinesis Data Analytics API
 *
 * \sa KinesisAnalyticsV2Client::addApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationCloudWatchLoggingOptionRequest::AddApplicationCloudWatchLoggingOptionRequest(const AddApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsV2Request(new AddApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionRequest object.
 */
AddApplicationCloudWatchLoggingOptionRequest::AddApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsV2Request(new AddApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsV2Request::AddApplicationCloudWatchLoggingOptionAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationCloudWatchLoggingOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationCloudWatchLoggingOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationCloudWatchLoggingOptionRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationCloudWatchLoggingOptionResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationCloudWatchLoggingOptionRequestPrivate
 * \brief The AddApplicationCloudWatchLoggingOptionRequestPrivate class provides private implementation for AddApplicationCloudWatchLoggingOptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
AddApplicationCloudWatchLoggingOptionRequestPrivate::AddApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, AddApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationCloudWatchLoggingOptionRequest
 * class' copy constructor.
 */
AddApplicationCloudWatchLoggingOptionRequestPrivate::AddApplicationCloudWatchLoggingOptionRequestPrivate(
    const AddApplicationCloudWatchLoggingOptionRequestPrivate &other, AddApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
