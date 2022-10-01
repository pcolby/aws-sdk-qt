// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcallanalyticsjobrequest.h"
#include "getcallanalyticsjobrequest_p.h"
#include "getcallanalyticsjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetCallAnalyticsJobRequest
 * \brief The GetCallAnalyticsJobRequest class provides an interface for Transcribe GetCallAnalyticsJob requests.
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
 * \sa TranscribeClient::getCallAnalyticsJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetCallAnalyticsJobRequest::GetCallAnalyticsJobRequest(const GetCallAnalyticsJobRequest &other)
    : TranscribeRequest(new GetCallAnalyticsJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCallAnalyticsJobRequest object.
 */
GetCallAnalyticsJobRequest::GetCallAnalyticsJobRequest()
    : TranscribeRequest(new GetCallAnalyticsJobRequestPrivate(TranscribeRequest::GetCallAnalyticsJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetCallAnalyticsJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCallAnalyticsJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCallAnalyticsJobRequest::response(QNetworkReply * const reply) const
{
    return new GetCallAnalyticsJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::GetCallAnalyticsJobRequestPrivate
 * \brief The GetCallAnalyticsJobRequestPrivate class provides private implementation for GetCallAnalyticsJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetCallAnalyticsJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
GetCallAnalyticsJobRequestPrivate::GetCallAnalyticsJobRequestPrivate(
    const TranscribeRequest::Action action, GetCallAnalyticsJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCallAnalyticsJobRequest
 * class' copy constructor.
 */
GetCallAnalyticsJobRequestPrivate::GetCallAnalyticsJobRequestPrivate(
    const GetCallAnalyticsJobRequestPrivate &other, GetCallAnalyticsJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
