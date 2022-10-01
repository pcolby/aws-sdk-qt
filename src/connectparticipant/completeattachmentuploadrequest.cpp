// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
