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

#include "getmedicaltranscriptionjobrequest.h"
#include "getmedicaltranscriptionjobrequest_p.h"
#include "getmedicaltranscriptionjobresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetMedicalTranscriptionJobRequest
 * \brief The GetMedicalTranscriptionJobRequest class provides an interface for TranscribeService GetMedicalTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetMedicalTranscriptionJobRequest::GetMedicalTranscriptionJobRequest(const GetMedicalTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new GetMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMedicalTranscriptionJobRequest object.
 */
GetMedicalTranscriptionJobRequest::GetMedicalTranscriptionJobRequest()
    : TranscribeServiceRequest(new GetMedicalTranscriptionJobRequestPrivate(TranscribeServiceRequest::GetMedicalTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetMedicalTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMedicalTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMedicalTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new GetMedicalTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::GetMedicalTranscriptionJobRequestPrivate
 * \brief The GetMedicalTranscriptionJobRequestPrivate class provides private implementation for GetMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetMedicalTranscriptionJobRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
GetMedicalTranscriptionJobRequestPrivate::GetMedicalTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, GetMedicalTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMedicalTranscriptionJobRequest
 * class' copy constructor.
 */
GetMedicalTranscriptionJobRequestPrivate::GetMedicalTranscriptionJobRequestPrivate(
    const GetMedicalTranscriptionJobRequestPrivate &other, GetMedicalTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
