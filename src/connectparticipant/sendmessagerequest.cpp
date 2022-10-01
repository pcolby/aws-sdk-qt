// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendmessagerequest.h"
#include "sendmessagerequest_p.h"
#include "sendmessageresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::SendMessageRequest
 * \brief The SendMessageRequest class provides an interface for ConnectParticipant SendMessage requests.
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
 * \sa ConnectParticipantClient::sendMessage
 */

/*!
 * Constructs a copy of \a other.
 */
SendMessageRequest::SendMessageRequest(const SendMessageRequest &other)
    : ConnectParticipantRequest(new SendMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendMessageRequest object.
 */
SendMessageRequest::SendMessageRequest()
    : ConnectParticipantRequest(new SendMessageRequestPrivate(ConnectParticipantRequest::SendMessageAction, this))
{

}

/*!
 * \reimp
 */
bool SendMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendMessageRequest::response(QNetworkReply * const reply) const
{
    return new SendMessageResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::SendMessageRequestPrivate
 * \brief The SendMessageRequestPrivate class provides private implementation for SendMessageRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a SendMessageRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
SendMessageRequestPrivate::SendMessageRequestPrivate(
    const ConnectParticipantRequest::Action action, SendMessageRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendMessageRequest
 * class' copy constructor.
 */
SendMessageRequestPrivate::SendMessageRequestPrivate(
    const SendMessageRequestPrivate &other, SendMessageRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
