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
#include "transcribestreamingservicerequest_p.h"

namespace QtAws {
namespace TranscribeStreamingService {

/*!
 * \class QtAws::TranscribeStreamingService::StartMedicalStreamTranscriptionRequest
 * \brief The StartMedicalStreamTranscriptionRequest class provides an interface for TranscribeStreamingService StartMedicalStreamTranscription requests.
 *
 * \inmodule QtAwsTranscribeStreamingService
 *
 *  Operations and objects for transcribing streaming speech to
 *
 * \sa TranscribeStreamingServiceClient::startMedicalStreamTranscription
 */

/*!
 * Constructs a copy of \a other.
 */
StartMedicalStreamTranscriptionRequest::StartMedicalStreamTranscriptionRequest(const StartMedicalStreamTranscriptionRequest &other)
    : TranscribeStreamingServiceRequest(new StartMedicalStreamTranscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMedicalStreamTranscriptionRequest object.
 */
StartMedicalStreamTranscriptionRequest::StartMedicalStreamTranscriptionRequest()
    : TranscribeStreamingServiceRequest(new StartMedicalStreamTranscriptionRequestPrivate(TranscribeStreamingServiceRequest::StartMedicalStreamTranscriptionAction, this))
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
 * \class QtAws::TranscribeStreamingService::StartMedicalStreamTranscriptionRequestPrivate
 * \brief The StartMedicalStreamTranscriptionRequestPrivate class provides private implementation for StartMedicalStreamTranscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreamingService
 */

/*!
 * Constructs a StartMedicalStreamTranscriptionRequestPrivate object for TranscribeStreamingService \a action,
 * with public implementation \a q.
 */
StartMedicalStreamTranscriptionRequestPrivate::StartMedicalStreamTranscriptionRequestPrivate(
    const TranscribeStreamingServiceRequest::Action action, StartMedicalStreamTranscriptionRequest * const q)
    : TranscribeStreamingServiceRequestPrivate(action, q)
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
    : TranscribeStreamingServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeStreamingService
} // namespace QtAws
