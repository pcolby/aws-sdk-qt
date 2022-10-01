// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputdocumentrequest.h"
#include "batchputdocumentrequest_p.h"
#include "batchputdocumentresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchPutDocumentRequest
 * \brief The BatchPutDocumentRequest class provides an interface for Kendra BatchPutDocument requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchPutDocument
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutDocumentRequest::BatchPutDocumentRequest(const BatchPutDocumentRequest &other)
    : KendraRequest(new BatchPutDocumentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutDocumentRequest object.
 */
BatchPutDocumentRequest::BatchPutDocumentRequest()
    : KendraRequest(new BatchPutDocumentRequestPrivate(KendraRequest::BatchPutDocumentAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutDocumentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutDocumentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutDocumentRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutDocumentResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::BatchPutDocumentRequestPrivate
 * \brief The BatchPutDocumentRequestPrivate class provides private implementation for BatchPutDocumentRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchPutDocumentRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
BatchPutDocumentRequestPrivate::BatchPutDocumentRequestPrivate(
    const KendraRequest::Action action, BatchPutDocumentRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutDocumentRequest
 * class' copy constructor.
 */
BatchPutDocumentRequestPrivate::BatchPutDocumentRequestPrivate(
    const BatchPutDocumentRequestPrivate &other, BatchPutDocumentRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
