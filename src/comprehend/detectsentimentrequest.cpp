// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectsentimentrequest.h"
#include "detectsentimentrequest_p.h"
#include "detectsentimentresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectSentimentRequest
 * \brief The DetectSentimentRequest class provides an interface for Comprehend DetectSentiment requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectSentiment
 */

/*!
 * Constructs a copy of \a other.
 */
DetectSentimentRequest::DetectSentimentRequest(const DetectSentimentRequest &other)
    : ComprehendRequest(new DetectSentimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectSentimentRequest object.
 */
DetectSentimentRequest::DetectSentimentRequest()
    : ComprehendRequest(new DetectSentimentRequestPrivate(ComprehendRequest::DetectSentimentAction, this))
{

}

/*!
 * \reimp
 */
bool DetectSentimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectSentimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectSentimentRequest::response(QNetworkReply * const reply) const
{
    return new DetectSentimentResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectSentimentRequestPrivate
 * \brief The DetectSentimentRequestPrivate class provides private implementation for DetectSentimentRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectSentimentRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectSentimentRequestPrivate::DetectSentimentRequestPrivate(
    const ComprehendRequest::Action action, DetectSentimentRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectSentimentRequest
 * class' copy constructor.
 */
DetectSentimentRequestPrivate::DetectSentimentRequestPrivate(
    const DetectSentimentRequestPrivate &other, DetectSentimentRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
