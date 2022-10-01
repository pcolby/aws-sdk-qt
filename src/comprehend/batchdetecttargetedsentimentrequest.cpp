// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdetecttargetedsentimentrequest.h"
#include "batchdetecttargetedsentimentrequest_p.h"
#include "batchdetecttargetedsentimentresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectTargetedSentimentRequest
 * \brief The BatchDetectTargetedSentimentRequest class provides an interface for Comprehend BatchDetectTargetedSentiment requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectTargetedSentiment
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectTargetedSentimentRequest::BatchDetectTargetedSentimentRequest(const BatchDetectTargetedSentimentRequest &other)
    : ComprehendRequest(new BatchDetectTargetedSentimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectTargetedSentimentRequest object.
 */
BatchDetectTargetedSentimentRequest::BatchDetectTargetedSentimentRequest()
    : ComprehendRequest(new BatchDetectTargetedSentimentRequestPrivate(ComprehendRequest::BatchDetectTargetedSentimentAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectTargetedSentimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectTargetedSentimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectTargetedSentimentRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectTargetedSentimentResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectTargetedSentimentRequestPrivate
 * \brief The BatchDetectTargetedSentimentRequestPrivate class provides private implementation for BatchDetectTargetedSentimentRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectTargetedSentimentRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectTargetedSentimentRequestPrivate::BatchDetectTargetedSentimentRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectTargetedSentimentRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectTargetedSentimentRequest
 * class' copy constructor.
 */
BatchDetectTargetedSentimentRequestPrivate::BatchDetectTargetedSentimentRequestPrivate(
    const BatchDetectTargetedSentimentRequestPrivate &other, BatchDetectTargetedSentimentRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
