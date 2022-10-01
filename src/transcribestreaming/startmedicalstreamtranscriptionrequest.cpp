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

#include "startmedicalstreamtranscriptionrequest.h"
#include "startmedicalstreamtranscriptionrequest_p.h"
#include "startmedicalstreamtranscriptionresponse.h"
#include "transcribestreamingrequest_p.h"

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::StartMedicalStreamTranscriptionRequest
 * \brief The StartMedicalStreamTranscriptionRequest class provides an interface for TranscribeStreaming StartMedicalStreamTranscription requests.
 *
 * \inmodule QtAwsTranscribeStreaming
 *
 *  Operations and objects for transcribing streaming speech to
 *
 * \sa TranscribeStreamingClient::startMedicalStreamTranscription
 */

/*!
 * Constructs a copy of \a other.
 */
StartMedicalStreamTranscriptionRequest::StartMedicalStreamTranscriptionRequest(const StartMedicalStreamTranscriptionRequest &other)
    : TranscribeStreamingRequest(new StartMedicalStreamTranscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMedicalStreamTranscriptionRequest object.
 */
StartMedicalStreamTranscriptionRequest::StartMedicalStreamTranscriptionRequest()
    : TranscribeStreamingRequest(new StartMedicalStreamTranscriptionRequestPrivate(TranscribeStreamingRequest::StartMedicalStreamTranscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool StartMedicalStreamTranscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMedicalStreamTranscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMedicalStreamTranscriptionRequest::response(QNetworkReply * const reply) const
{
    return new StartMedicalStreamTranscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeStreaming::StartMedicalStreamTranscriptionRequestPrivate
 * \brief The StartMedicalStreamTranscriptionRequestPrivate class provides private implementation for StartMedicalStreamTranscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a StartMedicalStreamTranscriptionRequestPrivate object for TranscribeStreaming \a action,
 * with public implementation \a q.
 */
StartMedicalStreamTranscriptionRequestPrivate::StartMedicalStreamTranscriptionRequestPrivate(
    const TranscribeStreamingRequest::Action action, StartMedicalStreamTranscriptionRequest * const q)
    : TranscribeStreamingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMedicalStreamTranscriptionRequest
 * class' copy constructor.
 */
StartMedicalStreamTranscriptionRequestPrivate::StartMedicalStreamTranscriptionRequestPrivate(
    const StartMedicalStreamTranscriptionRequestPrivate &other, StartMedicalStreamTranscriptionRequest * const q)
    : TranscribeStreamingRequestPrivate(other, q)
{

}

} // namespace TranscribeStreaming
} // namespace QtAws
