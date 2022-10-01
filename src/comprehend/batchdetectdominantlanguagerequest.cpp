// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
