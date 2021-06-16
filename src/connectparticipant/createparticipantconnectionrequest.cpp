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
