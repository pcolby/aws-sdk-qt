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

#include "classifydocumentrequest.h"
#include "classifydocumentrequest_p.h"
#include "classifydocumentresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ClassifyDocumentRequest
 * \brief The ClassifyDocumentRequest class provides an interface for Comprehend ClassifyDocument requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::classifyDocument
 */

/*!
 * Constructs a copy of \a other.
 */
ClassifyDocumentRequest::ClassifyDocumentRequest(const ClassifyDocumentRequest &other)
    : ComprehendRequest(new ClassifyDocumentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ClassifyDocumentRequest object.
 */
ClassifyDocumentRequest::ClassifyDocumentRequest()
    : ComprehendRequest(new ClassifyDocumentRequestPrivate(ComprehendRequest::ClassifyDocumentAction, this))
{

}

/*!
 * \reimp
 */
bool ClassifyDocumentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ClassifyDocumentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ClassifyDocumentRequest::response(QNetworkReply * const reply) const
{
    return new ClassifyDocumentResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ClassifyDocumentRequestPrivate
 * \brief The ClassifyDocumentRequestPrivate class provides private implementation for ClassifyDocumentRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ClassifyDocumentRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ClassifyDocumentRequestPrivate::ClassifyDocumentRequestPrivate(
    const ComprehendRequest::Action action, ClassifyDocumentRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ClassifyDocumentRequest
 * class' copy constructor.
 */
ClassifyDocumentRequestPrivate::ClassifyDocumentRequestPrivate(
    const ClassifyDocumentRequestPrivate &other, ClassifyDocumentRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
