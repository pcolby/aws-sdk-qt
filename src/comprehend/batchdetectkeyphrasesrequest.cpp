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

#include "batchdetectkeyphrasesrequest.h"
#include "batchdetectkeyphrasesrequest_p.h"
#include "batchdetectkeyphrasesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectKeyPhrasesRequest
 * \brief The BatchDetectKeyPhrasesRequest class provides an interface for Comprehend BatchDetectKeyPhrases requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectKeyPhrases
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectKeyPhrasesRequest::BatchDetectKeyPhrasesRequest(const BatchDetectKeyPhrasesRequest &other)
    : ComprehendRequest(new BatchDetectKeyPhrasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectKeyPhrasesRequest object.
 */
BatchDetectKeyPhrasesRequest::BatchDetectKeyPhrasesRequest()
    : ComprehendRequest(new BatchDetectKeyPhrasesRequestPrivate(ComprehendRequest::BatchDetectKeyPhrasesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectKeyPhrasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectKeyPhrasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectKeyPhrasesRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectKeyPhrasesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectKeyPhrasesRequestPrivate
 * \brief The BatchDetectKeyPhrasesRequestPrivate class provides private implementation for BatchDetectKeyPhrasesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectKeyPhrasesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectKeyPhrasesRequestPrivate::BatchDetectKeyPhrasesRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectKeyPhrasesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectKeyPhrasesRequest
 * class' copy constructor.
 */
BatchDetectKeyPhrasesRequestPrivate::BatchDetectKeyPhrasesRequestPrivate(
    const BatchDetectKeyPhrasesRequestPrivate &other, BatchDetectKeyPhrasesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
