/*
    Copyright 2013-2019 Paul Colby

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

#include "gettranscriptionjobrequest.h"
#include "gettranscriptionjobrequest_p.h"
#include "gettranscriptionjobresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetTranscriptionJobRequest
 * \brief The GetTranscriptionJobRequest class provides an interface for TranscribeService GetTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetTranscriptionJobRequest::GetTranscriptionJobRequest(const GetTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new GetTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTranscriptionJobRequest object.
 */
GetTranscriptionJobRequest::GetTranscriptionJobRequest()
    : TranscribeServiceRequest(new GetTranscriptionJobRequestPrivate(TranscribeServiceRequest::GetTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new GetTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::GetTranscriptionJobRequestPrivate
 * \brief The GetTranscriptionJobRequestPrivate class provides private implementation for GetTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetTranscriptionJobRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
GetTranscriptionJobRequestPrivate::GetTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, GetTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTranscriptionJobRequest
 * class' copy constructor.
 */
GetTranscriptionJobRequestPrivate::GetTranscriptionJobRequestPrivate(
    const GetTranscriptionJobRequestPrivate &other, GetTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
