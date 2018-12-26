/*
    Copyright 2013-2018 Paul Colby

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

#include "listdocumentclassifiersrequest.h"
#include "listdocumentclassifiersrequest_p.h"
#include "listdocumentclassifiersresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDocumentClassifiersRequest
 * \brief The ListDocumentClassifiersRequest class provides an interface for Comprehend ListDocumentClassifiers requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDocumentClassifiers
 */

/*!
 * Constructs a copy of \a other.
 */
ListDocumentClassifiersRequest::ListDocumentClassifiersRequest(const ListDocumentClassifiersRequest &other)
    : ComprehendRequest(new ListDocumentClassifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDocumentClassifiersRequest object.
 */
ListDocumentClassifiersRequest::ListDocumentClassifiersRequest()
    : ComprehendRequest(new ListDocumentClassifiersRequestPrivate(ComprehendRequest::ListDocumentClassifiersAction, this))
{

}

/*!
 * \reimp
 */
bool ListDocumentClassifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDocumentClassifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDocumentClassifiersRequest::response(QNetworkReply * const reply) const
{
    return new ListDocumentClassifiersResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListDocumentClassifiersRequestPrivate
 * \brief The ListDocumentClassifiersRequestPrivate class provides private implementation for ListDocumentClassifiersRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDocumentClassifiersRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListDocumentClassifiersRequestPrivate::ListDocumentClassifiersRequestPrivate(
    const ComprehendRequest::Action action, ListDocumentClassifiersRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDocumentClassifiersRequest
 * class' copy constructor.
 */
ListDocumentClassifiersRequestPrivate::ListDocumentClassifiersRequestPrivate(
    const ListDocumentClassifiersRequestPrivate &other, ListDocumentClassifiersRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
