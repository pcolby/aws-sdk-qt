// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createparticipantconnectionrequest.h"
#include "createparticipantconnectionrequest_p.h"
#include "createparticipantconnectionresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::CreateParticipantConnectionRequest
 * \brief The CreateParticipantConnectionRequest class provides an interface for ConnectParticipant CreateParticipantConnection requests.
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
 * \sa ConnectParticipantClient::createParticipantConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateParticipantConnectionRequest::CreateParticipantConnectionRequest(const CreateParticipantConnectionRequest &other)
    : ConnectParticipantRequest(new CreateParticipantConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateParticipantConnectionRequest object.
 */
CreateParticipantConnectionRequest::CreateParticipantConnectionRequest()
    : ConnectParticipantRequest(new CreateParticipantConnectionRequestPrivate(ConnectParticipantRequest::CreateParticipantConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateParticipantConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateParticipantConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateParticipantConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateParticipantConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::CreateParticipantConnectionRequestPrivate
 * \brief The CreateParticipantConnectionRequestPrivate class provides private implementation for CreateParticipantConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a CreateParticipantConnectionRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
CreateParticipantConnectionRequestPrivate::CreateParticipantConnectionRequestPrivate(
    const ConnectParticipantRequest::Action action, CreateParticipantConnectionRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateParticipantConnectionRequest
 * class' copy constructor.
 */
CreateParticipantConnectionRequestPrivate::CreateParticipantConnectionRequestPrivate(
    const CreateParticipantConnectionRequestPrivate &other, CreateParticipantConnectionRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
