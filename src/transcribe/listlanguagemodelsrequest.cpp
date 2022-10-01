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

#include "listlanguagemodelsrequest.h"
#include "listlanguagemodelsrequest_p.h"
#include "listlanguagemodelsresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListLanguageModelsRequest
 * \brief The ListLanguageModelsRequest class provides an interface for Transcribe ListLanguageModels requests.
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
 * \sa TranscribeClient::listLanguageModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListLanguageModelsRequest::ListLanguageModelsRequest(const ListLanguageModelsRequest &other)
    : TranscribeRequest(new ListLanguageModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLanguageModelsRequest object.
 */
ListLanguageModelsRequest::ListLanguageModelsRequest()
    : TranscribeRequest(new ListLanguageModelsRequestPrivate(TranscribeRequest::ListLanguageModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLanguageModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLanguageModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLanguageModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListLanguageModelsResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::ListLanguageModelsRequestPrivate
 * \brief The ListLanguageModelsRequestPrivate class provides private implementation for ListLanguageModelsRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListLanguageModelsRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
ListLanguageModelsRequestPrivate::ListLanguageModelsRequestPrivate(
    const TranscribeRequest::Action action, ListLanguageModelsRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLanguageModelsRequest
 * class' copy constructor.
 */
ListLanguageModelsRequestPrivate::ListLanguageModelsRequestPrivate(
    const ListLanguageModelsRequestPrivate &other, ListLanguageModelsRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
