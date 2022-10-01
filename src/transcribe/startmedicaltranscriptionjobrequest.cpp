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

#include "startmedicaltranscriptionjobrequest.h"
#include "startmedicaltranscriptionjobrequest_p.h"
#include "startmedicaltranscriptionjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::StartMedicalTranscriptionJobRequest
 * \brief The StartMedicalTranscriptionJobRequest class provides an interface for Transcribe StartMedicalTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::startMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest(const StartMedicalTranscriptionJobRequest &other)
    : TranscribeRequest(new StartMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMedicalTranscriptionJobRequest object.
 */
StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest()
    : TranscribeRequest(new StartMedicalTranscriptionJobRequestPrivate(TranscribeRequest::StartMedicalTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartMedicalTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMedicalTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMedicalTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartMedicalTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::StartMedicalTranscriptionJobRequestPrivate
 * \brief The StartMedicalTranscriptionJobRequestPrivate class provides private implementation for StartMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a StartMedicalTranscriptionJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
StartMedicalTranscriptionJobRequestPrivate::StartMedicalTranscriptionJobRequestPrivate(
    const TranscribeRequest::Action action, StartMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMedicalTranscriptionJobRequest
 * class' copy constructor.
 */
StartMedicalTranscriptionJobRequestPrivate::StartMedicalTranscriptionJobRequestPrivate(
    const StartMedicalTranscriptionJobRequestPrivate &other, StartMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
