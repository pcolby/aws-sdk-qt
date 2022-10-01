// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describespeakerrequest.h"
#include "describespeakerrequest_p.h"
#include "describespeakerresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeSpeakerRequest
 * \brief The DescribeSpeakerRequest class provides an interface for VoiceId DescribeSpeaker requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeSpeaker
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSpeakerRequest::DescribeSpeakerRequest(const DescribeSpeakerRequest &other)
    : VoiceIdRequest(new DescribeSpeakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSpeakerRequest object.
 */
DescribeSpeakerRequest::DescribeSpeakerRequest()
    : VoiceIdRequest(new DescribeSpeakerRequestPrivate(VoiceIdRequest::DescribeSpeakerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSpeakerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSpeakerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSpeakerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpeakerResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DescribeSpeakerRequestPrivate
 * \brief The DescribeSpeakerRequestPrivate class provides private implementation for DescribeSpeakerRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeSpeakerRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DescribeSpeakerRequestPrivate::DescribeSpeakerRequestPrivate(
    const VoiceIdRequest::Action action, DescribeSpeakerRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpeakerRequest
 * class' copy constructor.
 */
DescribeSpeakerRequestPrivate::DescribeSpeakerRequestPrivate(
    const DescribeSpeakerRequestPrivate &other, DescribeSpeakerRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
