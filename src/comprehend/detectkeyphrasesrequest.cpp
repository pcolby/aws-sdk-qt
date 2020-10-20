/*
    Copyright 2013-2020 Paul Colby

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
