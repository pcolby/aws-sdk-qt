// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecallanalyticscategoryrequest.h"
#include "deletecallanalyticscategoryrequest_p.h"
#include "deletecallanalyticscategoryresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteCallAnalyticsCategoryRequest
 * \brief The DeleteCallAnalyticsCategoryRequest class provides an interface for Transcribe DeleteCallAnalyticsCategory requests.
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
 * \sa TranscribeClient::deleteCallAnalyticsCategory
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCallAnalyticsCategoryRequest::DeleteCallAnalyticsCategoryRequest(const DeleteCallAnalyticsCategoryRequest &other)
    : TranscribeRequest(new DeleteCallAnalyticsCategoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCallAnalyticsCategoryRequest object.
 */
DeleteCallAnalyticsCategoryRequest::DeleteCallAnalyticsCategoryRequest()
    : TranscribeRequest(new DeleteCallAnalyticsCategoryRequestPrivate(TranscribeRequest::DeleteCallAnalyticsCategoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCallAnalyticsCategoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCallAnalyticsCategoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCallAnalyticsCategoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCallAnalyticsCategoryResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::DeleteCallAnalyticsCategoryRequestPrivate
 * \brief The DeleteCallAnalyticsCategoryRequestPrivate class provides private implementation for DeleteCallAnalyticsCategoryRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteCallAnalyticsCategoryRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
DeleteCallAnalyticsCategoryRequestPrivate::DeleteCallAnalyticsCategoryRequestPrivate(
    const TranscribeRequest::Action action, DeleteCallAnalyticsCategoryRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCallAnalyticsCategoryRequest
 * class' copy constructor.
 */
DeleteCallAnalyticsCategoryRequestPrivate::DeleteCallAnalyticsCategoryRequestPrivate(
    const DeleteCallAnalyticsCategoryRequestPrivate &other, DeleteCallAnalyticsCategoryRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
