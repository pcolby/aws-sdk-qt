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
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteMedicalTranscriptionJobRequest
 * \brief The DeleteMedicalTranscriptionJobRequest class provides an interface for TranscribeService DeleteMedicalTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMedicalTranscriptionJobRequest::DeleteMedicalTranscriptionJobRequest(const DeleteMedicalTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new DeleteMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMedicalTranscriptionJobRequest object.
 */
DeleteMedicalTranscriptionJobRequest::DeleteMedicalTranscriptionJobRequest()
    : TranscribeServiceRequest(new DeleteMedicalTranscriptionJobRequestPrivate(TranscribeServiceRequest::DeleteMedicalTranscriptionJobAction, this))
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
 * \class QtAws::TranscribeService::DeleteMedicalTranscriptionJobRequestPrivate
 * \brief The DeleteMedicalTranscriptionJobRequestPrivate class provides private implementation for DeleteMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteMedicalTranscriptionJobRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DeleteMedicalTranscriptionJobRequestPrivate::DeleteMedicalTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteMedicalTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
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
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
