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

#include "listdocumentclassifiersummariesrequest.h"
#include "listdocumentclassifiersummariesrequest_p.h"
#include "listdocumentclassifiersummariesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDocumentClassifierSummariesRequest
 * \brief The ListDocumentClassifierSummariesRequest class provides an interface for Comprehend ListDocumentClassifierSummaries requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDocumentClassifierSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
ListDocumentClassifierSummariesRequest::ListDocumentClassifierSummariesRequest(const ListDocumentClassifierSummariesRequest &other)
    : ComprehendRequest(new ListDocumentClassifierSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDocumentClassifierSummariesRequest object.
 */
ListDocumentClassifierSummariesRequest::ListDocumentClassifierSummariesRequest()
    : ComprehendRequest(new ListDocumentClassifierSummariesRequestPrivate(ComprehendRequest::ListDocumentClassifierSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDocumentClassifierSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDocumentClassifierSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDocumentClassifierSummariesRequest::response(QNetworkReply * const reply) const
{
    return new ListDocumentClassifierSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListDocumentClassifierSummariesRequestPrivate
 * \brief The ListDocumentClassifierSummariesRequestPrivate class provides private implementation for ListDocumentClassifierSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDocumentClassifierSummariesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListDocumentClassifierSummariesRequestPrivate::ListDocumentClassifierSummariesRequestPrivate(
    const ComprehendRequest::Action action, ListDocumentClassifierSummariesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDocumentClassifierSummariesRequest
 * class' copy constructor.
 */
ListDocumentClassifierSummariesRequestPrivate::ListDocumentClassifierSummariesRequestPrivate(
    const ListDocumentClassifierSummariesRequestPrivate &other, ListDocumentClassifierSummariesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
