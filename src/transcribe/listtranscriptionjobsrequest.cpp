/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtranscriptionjobsrequest.h"
#include "listtranscriptionjobsrequest_p.h"
#include "listtranscriptionjobsresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListTranscriptionJobsRequest
 * \brief The ListTranscriptionJobsRequest class provides an interface for TranscribeService ListTranscriptionJobs requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listTranscriptionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTranscriptionJobsRequest::ListTranscriptionJobsRequest(const ListTranscriptionJobsRequest &other)
    : TranscribeServiceRequest(new ListTranscriptionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTranscriptionJobsRequest object.
 */
ListTranscriptionJobsRequest::ListTranscriptionJobsRequest()
    : TranscribeServiceRequest(new ListTranscriptionJobsRequestPrivate(TranscribeServiceRequest::ListTranscriptionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTranscriptionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTranscriptionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTranscriptionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTranscriptionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::ListTranscriptionJobsRequestPrivate
 * \brief The ListTranscriptionJobsRequestPrivate class provides private implementation for ListTranscriptionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 *
 * Constructs a ListTranscriptionJobsRequestPrivate object for TranscribeService \a action with,
 * public implementation \a q.
 */
ListTranscriptionJobsRequestPrivate::ListTranscriptionJobsRequestPrivate(
    const TranscribeServiceRequest::Action action, ListTranscriptionJobsRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTranscriptionJobsRequest
 * class' copy constructor.
 */
ListTranscriptionJobsRequestPrivate::ListTranscriptionJobsRequestPrivate(
    const ListTranscriptionJobsRequestPrivate &other, ListTranscriptionJobsRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
