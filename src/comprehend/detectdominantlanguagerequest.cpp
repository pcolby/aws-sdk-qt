// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectdominantlanguagerequest.h"
#include "detectdominantlanguagerequest_p.h"
#include "detectdominantlanguageresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectDominantLanguageRequest
 * \brief The DetectDominantLanguageRequest class provides an interface for Comprehend DetectDominantLanguage requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectDominantLanguage
 */

/*!
 * Constructs a copy of \a other.
 */
DetectDominantLanguageRequest::DetectDominantLanguageRequest(const DetectDominantLanguageRequest &other)
    : ComprehendRequest(new DetectDominantLanguageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectDominantLanguageRequest object.
 */
DetectDominantLanguageRequest::DetectDominantLanguageRequest()
    : ComprehendRequest(new DetectDominantLanguageRequestPrivate(ComprehendRequest::DetectDominantLanguageAction, this))
{

}

/*!
 * \reimp
 */
bool DetectDominantLanguageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectDominantLanguageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectDominantLanguageRequest::response(QNetworkReply * const reply) const
{
    return new DetectDominantLanguageResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectDominantLanguageRequestPrivate
 * \brief The DetectDominantLanguageRequestPrivate class provides private implementation for DetectDominantLanguageRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectDominantLanguageRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectDominantLanguageRequestPrivate::DetectDominantLanguageRequestPrivate(
    const ComprehendRequest::Action action, DetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectDominantLanguageRequest
 * class' copy constructor.
 */
DetectDominantLanguageRequestPrivate::DetectDominantLanguageRequestPrivate(
    const DetectDominantLanguageRequestPrivate &other, DetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
