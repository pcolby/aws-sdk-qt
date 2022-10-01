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

#include "updatenotificationconfigurationrequest.h"
#include "updatenotificationconfigurationrequest_p.h"
#include "updatenotificationconfigurationresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateNotificationConfigurationRequest
 * \brief The UpdateNotificationConfigurationRequest class provides an interface for KinesisVideo UpdateNotificationConfiguration requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNotificationConfigurationRequest::UpdateNotificationConfigurationRequest(const UpdateNotificationConfigurationRequest &other)
    : KinesisVideoRequest(new UpdateNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNotificationConfigurationRequest object.
 */
UpdateNotificationConfigurationRequest::UpdateNotificationConfigurationRequest()
    : KinesisVideoRequest(new UpdateNotificationConfigurationRequestPrivate(KinesisVideoRequest::UpdateNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::UpdateNotificationConfigurationRequestPrivate
 * \brief The UpdateNotificationConfigurationRequestPrivate class provides private implementation for UpdateNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateNotificationConfigurationRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
UpdateNotificationConfigurationRequestPrivate::UpdateNotificationConfigurationRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateNotificationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotificationConfigurationRequest
 * class' copy constructor.
 */
UpdateNotificationConfigurationRequestPrivate::UpdateNotificationConfigurationRequestPrivate(
    const UpdateNotificationConfigurationRequestPrivate &other, UpdateNotificationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
