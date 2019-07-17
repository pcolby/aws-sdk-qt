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

#include "deletedocumentclassifierrequest.h"
#include "deletedocumentclassifierrequest_p.h"
#include "deletedocumentclassifierresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DeleteDocumentClassifierRequest
 * \brief The DeleteDocumentClassifierRequest class provides an interface for Comprehend DeleteDocumentClassifier requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::deleteDocumentClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDocumentClassifierRequest::DeleteDocumentClassifierRequest(const DeleteDocumentClassifierRequest &other)
    : ComprehendRequest(new DeleteDocumentClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDocumentClassifierRequest object.
 */
DeleteDocumentClassifierRequest::DeleteDocumentClassifierRequest()
    : ComprehendRequest(new DeleteDocumentClassifierRequestPrivate(ComprehendRequest::DeleteDocumentClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDocumentClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDocumentClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDocumentClassifierRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DeleteDocumentClassifierRequestPrivate
 * \brief The DeleteDocumentClassifierRequestPrivate class provides private implementation for DeleteDocumentClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DeleteDocumentClassifierRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DeleteDocumentClassifierRequestPrivate::DeleteDocumentClassifierRequestPrivate(
    const ComprehendRequest::Action action, DeleteDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentClassifierRequest
 * class' copy constructor.
 */
DeleteDocumentClassifierRequestPrivate::DeleteDocumentClassifierRequestPrivate(
    const DeleteDocumentClassifierRequestPrivate &other, DeleteDocumentClassifierRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
