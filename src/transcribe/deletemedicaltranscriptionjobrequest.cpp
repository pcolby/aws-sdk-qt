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

#include "deletemedicaltranscriptionjobrequest.h"
#include "deletemedicaltranscriptionjobrequest_p.h"
#include "deletemedicaltranscriptionjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteMedicalTranscriptionJobRequest
 * \brief The DeleteMedicalTranscriptionJobRequest class provides an interface for Transcribe DeleteMedicalTranscriptionJob requests.
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
 * \sa TranscribeClient::deleteMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMedicalTranscriptionJobRequest::DeleteMedicalTranscriptionJobRequest(const DeleteMedicalTranscriptionJobRequest &other)
    : TranscribeRequest(new DeleteMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMedicalTranscriptionJobRequest object.
 */
DeleteMedicalTranscriptionJobRequest::DeleteMedicalTranscriptionJobRequest()
    : TranscribeRequest(new DeleteMedicalTranscriptionJobRequestPrivate(TranscribeRequest::DeleteMedicalTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMedicalTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMedicalTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMedicalTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMedicalTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::DeleteMedicalTranscriptionJobRequestPrivate
 * \brief The DeleteMedicalTranscriptionJobRequestPrivate class provides private implementation for DeleteMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteMedicalTranscriptionJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
DeleteMedicalTranscriptionJobRequestPrivate::DeleteMedicalTranscriptionJobRequestPrivate(
    const TranscribeRequest::Action action, DeleteMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMedicalTranscriptionJobRequest
 * class' copy constructor.
 */
DeleteMedicalTranscriptionJobRequestPrivate::DeleteMedicalTranscriptionJobRequestPrivate(
    const DeleteMedicalTranscriptionJobRequestPrivate &other, DeleteMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
