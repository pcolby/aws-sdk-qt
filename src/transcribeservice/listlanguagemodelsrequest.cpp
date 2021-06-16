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
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListLanguageModelsRequest
 * \brief The ListLanguageModelsRequest class provides an interface for TranscribeService ListLanguageModels requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listLanguageModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListLanguageModelsRequest::ListLanguageModelsRequest(const ListLanguageModelsRequest &other)
    : TranscribeServiceRequest(new ListLanguageModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLanguageModelsRequest object.
 */
ListLanguageModelsRequest::ListLanguageModelsRequest()
    : TranscribeServiceRequest(new ListLanguageModelsRequestPrivate(TranscribeServiceRequest::ListLanguageModelsAction, this))
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
 * \class QtAws::TranscribeService::ListLanguageModelsRequestPrivate
 * \brief The ListLanguageModelsRequestPrivate class provides private implementation for ListLanguageModelsRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListLanguageModelsRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
ListLanguageModelsRequestPrivate::ListLanguageModelsRequestPrivate(
    const TranscribeServiceRequest::Action action, ListLanguageModelsRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
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
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
