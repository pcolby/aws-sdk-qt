/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchdetectdominantlanguagerequest.h"
#include "batchdetectdominantlanguagerequest_p.h"
#include "batchdetectdominantlanguageresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectDominantLanguageRequest
 * \brief The BatchDetectDominantLanguageRequest class provides an interface for Comprehend BatchDetectDominantLanguage requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectDominantLanguage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectDominantLanguageRequest::BatchDetectDominantLanguageRequest(const BatchDetectDominantLanguageRequest &other)
    : ComprehendRequest(new BatchDetectDominantLanguageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectDominantLanguageRequest object.
 */
BatchDetectDominantLanguageRequest::BatchDetectDominantLanguageRequest()
    : ComprehendRequest(new BatchDetectDominantLanguageRequestPrivate(ComprehendRequest::BatchDetectDominantLanguageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectDominantLanguageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectDominantLanguageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectDominantLanguageRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectDominantLanguageResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectDominantLanguageRequestPrivate
 * \brief The BatchDetectDominantLanguageRequestPrivate class provides private implementation for BatchDetectDominantLanguageRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectDominantLanguageRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectDominantLanguageRequestPrivate::BatchDetectDominantLanguageRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectDominantLanguageRequest
 * class' copy constructor.
 */
BatchDetectDominantLanguageRequestPrivate::BatchDetectDominantLanguageRequestPrivate(
    const BatchDetectDominantLanguageRequestPrivate &other, BatchDetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
