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

#include "completeattachmentuploadrequest.h"
#include "completeattachmentuploadrequest_p.h"
#include "completeattachmentuploadresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::CompleteAttachmentUploadRequest
 * \brief The CompleteAttachmentUploadRequest class provides an interface for ConnectParticipant CompleteAttachmentUpload requests.
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
 * \sa ConnectParticipantClient::completeAttachmentUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CompleteAttachmentUploadRequest::CompleteAttachmentUploadRequest(const CompleteAttachmentUploadRequest &other)
    : ConnectParticipantRequest(new CompleteAttachmentUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompleteAttachmentUploadRequest object.
 */
CompleteAttachmentUploadRequest::CompleteAttachmentUploadRequest()
    : ConnectParticipantRequest(new CompleteAttachmentUploadRequestPrivate(ConnectParticipantRequest::CompleteAttachmentUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CompleteAttachmentUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CompleteAttachmentUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CompleteAttachmentUploadRequest::response(QNetworkReply * const reply) const
{
    return new CompleteAttachmentUploadResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::CompleteAttachmentUploadRequestPrivate
 * \brief The CompleteAttachmentUploadRequestPrivate class provides private implementation for CompleteAttachmentUploadRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a CompleteAttachmentUploadRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
CompleteAttachmentUploadRequestPrivate::CompleteAttachmentUploadRequestPrivate(
    const ConnectParticipantRequest::Action action, CompleteAttachmentUploadRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CompleteAttachmentUploadRequest
 * class' copy constructor.
 */
CompleteAttachmentUploadRequestPrivate::CompleteAttachmentUploadRequestPrivate(
    const CompleteAttachmentUploadRequestPrivate &other, CompleteAttachmentUploadRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
