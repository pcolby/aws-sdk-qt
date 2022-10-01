// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
