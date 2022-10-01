// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
