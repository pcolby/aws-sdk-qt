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

#include "startattachmentuploadrequest.h"
#include "startattachmentuploadrequest_p.h"
#include "startattachmentuploadresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::StartAttachmentUploadRequest
 * \brief The StartAttachmentUploadRequest class provides an interface for ConnectParticipant StartAttachmentUpload requests.
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
 * \sa ConnectParticipantClient::startAttachmentUpload
 */

/*!
 * Constructs a copy of \a other.
 */
StartAttachmentUploadRequest::StartAttachmentUploadRequest(const StartAttachmentUploadRequest &other)
    : ConnectParticipantRequest(new StartAttachmentUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAttachmentUploadRequest object.
 */
StartAttachmentUploadRequest::StartAttachmentUploadRequest()
    : ConnectParticipantRequest(new StartAttachmentUploadRequestPrivate(ConnectParticipantRequest::StartAttachmentUploadAction, this))
{

}

/*!
 * \reimp
 */
bool StartAttachmentUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAttachmentUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAttachmentUploadRequest::response(QNetworkReply * const reply) const
{
    return new StartAttachmentUploadResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::StartAttachmentUploadRequestPrivate
 * \brief The StartAttachmentUploadRequestPrivate class provides private implementation for StartAttachmentUploadRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a StartAttachmentUploadRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
StartAttachmentUploadRequestPrivate::StartAttachmentUploadRequestPrivate(
    const ConnectParticipantRequest::Action action, StartAttachmentUploadRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAttachmentUploadRequest
 * class' copy constructor.
 */
StartAttachmentUploadRequestPrivate::StartAttachmentUploadRequestPrivate(
    const StartAttachmentUploadRequestPrivate &other, StartAttachmentUploadRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
