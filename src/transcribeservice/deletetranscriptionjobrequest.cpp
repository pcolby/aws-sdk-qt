/*
    Copyright 2013-2018 Paul Colby

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

#include "deletetranscriptionjobrequest.h"
#include "deletetranscriptionjobrequest_p.h"
#include "deletetranscriptionjobresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteTranscriptionJobRequest
 * \brief The DeleteTranscriptionJobRequest class provides an interface for TranscribeService DeleteTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTranscriptionJobRequest::DeleteTranscriptionJobRequest(const DeleteTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new DeleteTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTranscriptionJobRequest object.
 */
DeleteTranscriptionJobRequest::DeleteTranscriptionJobRequest()
    : TranscribeServiceRequest(new DeleteTranscriptionJobRequestPrivate(TranscribeServiceRequest::DeleteTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::DeleteTranscriptionJobRequestPrivate
 * \brief The DeleteTranscriptionJobRequestPrivate class provides private implementation for DeleteTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteTranscriptionJobRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DeleteTranscriptionJobRequestPrivate::DeleteTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTranscriptionJobRequest
 * class' copy constructor.
 */
DeleteTranscriptionJobRequestPrivate::DeleteTranscriptionJobRequestPrivate(
    const DeleteTranscriptionJobRequestPrivate &other, DeleteTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
