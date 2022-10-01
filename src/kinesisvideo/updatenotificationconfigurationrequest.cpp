// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
