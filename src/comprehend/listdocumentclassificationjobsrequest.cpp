// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdocumentclassificationjobsrequest.h"
#include "listdocumentclassificationjobsrequest_p.h"
#include "listdocumentclassificationjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDocumentClassificationJobsRequest
 * \brief The ListDocumentClassificationJobsRequest class provides an interface for Comprehend ListDocumentClassificationJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDocumentClassificationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDocumentClassificationJobsRequest::ListDocumentClassificationJobsRequest(const ListDocumentClassificationJobsRequest &other)
    : ComprehendRequest(new ListDocumentClassificationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDocumentClassificationJobsRequest object.
 */
ListDocumentClassificationJobsRequest::ListDocumentClassificationJobsRequest()
    : ComprehendRequest(new ListDocumentClassificationJobsRequestPrivate(ComprehendRequest::ListDocumentClassificationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDocumentClassificationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDocumentClassificationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDocumentClassificationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDocumentClassificationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListDocumentClassificationJobsRequestPrivate
 * \brief The ListDocumentClassificationJobsRequestPrivate class provides private implementation for ListDocumentClassificationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDocumentClassificationJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListDocumentClassificationJobsRequestPrivate::ListDocumentClassificationJobsRequestPrivate(
    const ComprehendRequest::Action action, ListDocumentClassificationJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDocumentClassificationJobsRequest
 * class' copy constructor.
 */
ListDocumentClassificationJobsRequestPrivate::ListDocumentClassificationJobsRequestPrivate(
    const ListDocumentClassificationJobsRequestPrivate &other, ListDocumentClassificationJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
