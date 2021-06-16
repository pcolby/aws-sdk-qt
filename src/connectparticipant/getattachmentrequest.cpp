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

#include "getattachmentrequest.h"
#include "getattachmentrequest_p.h"
#include "getattachmentresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::GetAttachmentRequest
 * \brief The GetAttachmentRequest class provides an interface for ConnectParticipant GetAttachment requests.
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
 * \sa ConnectParticipantClient::getAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
GetAttachmentRequest::GetAttachmentRequest(const GetAttachmentRequest &other)
    : ConnectParticipantRequest(new GetAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAttachmentRequest object.
 */
GetAttachmentRequest::GetAttachmentRequest()
    : ConnectParticipantRequest(new GetAttachmentRequestPrivate(ConnectParticipantRequest::GetAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new GetAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::GetAttachmentRequestPrivate
 * \brief The GetAttachmentRequestPrivate class provides private implementation for GetAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a GetAttachmentRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
GetAttachmentRequestPrivate::GetAttachmentRequestPrivate(
    const ConnectParticipantRequest::Action action, GetAttachmentRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAttachmentRequest
 * class' copy constructor.
 */
GetAttachmentRequestPrivate::GetAttachmentRequestPrivate(
    const GetAttachmentRequestPrivate &other, GetAttachmentRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
