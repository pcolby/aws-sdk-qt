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

#include "batchdetectsentimentrequest.h"
#include "batchdetectsentimentrequest_p.h"
#include "batchdetectsentimentresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectSentimentRequest
 * \brief The BatchDetectSentimentRequest class provides an interface for Comprehend BatchDetectSentiment requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectSentiment
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectSentimentRequest::BatchDetectSentimentRequest(const BatchDetectSentimentRequest &other)
    : ComprehendRequest(new BatchDetectSentimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectSentimentRequest object.
 */
BatchDetectSentimentRequest::BatchDetectSentimentRequest()
    : ComprehendRequest(new BatchDetectSentimentRequestPrivate(ComprehendRequest::BatchDetectSentimentAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectSentimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectSentimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectSentimentRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectSentimentResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectSentimentRequestPrivate
 * \brief The BatchDetectSentimentRequestPrivate class provides private implementation for BatchDetectSentimentRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectSentimentRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectSentimentRequestPrivate::BatchDetectSentimentRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectSentimentRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectSentimentRequest
 * class' copy constructor.
 */
BatchDetectSentimentRequestPrivate::BatchDetectSentimentRequestPrivate(
    const BatchDetectSentimentRequestPrivate &other, BatchDetectSentimentRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
