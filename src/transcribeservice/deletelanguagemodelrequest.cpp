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

#include "deletelanguagemodelrequest.h"
#include "deletelanguagemodelrequest_p.h"
#include "deletelanguagemodelresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteLanguageModelRequest
 * \brief The DeleteLanguageModelRequest class provides an interface for TranscribeService DeleteLanguageModel requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteLanguageModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLanguageModelRequest::DeleteLanguageModelRequest(const DeleteLanguageModelRequest &other)
    : TranscribeServiceRequest(new DeleteLanguageModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLanguageModelRequest object.
 */
DeleteLanguageModelRequest::DeleteLanguageModelRequest()
    : TranscribeServiceRequest(new DeleteLanguageModelRequestPrivate(TranscribeServiceRequest::DeleteLanguageModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLanguageModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLanguageModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLanguageModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLanguageModelResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::DeleteLanguageModelRequestPrivate
 * \brief The DeleteLanguageModelRequestPrivate class provides private implementation for DeleteLanguageModelRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteLanguageModelRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DeleteLanguageModelRequestPrivate::DeleteLanguageModelRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteLanguageModelRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLanguageModelRequest
 * class' copy constructor.
 */
DeleteLanguageModelRequestPrivate::DeleteLanguageModelRequestPrivate(
    const DeleteLanguageModelRequestPrivate &other, DeleteLanguageModelRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
