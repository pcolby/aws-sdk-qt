// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecallanalyticsjobrequest.h"
#include "deletecallanalyticsjobrequest_p.h"
#include "deletecallanalyticsjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteCallAnalyticsJobRequest
 * \brief The DeleteCallAnalyticsJobRequest class provides an interface for Transcribe DeleteCallAnalyticsJob requests.
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
 * \sa TranscribeClient::deleteCallAnalyticsJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCallAnalyticsJobRequest::DeleteCallAnalyticsJobRequest(const DeleteCallAnalyticsJobRequest &other)
    : TranscribeRequest(new DeleteCallAnalyticsJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCallAnalyticsJobRequest object.
 */
DeleteCallAnalyticsJobRequest::DeleteCallAnalyticsJobRequest()
    : TranscribeRequest(new DeleteCallAnalyticsJobRequestPrivate(TranscribeRequest::DeleteCallAnalyticsJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCallAnalyticsJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCallAnalyticsJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCallAnalyticsJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCallAnalyticsJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::DeleteCallAnalyticsJobRequestPrivate
 * \brief The DeleteCallAnalyticsJobRequestPrivate class provides private implementation for DeleteCallAnalyticsJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteCallAnalyticsJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
DeleteCallAnalyticsJobRequestPrivate::DeleteCallAnalyticsJobRequestPrivate(
    const TranscribeRequest::Action action, DeleteCallAnalyticsJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCallAnalyticsJobRequest
 * class' copy constructor.
 */
DeleteCallAnalyticsJobRequestPrivate::DeleteCallAnalyticsJobRequestPrivate(
    const DeleteCallAnalyticsJobRequestPrivate &other, DeleteCallAnalyticsJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
