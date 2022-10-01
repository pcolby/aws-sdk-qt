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

#include "listentityrecognizersummariesrequest.h"
#include "listentityrecognizersummariesrequest_p.h"
#include "listentityrecognizersummariesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntityRecognizerSummariesRequest
 * \brief The ListEntityRecognizerSummariesRequest class provides an interface for Comprehend ListEntityRecognizerSummaries requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntityRecognizerSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntityRecognizerSummariesRequest::ListEntityRecognizerSummariesRequest(const ListEntityRecognizerSummariesRequest &other)
    : ComprehendRequest(new ListEntityRecognizerSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntityRecognizerSummariesRequest object.
 */
ListEntityRecognizerSummariesRequest::ListEntityRecognizerSummariesRequest()
    : ComprehendRequest(new ListEntityRecognizerSummariesRequestPrivate(ComprehendRequest::ListEntityRecognizerSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntityRecognizerSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntityRecognizerSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntityRecognizerSummariesRequest::response(QNetworkReply * const reply) const
{
    return new ListEntityRecognizerSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListEntityRecognizerSummariesRequestPrivate
 * \brief The ListEntityRecognizerSummariesRequestPrivate class provides private implementation for ListEntityRecognizerSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntityRecognizerSummariesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListEntityRecognizerSummariesRequestPrivate::ListEntityRecognizerSummariesRequestPrivate(
    const ComprehendRequest::Action action, ListEntityRecognizerSummariesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntityRecognizerSummariesRequest
 * class' copy constructor.
 */
ListEntityRecognizerSummariesRequestPrivate::ListEntityRecognizerSummariesRequestPrivate(
    const ListEntityRecognizerSummariesRequestPrivate &other, ListEntityRecognizerSummariesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
