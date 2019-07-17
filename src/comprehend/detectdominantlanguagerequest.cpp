/*
    Copyright 2013-2019 Paul Colby

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
