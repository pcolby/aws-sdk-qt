// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenotificationsettingsrequest.h"
#include "updatenotificationsettingsrequest_p.h"
#include "updatenotificationsettingsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateNotificationSettingsRequest
 * \brief The UpdateNotificationSettingsRequest class provides an interface for MTurk UpdateNotificationSettings requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateNotificationSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNotificationSettingsRequest::UpdateNotificationSettingsRequest(const UpdateNotificationSettingsRequest &other)
    : MTurkRequest(new UpdateNotificationSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNotificationSettingsRequest object.
 */
UpdateNotificationSettingsRequest::UpdateNotificationSettingsRequest()
    : MTurkRequest(new UpdateNotificationSettingsRequestPrivate(MTurkRequest::UpdateNotificationSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNotificationSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNotificationSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotificationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotificationSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::UpdateNotificationSettingsRequestPrivate
 * \brief The UpdateNotificationSettingsRequestPrivate class provides private implementation for UpdateNotificationSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateNotificationSettingsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
UpdateNotificationSettingsRequestPrivate::UpdateNotificationSettingsRequestPrivate(
    const MTurkRequest::Action action, UpdateNotificationSettingsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotificationSettingsRequest
 * class' copy constructor.
 */
UpdateNotificationSettingsRequestPrivate::UpdateNotificationSettingsRequestPrivate(
    const UpdateNotificationSettingsRequestPrivate &other, UpdateNotificationSettingsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
