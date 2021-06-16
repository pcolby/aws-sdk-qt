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

#include "listmedicaltranscriptionjobsrequest.h"
#include "listmedicaltranscriptionjobsrequest_p.h"
#include "listmedicaltranscriptionjobsresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListMedicalTranscriptionJobsRequest
 * \brief The ListMedicalTranscriptionJobsRequest class provides an interface for TranscribeService ListMedicalTranscriptionJobs requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listMedicalTranscriptionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListMedicalTranscriptionJobsRequest::ListMedicalTranscriptionJobsRequest(const ListMedicalTranscriptionJobsRequest &other)
    : TranscribeServiceRequest(new ListMedicalTranscriptionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMedicalTranscriptionJobsRequest object.
 */
ListMedicalTranscriptionJobsRequest::ListMedicalTranscriptionJobsRequest()
    : TranscribeServiceRequest(new ListMedicalTranscriptionJobsRequestPrivate(TranscribeServiceRequest::ListMedicalTranscriptionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMedicalTranscriptionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMedicalTranscriptionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMedicalTranscriptionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListMedicalTranscriptionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::ListMedicalTranscriptionJobsRequestPrivate
 * \brief The ListMedicalTranscriptionJobsRequestPrivate class provides private implementation for ListMedicalTranscriptionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListMedicalTranscriptionJobsRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
ListMedicalTranscriptionJobsRequestPrivate::ListMedicalTranscriptionJobsRequestPrivate(
    const TranscribeServiceRequest::Action action, ListMedicalTranscriptionJobsRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMedicalTranscriptionJobsRequest
 * class' copy constructor.
 */
ListMedicalTranscriptionJobsRequestPrivate::ListMedicalTranscriptionJobsRequestPrivate(
    const ListMedicalTranscriptionJobsRequestPrivate &other, ListMedicalTranscriptionJobsRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
