// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendusersmessagesrequest.h"
#include "sendusersmessagesrequest_p.h"
#include "sendusersmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesRequest
 * \brief The SendUsersMessagesRequest class provides an interface for Pinpoint SendUsersMessages requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendUsersMessages
 */

/*!
 * Constructs a copy of \a other.
 */
SendUsersMessagesRequest::SendUsersMessagesRequest(const SendUsersMessagesRequest &other)
    : PinpointRequest(new SendUsersMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendUsersMessagesRequest object.
 */
SendUsersMessagesRequest::SendUsersMessagesRequest()
    : PinpointRequest(new SendUsersMessagesRequestPrivate(PinpointRequest::SendUsersMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool SendUsersMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendUsersMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendUsersMessagesRequest::response(QNetworkReply * const reply) const
{
    return new SendUsersMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesRequestPrivate
 * \brief The SendUsersMessagesRequestPrivate class provides private implementation for SendUsersMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendUsersMessagesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
SendUsersMessagesRequestPrivate::SendUsersMessagesRequestPrivate(
    const PinpointRequest::Action action, SendUsersMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendUsersMessagesRequest
 * class' copy constructor.
 */
SendUsersMessagesRequestPrivate::SendUsersMessagesRequestPrivate(
    const SendUsersMessagesRequestPrivate &other, SendUsersMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
