// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
