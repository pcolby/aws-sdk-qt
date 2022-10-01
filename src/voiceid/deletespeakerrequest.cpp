// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletespeakerrequest.h"
#include "deletespeakerrequest_p.h"
#include "deletespeakerresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DeleteSpeakerRequest
 * \brief The DeleteSpeakerRequest class provides an interface for VoiceId DeleteSpeaker requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::deleteSpeaker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSpeakerRequest::DeleteSpeakerRequest(const DeleteSpeakerRequest &other)
    : VoiceIdRequest(new DeleteSpeakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSpeakerRequest object.
 */
DeleteSpeakerRequest::DeleteSpeakerRequest()
    : VoiceIdRequest(new DeleteSpeakerRequestPrivate(VoiceIdRequest::DeleteSpeakerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSpeakerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSpeakerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSpeakerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSpeakerResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DeleteSpeakerRequestPrivate
 * \brief The DeleteSpeakerRequestPrivate class provides private implementation for DeleteSpeakerRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DeleteSpeakerRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DeleteSpeakerRequestPrivate::DeleteSpeakerRequestPrivate(
    const VoiceIdRequest::Action action, DeleteSpeakerRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSpeakerRequest
 * class' copy constructor.
 */
DeleteSpeakerRequestPrivate::DeleteSpeakerRequestPrivate(
    const DeleteSpeakerRequestPrivate &other, DeleteSpeakerRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
