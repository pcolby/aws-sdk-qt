// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendeventrequest.h"
#include "sendeventrequest_p.h"
#include "sendeventresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::SendEventRequest
 * \brief The SendEventRequest class provides an interface for ConnectParticipant SendEvent requests.
 *
 * \inmodule QtAwsConnectParticipant
 *
 *  Amazon Connect is a cloud-based contact center solution that makes it easy to set up and manage a customer contact
 *  center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect enables customer contacts through voice or
 * 
 *  chat>
 * 
 *  The APIs described here are used by chat participants, such as agents and
 *
 * \sa ConnectParticipantClient::sendEvent
 */

/*!
 * Constructs a copy of \a other.
 */
SendEventRequest::SendEventRequest(const SendEventRequest &other)
    : ConnectParticipantRequest(new SendEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendEventRequest object.
 */
SendEventRequest::SendEventRequest()
    : ConnectParticipantRequest(new SendEventRequestPrivate(ConnectParticipantRequest::SendEventAction, this))
{

}

/*!
 * \reimp
 */
bool SendEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendEventRequest::response(QNetworkReply * const reply) const
{
    return new SendEventResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::SendEventRequestPrivate
 * \brief The SendEventRequestPrivate class provides private implementation for SendEventRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a SendEventRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
SendEventRequestPrivate::SendEventRequestPrivate(
    const ConnectParticipantRequest::Action action, SendEventRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendEventRequest
 * class' copy constructor.
 */
SendEventRequestPrivate::SendEventRequestPrivate(
    const SendEventRequestPrivate &other, SendEventRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
