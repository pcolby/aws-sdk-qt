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

#include "describenotificationconfigurationrequest.h"
#include "describenotificationconfigurationrequest_p.h"
#include "describenotificationconfigurationresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeNotificationConfigurationRequest
 * \brief The DescribeNotificationConfigurationRequest class provides an interface for KinesisVideo DescribeNotificationConfiguration requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotificationConfigurationRequest::DescribeNotificationConfigurationRequest(const DescribeNotificationConfigurationRequest &other)
    : KinesisVideoRequest(new DescribeNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotificationConfigurationRequest object.
 */
DescribeNotificationConfigurationRequest::DescribeNotificationConfigurationRequest()
    : KinesisVideoRequest(new DescribeNotificationConfigurationRequestPrivate(KinesisVideoRequest::DescribeNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DescribeNotificationConfigurationRequestPrivate
 * \brief The DescribeNotificationConfigurationRequestPrivate class provides private implementation for DescribeNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeNotificationConfigurationRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DescribeNotificationConfigurationRequestPrivate::DescribeNotificationConfigurationRequestPrivate(
    const KinesisVideoRequest::Action action, DescribeNotificationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotificationConfigurationRequest
 * class' copy constructor.
 */
DescribeNotificationConfigurationRequestPrivate::DescribeNotificationConfigurationRequestPrivate(
    const DescribeNotificationConfigurationRequestPrivate &other, DescribeNotificationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
