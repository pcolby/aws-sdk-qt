// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
