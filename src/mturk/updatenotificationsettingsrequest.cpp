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
