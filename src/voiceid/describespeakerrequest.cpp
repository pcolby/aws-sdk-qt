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
