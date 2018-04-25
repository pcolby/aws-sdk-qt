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
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationCloudWatchLoggingOptionRequest
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequest class provides an interface for KinesisAnalytics DeleteApplicationCloudWatchLoggingOption requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest(const DeleteApplicationCloudWatchLoggingOptionRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequest object.
 */
DeleteApplicationCloudWatchLoggingOptionRequest::DeleteApplicationCloudWatchLoggingOptionRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationCloudWatchLoggingOptionRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationCloudWatchLoggingOptionAction, this))
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
 * \class QtAws::KinesisAnalytics::DeleteApplicationCloudWatchLoggingOptionRequestPrivate
 * \brief The DeleteApplicationCloudWatchLoggingOptionRequestPrivate class provides private implementation for DeleteApplicationCloudWatchLoggingOptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DeleteApplicationCloudWatchLoggingOptionRequestPrivate::DeleteApplicationCloudWatchLoggingOptionRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationCloudWatchLoggingOptionRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
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
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
