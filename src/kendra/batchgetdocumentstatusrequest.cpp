// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetdocumentstatusrequest.h"
#include "batchgetdocumentstatusrequest_p.h"
#include "batchgetdocumentstatusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchGetDocumentStatusRequest
 * \brief The BatchGetDocumentStatusRequest class provides an interface for Kendra BatchGetDocumentStatus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchGetDocumentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetDocumentStatusRequest::BatchGetDocumentStatusRequest(const BatchGetDocumentStatusRequest &other)
    : KendraRequest(new BatchGetDocumentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetDocumentStatusRequest object.
 */
BatchGetDocumentStatusRequest::BatchGetDocumentStatusRequest()
    : KendraRequest(new BatchGetDocumentStatusRequestPrivate(KendraRequest::BatchGetDocumentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetDocumentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetDocumentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDocumentStatusRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDocumentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::BatchGetDocumentStatusRequestPrivate
 * \brief The BatchGetDocumentStatusRequestPrivate class provides private implementation for BatchGetDocumentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchGetDocumentStatusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
BatchGetDocumentStatusRequestPrivate::BatchGetDocumentStatusRequestPrivate(
    const KendraRequest::Action action, BatchGetDocumentStatusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDocumentStatusRequest
 * class' copy constructor.
 */
BatchGetDocumentStatusRequestPrivate::BatchGetDocumentStatusRequestPrivate(
    const BatchGetDocumentStatusRequestPrivate &other, BatchGetDocumentStatusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
