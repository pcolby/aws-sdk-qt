// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcallanalyticsjobsrequest.h"
#include "listcallanalyticsjobsrequest_p.h"
#include "listcallanalyticsjobsresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListCallAnalyticsJobsRequest
 * \brief The ListCallAnalyticsJobsRequest class provides an interface for Transcribe ListCallAnalyticsJobs requests.
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
 * \sa TranscribeClient::listCallAnalyticsJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListCallAnalyticsJobsRequest::ListCallAnalyticsJobsRequest(const ListCallAnalyticsJobsRequest &other)
    : TranscribeRequest(new ListCallAnalyticsJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCallAnalyticsJobsRequest object.
 */
ListCallAnalyticsJobsRequest::ListCallAnalyticsJobsRequest()
    : TranscribeRequest(new ListCallAnalyticsJobsRequestPrivate(TranscribeRequest::ListCallAnalyticsJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCallAnalyticsJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCallAnalyticsJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCallAnalyticsJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListCallAnalyticsJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::ListCallAnalyticsJobsRequestPrivate
 * \brief The ListCallAnalyticsJobsRequestPrivate class provides private implementation for ListCallAnalyticsJobsRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListCallAnalyticsJobsRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
ListCallAnalyticsJobsRequestPrivate::ListCallAnalyticsJobsRequestPrivate(
    const TranscribeRequest::Action action, ListCallAnalyticsJobsRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCallAnalyticsJobsRequest
 * class' copy constructor.
 */
ListCallAnalyticsJobsRequestPrivate::ListCallAnalyticsJobsRequestPrivate(
    const ListCallAnalyticsJobsRequestPrivate &other, ListCallAnalyticsJobsRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
