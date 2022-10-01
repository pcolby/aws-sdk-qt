// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectparticipantrequest.h"
#include "disconnectparticipantrequest_p.h"
#include "disconnectparticipantresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::DisconnectParticipantRequest
 * \brief The DisconnectParticipantRequest class provides an interface for ConnectParticipant DisconnectParticipant requests.
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
 * \sa ConnectParticipantClient::disconnectParticipant
 */

/*!
 * Constructs a copy of \a other.
 */
DisconnectParticipantRequest::DisconnectParticipantRequest(const DisconnectParticipantRequest &other)
    : ConnectParticipantRequest(new DisconnectParticipantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisconnectParticipantRequest object.
 */
DisconnectParticipantRequest::DisconnectParticipantRequest()
    : ConnectParticipantRequest(new DisconnectParticipantRequestPrivate(ConnectParticipantRequest::DisconnectParticipantAction, this))
{

}

/*!
 * \reimp
 */
bool DisconnectParticipantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisconnectParticipantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisconnectParticipantRequest::response(QNetworkReply * const reply) const
{
    return new DisconnectParticipantResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::DisconnectParticipantRequestPrivate
 * \brief The DisconnectParticipantRequestPrivate class provides private implementation for DisconnectParticipantRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a DisconnectParticipantRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
DisconnectParticipantRequestPrivate::DisconnectParticipantRequestPrivate(
    const ConnectParticipantRequest::Action action, DisconnectParticipantRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisconnectParticipantRequest
 * class' copy constructor.
 */
DisconnectParticipantRequestPrivate::DisconnectParticipantRequestPrivate(
    const DisconnectParticipantRequestPrivate &other, DisconnectParticipantRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
