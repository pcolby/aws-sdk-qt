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
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::StartMedicalTranscriptionJobRequest
 * \brief The StartMedicalTranscriptionJobRequest class provides an interface for TranscribeService StartMedicalTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::startMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest(const StartMedicalTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new StartMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMedicalTranscriptionJobRequest object.
 */
StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest()
    : TranscribeServiceRequest(new StartMedicalTranscriptionJobRequestPrivate(TranscribeServiceRequest::StartMedicalTranscriptionJobAction, this))
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
 * \class QtAws::TranscribeService::StartMedicalTranscriptionJobRequestPrivate
 * \brief The StartMedicalTranscriptionJobRequestPrivate class provides private implementation for StartMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a StartMedicalTranscriptionJobRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
StartMedicalTranscriptionJobRequestPrivate::StartMedicalTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, StartMedicalTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
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
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
