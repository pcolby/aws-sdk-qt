// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
