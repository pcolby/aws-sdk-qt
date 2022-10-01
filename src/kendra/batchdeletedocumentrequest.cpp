// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletedocumentrequest.h"
#include "batchdeletedocumentrequest_p.h"
#include "batchdeletedocumentresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchDeleteDocumentRequest
 * \brief The BatchDeleteDocumentRequest class provides an interface for Kendra BatchDeleteDocument requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchDeleteDocument
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteDocumentRequest::BatchDeleteDocumentRequest(const BatchDeleteDocumentRequest &other)
    : KendraRequest(new BatchDeleteDocumentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteDocumentRequest object.
 */
BatchDeleteDocumentRequest::BatchDeleteDocumentRequest()
    : KendraRequest(new BatchDeleteDocumentRequestPrivate(KendraRequest::BatchDeleteDocumentAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteDocumentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteDocumentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteDocumentRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteDocumentResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::BatchDeleteDocumentRequestPrivate
 * \brief The BatchDeleteDocumentRequestPrivate class provides private implementation for BatchDeleteDocumentRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchDeleteDocumentRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
BatchDeleteDocumentRequestPrivate::BatchDeleteDocumentRequestPrivate(
    const KendraRequest::Action action, BatchDeleteDocumentRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteDocumentRequest
 * class' copy constructor.
 */
BatchDeleteDocumentRequestPrivate::BatchDeleteDocumentRequestPrivate(
    const BatchDeleteDocumentRequestPrivate &other, BatchDeleteDocumentRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
