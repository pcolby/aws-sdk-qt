// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendmessagesrequest.h"
#include "sendmessagesrequest_p.h"
#include "sendmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendMessagesRequest
 * \brief The SendMessagesRequest class provides an interface for Pinpoint SendMessages requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendMessages
 */

/*!
 * Constructs a copy of \a other.
 */
SendMessagesRequest::SendMessagesRequest(const SendMessagesRequest &other)
    : PinpointRequest(new SendMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendMessagesRequest object.
 */
SendMessagesRequest::SendMessagesRequest()
    : PinpointRequest(new SendMessagesRequestPrivate(PinpointRequest::SendMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool SendMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendMessagesRequest::response(QNetworkReply * const reply) const
{
    return new SendMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::SendMessagesRequestPrivate
 * \brief The SendMessagesRequestPrivate class provides private implementation for SendMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendMessagesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
SendMessagesRequestPrivate::SendMessagesRequestPrivate(
    const PinpointRequest::Action action, SendMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendMessagesRequest
 * class' copy constructor.
 */
SendMessagesRequestPrivate::SendMessagesRequestPrivate(
    const SendMessagesRequestPrivate &other, SendMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
