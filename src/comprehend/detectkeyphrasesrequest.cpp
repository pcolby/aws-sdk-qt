// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectkeyphrasesrequest.h"
#include "detectkeyphrasesrequest_p.h"
#include "detectkeyphrasesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectKeyPhrasesRequest
 * \brief The DetectKeyPhrasesRequest class provides an interface for Comprehend DetectKeyPhrases requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectKeyPhrases
 */

/*!
 * Constructs a copy of \a other.
 */
DetectKeyPhrasesRequest::DetectKeyPhrasesRequest(const DetectKeyPhrasesRequest &other)
    : ComprehendRequest(new DetectKeyPhrasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectKeyPhrasesRequest object.
 */
DetectKeyPhrasesRequest::DetectKeyPhrasesRequest()
    : ComprehendRequest(new DetectKeyPhrasesRequestPrivate(ComprehendRequest::DetectKeyPhrasesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectKeyPhrasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectKeyPhrasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectKeyPhrasesRequest::response(QNetworkReply * const reply) const
{
    return new DetectKeyPhrasesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectKeyPhrasesRequestPrivate
 * \brief The DetectKeyPhrasesRequestPrivate class provides private implementation for DetectKeyPhrasesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectKeyPhrasesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectKeyPhrasesRequestPrivate::DetectKeyPhrasesRequestPrivate(
    const ComprehendRequest::Action action, DetectKeyPhrasesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectKeyPhrasesRequest
 * class' copy constructor.
 */
DetectKeyPhrasesRequestPrivate::DetectKeyPhrasesRequestPrivate(
    const DetectKeyPhrasesRequestPrivate &other, DetectKeyPhrasesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
