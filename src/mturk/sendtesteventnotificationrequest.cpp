/*
    Copyright 2013-2020 Paul Colby

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

#include "sendtesteventnotificationrequest.h"
#include "sendtesteventnotificationrequest_p.h"
#include "sendtesteventnotificationresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::SendTestEventNotificationRequest
 * \brief The SendTestEventNotificationRequest class provides an interface for MTurk SendTestEventNotification requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::sendTestEventNotification
 */

/*!
 * Constructs a copy of \a other.
 */
SendTestEventNotificationRequest::SendTestEventNotificationRequest(const SendTestEventNotificationRequest &other)
    : MTurkRequest(new SendTestEventNotificationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendTestEventNotificationRequest object.
 */
SendTestEventNotificationRequest::SendTestEventNotificationRequest()
    : MTurkRequest(new SendTestEventNotificationRequestPrivate(MTurkRequest::SendTestEventNotificationAction, this))
{

}

/*!
 * \reimp
 */
bool SendTestEventNotificationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendTestEventNotificationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendTestEventNotificationRequest::response(QNetworkReply * const reply) const
{
    return new SendTestEventNotificationResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::SendTestEventNotificationRequestPrivate
 * \brief The SendTestEventNotificationRequestPrivate class provides private implementation for SendTestEventNotificationRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a SendTestEventNotificationRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
SendTestEventNotificationRequestPrivate::SendTestEventNotificationRequestPrivate(
    const MTurkRequest::Action action, SendTestEventNotificationRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendTestEventNotificationRequest
 * class' copy constructor.
 */
SendTestEventNotificationRequestPrivate::SendTestEventNotificationRequestPrivate(
    const SendTestEventNotificationRequestPrivate &other, SendTestEventNotificationRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
