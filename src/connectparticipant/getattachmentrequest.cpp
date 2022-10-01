// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
