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

#include "detecttargetedsentimentrequest.h"
#include "detecttargetedsentimentrequest_p.h"
#include "detecttargetedsentimentresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectTargetedSentimentRequest
 * \brief The DetectTargetedSentimentRequest class provides an interface for Comprehend DetectTargetedSentiment requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectTargetedSentiment
 */

/*!
 * Constructs a copy of \a other.
 */
DetectTargetedSentimentRequest::DetectTargetedSentimentRequest(const DetectTargetedSentimentRequest &other)
    : ComprehendRequest(new DetectTargetedSentimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectTargetedSentimentRequest object.
 */
DetectTargetedSentimentRequest::DetectTargetedSentimentRequest()
    : ComprehendRequest(new DetectTargetedSentimentRequestPrivate(ComprehendRequest::DetectTargetedSentimentAction, this))
{

}

/*!
 * \reimp
 */
bool DetectTargetedSentimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectTargetedSentimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectTargetedSentimentRequest::response(QNetworkReply * const reply) const
{
    return new DetectTargetedSentimentResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectTargetedSentimentRequestPrivate
 * \brief The DetectTargetedSentimentRequestPrivate class provides private implementation for DetectTargetedSentimentRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectTargetedSentimentRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectTargetedSentimentRequestPrivate::DetectTargetedSentimentRequestPrivate(
    const ComprehendRequest::Action action, DetectTargetedSentimentRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectTargetedSentimentRequest
 * class' copy constructor.
 */
DetectTargetedSentimentRequestPrivate::DetectTargetedSentimentRequestPrivate(
    const DetectTargetedSentimentRequestPrivate &other, DetectTargetedSentimentRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
