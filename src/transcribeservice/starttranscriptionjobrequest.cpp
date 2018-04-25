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

#include "starttranscriptionjobrequest.h"
#include "starttranscriptionjobrequest_p.h"
#include "starttranscriptionjobresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::StartTranscriptionJobRequest
 * \brief The StartTranscriptionJobRequest class provides an interface for TranscribeService StartTranscriptionJob requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::startTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTranscriptionJobRequest::StartTranscriptionJobRequest(const StartTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new StartTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTranscriptionJobRequest object.
 */
StartTranscriptionJobRequest::StartTranscriptionJobRequest()
    : TranscribeServiceRequest(new StartTranscriptionJobRequestPrivate(TranscribeServiceRequest::StartTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::StartTranscriptionJobRequestPrivate
 * \brief The StartTranscriptionJobRequestPrivate class provides private implementation for StartTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a StartTranscriptionJobRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
StartTranscriptionJobRequestPrivate::StartTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, StartTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTranscriptionJobRequest
 * class' copy constructor.
 */
StartTranscriptionJobRequestPrivate::StartTranscriptionJobRequestPrivate(
    const StartTranscriptionJobRequestPrivate &other, StartTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
